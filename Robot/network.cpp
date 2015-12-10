#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    cout << "Hello world\n";
    /*check the environment works*/

    // cap1 used for the cameta
    VideoCapture cap1(0);

    // cap2 used for read video from the disk

    VideoCapture cap2("/home/yongxin/Downloads/pirate.mp4");
    /*we have 2 video capture objects here*/
    bool bFlagCM, bFlagVD;
    bFlagCM = false;
    bFlagVD = false;

    if(!cap1.isOpened() && !cap2.isOpened())
    {
        cout << "cannot open the camera and the video \n";
        bFlagVD = true;
        bFlagCM = true;
        return -1;
    }

    if (!cap1.isOpened())
    {
        cout << "cannot open the camera \n";
        bFlagCM = true;
        return -2;
    }

    if (!cap2.isOpened())
    {
        cout << "cannot open the video \n";
        bFlagVD = true;
        return -3;
    }

    double dWidth = cap1.get(CV_CAP_PROP_FRAME_WIDTH);
    double dHeight = cap1.get(CV_CAP_PROP_FRAME_HEIGHT);
    cout << "Frame size is " << dWidth << " X " << dHeight << "\n";
    
    namedWindow("YongxinWindow", WINDOW_AUTOSIZE);

    bool bIndi = 0;

    while(1)
    {
        Mat frame1;
        Mat frame2;
        Mat frame;
            
        bool bSucc2 = cap2.read(frame2);

        if (!bSucc1 && !bSucc2)
        {
            cout << "cannot read frame from camera and video\n";
            return -4;
        }

        else if(!bSucc2)
        {
            frame = frame1;
            // imshow("YongxinWindow", frame);
        }

        else if(!bSucc1)
        {
            frame = frame2;
            // imshow("YongxinWindow", frame1);
        }

        else
        {
            int key = waitKey(30);  
            cout << "Just get some outptut from waitKey function " << key << endl;    

            if (key == 27)
            {
                cout << "esc key is pressed by the user\n";
                break;
            }

            else if (key == 99)
            {
                frame = frame1;
                bIndi = true;
            }

            else if (key == 118)
            // else
            {
                bIndi = false;
                frame = frame2;
            }

            else
            {
                if (bIndi)
                    frame = frame1;
                else
                {
                    frame = frame2;
                }
            }
            /*

            else
            {
                frame = frame;
            }
            */
        }

        imshow("YongxinWindow", frame);

    }

    cap1.release();
    cap2.release();

    return 0;
}