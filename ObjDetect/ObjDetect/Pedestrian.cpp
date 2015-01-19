/************************************************************************/
/*      Author: Zhong Chong
/*      Copyright (C) All rights reserved.
/*      Date: 2015-1-15
/*      Describetion: This class is a object detector to detect pedestrian
/*      FileName: Pedestrian.cpp
/************************************************************************/

#include "Pedestrian.h"
#include <vector>

Pedestrian::Pedestrian(void)
{
	hog.setSVMDetector(cv::HOGDescriptor::getDefaultPeopleDetector());
}

int Pedestrian::detect_and_draw(cv::Mat &mat)
{
	std::vector<cv::Rect> find;
	hog.detectMultiScale(mat,find);
	for (int i = 0; i < find.size(); ++i)
	{
		cv::rectangle(mat,find[i],cv::Scalar(0,0,255),2);
	}
	return 0;
}

Pedestrian::~Pedestrian(void)
{
}
