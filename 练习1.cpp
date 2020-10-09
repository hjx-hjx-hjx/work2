#include<iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace std;
using namespace cv;
int main() {
	Mat src_color = imread("solar_cell_01.png");		//��ȡһ��ͼƬ�ڵ�ǰĿ¼�²���
	vector<Mat> channels;								//����һ����ΪMat������
	split(src_color, channels);							//����src_color������ͨ�����洢������channels��
	Mat B = channels.at(0);								//�洢Bͨ����ֵ
	Mat G = channels.at(1);								//G
	Mat R = channels.at(2);								//R
	imshow("red", R);
	imshow("blue", B);
	imshow("green", G);
	imshow("original Mat", src_color);
	waitKey(0);
}