#include "FaceDetector.h"
#include <vector>

FaceDetector::FaceDetector(void)
{
	if( !faceClassifier.load("./Resources/haarcascade_frontalface_alt2.xml") )
	{
		printf("face_classifier load xml file error\n");
	}
}

int FaceDetector::detect_and_draw(cv::Mat &mat)
{
	std::vector<cv::Rect> faces;
	cv::Mat face_gray;
	cv::cvtColor(mat,face_gray,CV_BGR2GRAY);
	cv::equalizeHist(face_gray,face_gray);
	faceClassifier.detectMultiScale(face_gray,
		faces, 1.1, 2, 0|CV_HAAR_SCALE_IMAGE,
		cv::Size(30,30));
	for(int i=0; i<faces.size(); ++i)
	{
		cv::rectangle(mat,faces[i],cv::Scalar(0,0,255),2);
	}
	return 0;
}

FaceDetector::~FaceDetector(void)
{

}
