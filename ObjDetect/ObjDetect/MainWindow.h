#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "ui_objdetect.h"

class ObjDetect : public QMainWindow
{
	Q_OBJECT

public:
	ObjDetect(QWidget *parent = 0, Qt::WFlags flags = 0);
	~ObjDetect();

private:
	Ui::ObjDetectClass ui;
	//label image
	QImage img;
	QImage img1;
	//link signal to slots
	void link();
	//update image
	void refreshImg();
	//get drop event
	bool eventFilter(QObject *watched, QEvent *event);

private slots:
	//get image address
	void loadImg();
	//detect the face from image
	void detect();
};

#endif // MAINWINDOW_H
