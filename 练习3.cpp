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
	cv::Rect rect;													//定义矩形的左上角坐标
	rect.x = 100;
	rect.y = 100;
	rect.width = 300;												//定义矩形的宽
	rect.height = 150;												//定义矩形的高
	rectangle(dispMat, rect, CV_RGB(255, 0, 0), 2, 8, 0);			//画矩形，第一个参数为目标图像，第二个为圆心，第三个为颜色，第四个为线条粗细（取-1则为实心圆），后两个为关系衔接和偏移，一般默认8，0
	circle(dispMat, pt, 250, CV_RGB(255, 0, 0), 2, 8, 0);			//画圆，第一个参数为目标图像，第二个为圆心，第三个为半径，第四个为颜色，第五个为线条粗细（取-1则为实心圆），后两个为关系衔接和偏移，一般默认8，0
	line(dispMat, pt1, pt, CV_RGB(255, 0, 0), 2, 8, 0);				//画线，第一个参数为目标图像，第二个为起点坐标，第三个为终点坐标，第四个为颜色，第五个为线条粗细（取-1则为实心圆），后两个为关系衔接和偏移，一般默认8，0
	imshow("dispMat", dispMat);
	waitKey(0);
}