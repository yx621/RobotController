#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main(int argc, char const *argv[])
{
    // VideoCapture cap(0);
    VideoCapture cap2(1);
    // cap2.set(CV_CAP_PROP_FRAME_WIDTH, 300);
    // cap2.set(CV_CAP_PROP_FRAME_HEIGHT, 200); 
    int key = 0;
    Mat frame;
    Mat frame1;
    namedWindow("YongxinWindow", WINDOW_AUTOSIZE);

    while(key != 27)
    {
        // cap2.read(frame1);
        cap2 >> frame1;
        // cap >> frame;
        // imshow("0",frame);
        // imshow("YongxinWindow", frame1);
        // key = waitKey(10);
        // cout << "The default width and height are (" << frame1.width << ", " << frame1.height << ")\n";
        cout << "The default width and height are (" << cap2.get(CV_CAP_PROP_FRAME_WIDTH) << ", " << cap2.get(CV_CAP_PROP_FRAME_HEIGHT) << ")\n";

    }
    // cap.release();

    cap2.release();
    return 0;
    // return 0;
}