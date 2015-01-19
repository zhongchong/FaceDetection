/************************************************************************/
/*      Author: Zhong Chong
/*      Copyright (C) All rights reserved.
/*      Date: 2015-1-15
/*      Describetion: This class is a object detector to detect pedestrian
/*      FileName: Pedestrian.h
/************************************************************************/
#pragma once
#include <opencv2/objdetect/objdetect.hpp>

class Pedestrian
{
public:
	Pedestrian(void);
	~Pedestrian(void);
	int detect_and_draw(cv::Mat &mat);
private:
	cv::HOGDescriptor hog;
};

