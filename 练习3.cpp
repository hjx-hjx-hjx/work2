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
	cv::Rect rect;													//������ε����Ͻ�����
	rect.x = 100;
	rect.y = 100;
	rect.width = 300;												//������εĿ�
	rect.height = 150;												//������εĸ�
	rectangle(dispMat, rect, CV_RGB(255, 0, 0), 2, 8, 0);			//�����Σ���һ������ΪĿ��ͼ�񣬵ڶ���ΪԲ�ģ�������Ϊ��ɫ�����ĸ�Ϊ������ϸ��ȡ-1��Ϊʵ��Բ����������Ϊ��ϵ�νӺ�ƫ�ƣ�һ��Ĭ��8��0
	circle(dispMat, pt, 250, CV_RGB(255, 0, 0), 2, 8, 0);			//��Բ����һ������ΪĿ��ͼ�񣬵ڶ���ΪԲ�ģ�������Ϊ�뾶�����ĸ�Ϊ��ɫ�������Ϊ������ϸ��ȡ-1��Ϊʵ��Բ����������Ϊ��ϵ�νӺ�ƫ�ƣ�һ��Ĭ��8��0
	line(dispMat, pt1, pt, CV_RGB(255, 0, 0), 2, 8, 0);				//���ߣ���һ������ΪĿ��ͼ�񣬵ڶ���Ϊ������꣬������Ϊ�յ����꣬���ĸ�Ϊ��ɫ�������Ϊ������ϸ��ȡ-1��Ϊʵ��Բ����������Ϊ��ϵ�νӺ�ƫ�ƣ�һ��Ĭ��8��0
	imshow("dispMat", dispMat);
	waitKey(0);
}