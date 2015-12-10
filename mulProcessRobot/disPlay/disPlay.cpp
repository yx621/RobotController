#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <fstream>

using namespace cv;
using namespace std;
// the output of mux should be image file, but first no need to consider it, just make sure can read one file and set it to 0 

Mat readImage(int nCount)
{
    vector<int> compression_params; //vector that stores the compression parameters of the image
    compression_params.push_back(CV_IMWRITE_JPEG_QUALITY); 
    //specify the compression technique
    compression_params.push_back(98); 
    
    Mat frame;
    bool bFlag;

    while(1)
    {
        switch(nCount)
        {
            case 0:
            // read image from folder
                frame = imread("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage0.jpg", CV_LOAD_IMAGE_UNCHANGED);
                if (frame.empty())
                // if (!frame)
                {
                    cout << "cannot read the frame \n";
                }

                else    
                {
                    bFlag = true;
                }

                nCount = (nCount+1)%3;
                break;
            case 1:
                frame = imread("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage1.jpg", CV_LOAD_IMAGE_UNCHANGED);
                // if (frame == NULL)
                if (frame.empty())
                {
                    cout << "cannot read the frame \n";
                }

                else    
                {
                    bFlag = true;
                }

                nCount = (nCount+1)%3;
                break;
            case 2:
                frame = imread("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage2.jpg", CV_LOAD_IMAGE_UNCHANGED);
                // if (frame == NULL)
                if (frame.empty())
                {
                    cout << "cannot read the frame \n";
                }

                else    
                {
                    bFlag = true;
                }

                nCount = (nCount+1)%3;
                break;
            default:
                nCount = (nCount+1)%3;
                break;
        }

        if (bFlag == true)
        {
            bFlag = false;
            return frame;
            // break;
        }

    }

    return frame;
}

int main(int argc, char const *argv[])
{

    Mat img(650, 600, CV_16UC3, Scalar(0,65530, 65530)); 
    
    // Mat img;

    // bool bFlag = false;
    int key = 0;

    // char chControl;
    int nCount = 0;

    while (1)
    {
       
        key = waitKey(50);
        
        if (key == 27)
        {
            cout << "esc is pressed \n";
            break;
        }

        img = readImage(nCount);
        imshow("displayWindow", img);
        nCount = (nCount+1)%3;
        //display the image which is stored in the 'img' in the "MyWindow" window
    }

    return 0;
}