#include<iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace std;
using namespace cv;
int main() {
	VideoCapture cap;									//����һ��VideoCapture�Ķ���
	cap.open(0);										//�򿪱����ĵ�һ������ͷ

	if (!cap.isOpened()) {								//�������ͷ�Ƿ�����������������������᷵��1
		cout << "���ܴ���Ƶ�ļ�" << endl;
		return -1;
	}

	double fps = cap.get(CAP_PROP_FPS);					//ͨ��get�����Ƶ��֡�����ı�get����Ĳ������Ի������ֵ����Ϊ���FPS��
	cout << "fps" << fps << endl;
	while(1) {
		Mat frame;
		bool rSucess = cap.read(frame);					//ͨ��read�����Ƶ�ĵ�ǰ֡��
		if (!rSucess) {									//ͨ��rSucess�ж��Ƿ����˵�ǰ֡��
			cout << "���ܴ���Ƶ�ļ��ж�ȡ֡" << endl;
			break;
		}
		else {
			imshow("frame", frame);						//�����ǰ����ȡ��֡��
		}
		waitKey(30);									//��ʱ����Ȼ�޷���ʾ
	}
	return 0;
}