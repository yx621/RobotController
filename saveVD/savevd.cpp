#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;
    

int main(int argc, char const *argv[])
{
    /* code */
    VideoCapture cap(0);

    if (!cap.isOpened())
    {
        cout << "ERROR: cannot open the file\n";
        return -1;

    }

    namedWindow("YongxinWindow", CV_WINDOW_AUTOSIZE);

    double dWidth = cap.get(CV_CAP_PROP_FRAME_WIDTH);
    // get the width of the frame

    double dHeight = cap.get(CV_CAP_PROP_FRAME_HEIGHT);
    // get the height of the frame

    cout << "frame size = " << dWidth << " X " << dHeight << "\n";

    Size frameSize(static_cast<int> (dWidth), static_cast<int> (dHeight));

    VideoWriter oVideoWriter("/home/yongxin/Documents/opencv/yossi/saveVD/testvideo00.avi", CV_FOURCC('P','I','M','1'), 20, frameSize, true);
    if(!oVideoWriter.isOpened())
    {
        cout << "ERROR: failed to write the video file \n";
        return -1;
    }

    while (1)
    {
        Mat frame;

        bool bSuccess = cap.read(frame);

        if (!bSuccess)
        {
            cout << "cannot read a frame from the camera\n";
            break;
        }

        oVideoWriter.write(frame);

        imshow("YongxinWindow", frame);

        if (waitKey(30) == 27)
        {
            cout << "esc key is pressed\n";
            break;
        }
    }

    cap.release();
    
    return 0;
}