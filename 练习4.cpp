#include<iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace std;
using namespace cv;
int main() {
	int n = 0;
	float histgram[256];
	for (int i = 0; i < 256; i++) {
		histgram[i] = 0;
	}
	Mat dispMat = imread("jialong1000.jpg",0);
	int height = dispMat.rows;
	int width = dispMat.cols;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			n++;
			histgram[dispMat.at<uchar>(i,j)]++;//将灰度值赋值给了数组
		}
	}
	for (int i = 0; i < 256; i++) {
		histgram[i] /= n;
		histgram[i] = histgram[i] * 4000;
		cout << histgram[i]<<endl;
	}
	Mat image(255, 255, CV_8UC3,cv::Scalar(0,0,0));//声明一个空白图片

	for (int longs = 0; longs < 255; longs++)
	{
		cv::Point pt,pt1;
		pt.x = longs;
		pt.y = 255-histgram[longs];
		pt1.x = longs;
		pt1.y = 255;
		line(image, pt, pt1, CV_RGB(255, 255, 255), 1, 8, 0);
//		line(image, pt1, pt, CV_RGB(255, 0, 0), 2, 8, 0);

	}
	imshow("1", image);
	waitKey(0);

}