#include"utility.h"
#include <QtCore/QDebug>

/*
*Description: Convert Mat to QImage
*Input: a single image
*Output: return 0 indicate translate false, return 1 indicate translate true
*/
int Mat2QImage(const cv::Mat& mat, QImage &img)
{
    // 8-bits unsigned, NO. OF CHANNELS=1
    if(mat.type()==CV_8UC1)
    {
        // Set the color table (used to translate colour indexes to qRgb values)
        QVector<QRgb> colorTable;
        for (int i=0; i<256; i++)
            colorTable.push_back(qRgb(i,i,i));
        // Copy input Mat
        const uchar *qImageBuffer = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(qImageBuffer, mat.cols, mat.rows, mat.step, QImage::Format_Indexed8);
        image.setColorTable(colorTable);
        img = image;
		return 1;
    }
    // 8-bits unsigned, NO. OF CHANNELS=3
    if(mat.type()==CV_8UC3)
    {
        // Copy input Mat
        const uchar *qImageBuffer = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(qImageBuffer, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        img = image.rgbSwapped();
		return 1;
    }
	return 0;
}

/*
*Description: Convert QImage to Mat
*Input: a single image
*Output: return 0 indicate translate false, return 1 indicate translate true
*/
int QImage2Mat(const QImage &img, cv::Mat &mat)
{
	//8-bits unsigned channels=1 
	if(img.format() == QImage::Format_Indexed8)
	{
		cv::Mat image(img.height(), img.width(), CV_8UC1, (uchar*)img.bits(), (size_t)img.bytesPerLine());
		mat = image.clone();
		cv::cvtColor(mat,mat,CV_RGB2BGR);
		return 1;
	}
	//8-bits unsigned channels=3 (0xRRGGBB)
	if(img.format() == QImage::Format_RGB888)
	{
		cv::Mat image(img.height(), img.width(), CV_8UC3, (uchar*)img.bits(), (size_t)img.bytesPerLine());
		mat = image.clone();
		cv::cvtColor(mat,mat,CV_RGB2BGR);
		return 1;
	}
	//8-bits unsigned channels=4  (0xffRRGGBB).
	if(img.format() == QImage::Format_RGB32)
	{
		QImage image0 = img.convertToFormat(QImage::Format_RGB888);
		cv::Mat image(image0.height(), image0.width(), CV_8UC3, (uchar*)image0.bits()
			, (size_t)image0.bytesPerLine());
		mat = image.clone();
		cv::cvtColor(mat,mat,CV_RGB2BGR);
		return 1;
	}
	return 0;
}

/*
*Description: name a windows to show a image
*Input: a single image and a window's name
*Output: return 1 indicate success, return zero indicate false 
*/
int display(const cv::Mat &mat, const std::string name)
{
	if(mat.rows && mat.cols)
	{
		//name is window's name
		cvNamedWindow(name.c_str());
		//show image
		cv::imshow(name,mat);
		//wait a key to shutdown the window
		cv::waitKey(0);
	}
	return 0;
}