#include "MainWindow.h"
#include <QtGui/QFileDialog>
#include <QtGui/QMovie>
#include <opencv2/core/core.hpp>
#include "Utility.h"
#include "FaceDetector.h"
#include <QtGui/QDropEvent>
#include <QtCore/QList>
#include <QtCore/QUrl>
#include <QtCore/QDebug>
#include "ZTimer.h"
#include "Pedestrian.h"

ObjDetect::ObjDetect(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	
	ui.image->setAcceptDrops(true);
	ui.image->installEventFilter(this);
	link();
}

void ObjDetect::link()
{
	//link loadimg 
	connect(ui.pushButton_1,SIGNAL(clicked()),this,SLOT(loadImg()));
	connect(ui.pushButton_2,SIGNAL(clicked()),this,SLOT(detect()));
}

void ObjDetect::refreshImg()
{
	if(img1.isNull())
	{
		return;
	}
	ui.image->setPixmap(QPixmap::fromImage(img1));
}

void ObjDetect::loadImg()
{
	QString fileName;
	fileName = QFileDialog::getOpenFileName(this,
		QString::fromLocal8Bit("´ò¿ªÍ¼Æ¬"),
		QString::fromLocal8Bit("./image/"),
		QString::fromLocal8Bit("Image Files(*.jpg *.png *.gif)")
		);
	QStringList list1 = fileName.split(QString::fromLocal8Bit("."));
	QString fileType = list1.at(list1.length()-1);
	if( fileType == QString::fromLocal8Bit("gif") )
	{
		QMovie movie(fileName);
		movie.jumpToNextFrame();
		img = movie.currentImage();
	}
	else
		img.load(fileName);
	ui.times->setText(QString::fromLocal8Bit("0ms"));
	img1 = img;
	refreshImg();
}

void ObjDetect::detect()
{
	if( img.isNull() )
		return;
	cv::Mat mat;
	ZTimer timer;
	double times=0;
	if(ui.comboBox->currentIndex() == 0 && QImage2Mat(img,mat))
	{
		FaceDetector detector;
		timer.start();
		detector.detect_and_draw(mat);
		times = timer.stop();
	}
	else if(ui.comboBox->currentIndex() == 1 && QImage2Mat(img,mat))
	{
		Pedestrian detector;
		timer.start();
		detector.detect_and_draw(mat);
		times = timer.stop();
	}
	ui.times->setText(QString::number(times,'g',6)+QString::fromLocal8Bit("ms"));
	Mat2QImage(mat,img1);
	refreshImg();
}

bool ObjDetect::eventFilter(QObject *watched, QEvent *event)
{
	if (watched == ui.image)
	{
		if (event->type() == QEvent::DragEnter)
		{
			QDragEnterEvent *dee = dynamic_cast<QDragEnterEvent *>(event);
			dee->acceptProposedAction();
			return true;
		}
		else if (event->type() == QEvent::Drop) 
		{
			QDropEvent *de = dynamic_cast<QDropEvent *>(event);
			QList<QUrl> urls = de->mimeData()->urls();

			if (urls.isEmpty()) { return true; }
			QString path = urls.first().toLocalFile();
			QStringList list1 = path.split(QString::fromLocal8Bit("."));
			QString fileType = list1.at(list1.length()-1);
			if( fileType == QString::fromLocal8Bit("gif") )
			{
				QMovie movie(path);
				movie.jumpToNextFrame();
				img = movie.currentImage();
			}
			else
				img.load(path);
			ui.times->setText(QString::fromLocal8Bit("0ms"));
			img1 = img;
			refreshImg();
			return true;
		}
	}
	return QWidget::eventFilter(watched, event);
}

ObjDetect::~ObjDetect()
{

}
