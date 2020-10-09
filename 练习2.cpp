#include<iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace std;
using namespace cv;
int main() {
	VideoCapture cap;									//声明一个VideoCapture的对象
	cap.open(0);										//打开本机的第一个摄像头

	if (!cap.isOpened()) {								//检查摄像头是否正常开启，若正常开启则会返回1
		cout << "不能打开视频文件" << endl;
		return -1;
	}

	double fps = cap.get(CAP_PROP_FPS);					//通过get获得视频的帧数（改变get里面的参数可以获得其他值例中为获得FPS）
	cout << "fps" << fps << endl;
	while(1) {
		Mat frame;
		bool rSucess = cap.read(frame);					//通过read获得视频的当前帧数
		if (!rSucess) {									//通过rSucess判断是否获得了当前帧数
			cout << "不能从视频文件中读取帧" << endl;
			break;
		}
		else {
			imshow("frame", frame);						//输出当前所读取的帧数
		}
		waitKey(30);									//延时，不然无法显示
	}
	return 0;
}