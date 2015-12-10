#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;

bool imWrite0(Mat frame, vector<int> compression_params)
{
    return imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image0.jpg", frame, compression_params);
}

bool imWrite1(Mat frame, vector<int> compression_params)
{
    return imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image1.jpg", frame, compression_params);
}

bool imWrite2(Mat frame, vector<int> compression_params)
{
    return imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image2.jpg", frame, compression_params);
}

int main(int argc, char const *argv[])
{

    Mat img(650, 600, CV_16UC3, Scalar(0,65530, 65530)); 
    VideoCapture cap(0);

    if (!cap.isOpened())
    {
        cout << "ERROR: cannot open the file\n";
        return -1;

    }
    
    int nCount = 0;
    bool bFlag = false;

    // namedWindow("YongxinWindow", CV_WINDOW_AUTOSIZE);

    double dWidth = cap.get(CV_CAP_PROP_FRAME_WIDTH);
    // get the width of the frame

    double dHeight = cap.get(CV_CAP_PROP_FRAME_HEIGHT);
    // get the height of the frame
    vector<int> compression_params; //vector that stores the compression parameters of the image
    compression_params.push_back(CV_IMWRITE_JPEG_QUALITY); 
    //specify the compression technique
    compression_params.push_back(98); 

    imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image0.jpg", img, compression_params);
    imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image1.jpg", img, compression_params);
    imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image2.jpg", img, compression_params);

    // write the status information in the file
    FILE *fp;
    // char str[50];
    
    while (1)
    {
        Mat frame;
        bool bSuccess = cap.read(frame);

        if (!bSuccess)
        {
            cout << "cannot read a frame from the camera\n";
            break;
        }

        imshow("camera1Window", frame);

        if (waitKey(50) == 27)
        {
            cout << "esc key is pressed\n";
            break;
        }

        // need to open an image file first, just as the indicator for its operation.
        // fp2 = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/status.txt","w+");
        // fp  = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/status.txt","w+");
        // fp  = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/status.txt","r");
        while(1)
        {
            switch(nCount)
            {
                case 0:
                    fp = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image0.jpg", "r");
                    if (fp == NULL)
                    {
                        printf("camera1image0.jpg Not Found\n");
                        // nCount = (nCount+1)%3;
                        // break;
                    }

                    else
                    {
                        fclose(fp);
                        int nTemp = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image0.jpg");
                        if (nTemp != 0)
                        {
                            cout << "cannot delete the file camera1image0.jpg \n";
                            break;
                        }
                        bFlag = true;
                        if (imWrite0(frame, compression_params) == false)
                            cout << "Cannot write the frame to camera1image0 file \n";
                        
                    }
                    nCount = (nCount+1)%3;
                    break;
                
                case 1:
                    fp = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image1.jpg", "r");
                    if (fp == NULL)
                    {
                        printf("camera1image1.jpg Not Found\n");
                        // nCount = (nCount+1)%3;
                        // break;
                    }

                    else
                    {
                        
                        fclose(fp);
                        int nTemp = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image1.jpg");
                        if (nTemp != 0)
                        {
                            cout << "cannot delete the file camera1image1.jpg \n";
                            break;
                        }
                        bFlag = true;
                        if (imWrite1(frame, compression_params) == false)
                            cout << "cannot write the frame to camera1image1 file \n";
                        
                    }
                        
                    nCount = (nCount+1)%3;
                    break;
                case 2:
                    fp = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image2.jpg", "r");
                    if (fp == NULL)
                    {
                        printf("camera1image2.jpg Not Found\n");
                        // nCount = (nCount+1)%3;
                        // break;
                    }

                    else
                    {
                        fclose(fp);
                        int nTemp = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image2.jpg");
                        if (nTemp != 0)
                        {
                            cout << "cannot delete the file camera1image2.jpg \n";
                            break;
                        }
                        bFlag = true;
                        if (imWrite2(frame, compression_params) == false)
                            cout << "cannot write the frame to camera1image2 file \n";
                    }
                    nCount = (nCount+1)%3;
                    break;
                default:
                    nCount = (nCount+1)%3;
                    break;
            }

            if (bFlag == true)
            {
                cout << "write to file " << nCount << endl;
                bFlag = false;
                break;
            }
        }
        // need to consider read and write? 
        // one file for read, one for write and one for the next write
        // what we have is one file in the memory (frame)
        // new file and old file, which one is in memory.... 

        // bool bSuccess2 = imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1write.jpg", frame, compression_params);

        
        // this indicate a new file write 

        // if(!bSuccess2)
        // {
        //     cout << "ERROR: failed to write the image file \n";
        //     return -1;
        // }   
        

    }

    cap.release();

    return 0;
}