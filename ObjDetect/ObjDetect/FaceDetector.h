#pragma once

#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>

class FaceDetector
{
public:
	FaceDetector(void);
	~FaceDetector(void);
	int detect_and_draw(cv::Mat &mat);
private:
	cv::CascadeClassifier faceClassifier;
};

