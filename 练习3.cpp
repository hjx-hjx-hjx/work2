#include<iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace std;
using namespace cv;
int main() {
	Mat dispMat = imread("solar_cell_01.png");
	cv::Point pt,pt1;
	pt.x = 300;
	pt.y = 300;
	pt1.x = 10;
	pt1.y = 10;
	cv::Rect rect;
	rect.x = 100;
	rect.y = 100;
	rect.width = 300;
	rect.height = 150;
	rectangle(dispMat, rect, CV_RGB(255, 0, 0), 2, 8, 0);
	circle(dispMat, pt, 250, CV_RGB(255, 0, 0), 2, 8, 0);
	line(dispMat, pt1, pt, CV_RGB(255, 0, 0), 2, 8, 0);
	imshow("dispMat", dispMat);
	waitKey(0);
}