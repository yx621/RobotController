#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main(int argc, char const *argv[])
{
    VideoCapture cap(1);
    // VideoCapture cap(1);

    // open the camera 

    if(!cap.isOpened())
    {
        cout << "cannot open the camera\n";
        return -1;
    }
    
    double dWidth = cap.get(CV_CAP_PROP_FRAME_WIDTH);
    double dHeight = cap.get(CV_CAP_PROP_FRAME_HEIGHT);
    cout << "Frame size is " << dWidth << " X " << dHeight << "\n";
    
    namedWindow("YongxinWindow", WINDOW_AUTOSIZE);
    

    while(1)
    {
        Mat frame;
        bool bSuccess = cap.read(frame);
        
        if (!bSuccess)
        {
            cout << "Cannot read frame from camera\n";
            break;
            // return -2;
        }

        imshow("YongxinWindow", frame);

        int key = waitKey(30);
        cout << "Just get some outptut from waitKey function " << key << endl;
        // if (waitKey(30) == 27)
        if (key == 27)
        {
            cout << "esc key is pressed by the user\n";
            break;
        }
        
    }
    
    cap.release();

    return 0;
}