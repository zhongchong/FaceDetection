#pragma once

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <QtGui/QImage>
#include <string>

//outer function
extern int Mat2QImage(const cv::Mat& mat, QImage &img);
extern int QImage2Mat(const QImage &img, cv::Mat &mat);
extern int display(const cv::Mat &mat, const std::string name);
