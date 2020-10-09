#include<iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace std;
using namespace cv;
int main() {
	Mat src_color = imread("solar_cell_01.png");		//读取一个图片在当前目录下才行
	vector<Mat> channels;								//声明一个名为Mat的容器
	split(src_color, channels);							//分离src_color的三个通道并存储在容器channels中
	Mat B = channels.at(0);								//存储B通道的值
	Mat G = channels.at(1);								//G
	Mat R = channels.at(2);								//R
	imshow("red", R);
	imshow("blue", B);
	imshow("green", G);
	imshow("original Mat", src_color);
	waitKey(0);
}