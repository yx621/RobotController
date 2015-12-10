#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <fstream>

using namespace cv;
using namespace std;
// the output of mux should be image file, but first no need to consider it, just make sure can read one file and set it to 0 

int openSwitch(int nCount)
{
    FILE * fp;
    fstream openFile;
    bool bFlag = false;
    int nTemp = -1;

    while (1)
    {
        switch(nCount)
        {
            case 0: 
                openFile.open("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status0.txt");
                if (!openFile.is_open())
                {
                    cout << "cannot open file status0 \n";
                }
                
                else
                {
                    openFile >> nTemp;
                    openFile.close();

                    int bIndicator = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status0.txt");
                    
                    if (bIndicator != 0)
                    {
                        cout << "cannot delete the file status0.jpg \n";
                        break;
                    }
                    
                    fp=fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status0.txt","w");
                    fputs("0", fp);
                    bFlag = true;
                    fclose(fp);
                }

                nCount = (nCount+1)%3;
                break;

            case 1: 
                openFile.open("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status1.txt");
                if (!openFile.is_open())
                {
                    cout << "cannot open file status1 \n";
                }
                else
                {
                    openFile >> nTemp;
                    openFile.close();
                    int bIndicator = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status1.txt");
                    if (bIndicator != 0)
                    {
                        cout << "cannot delete file status1 \n";
                        break;
                    }
                    fp = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status1.txt", "w");
                    fputs("0", fp);
                    bFlag = true;
                    fclose(fp);
                }

                nCount = (nCount+1)%3;
                break;

            case 2:
                openFile.open("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status2.txt");
                if (!openFile.is_open())
                {
                    cout << "cannot open file status1 \n";
                }
                else
                {
                    openFile >> nTemp;
                    openFile.close();
                    int bIndicator = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status2.txt");
                    if (bIndicator != 0)
                    {
                        cout << "cannot delete file status2 \n";
                        break;
                    }

                    fp = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status2.txt", "w");
                    fputs("0", fp);
                    bFlag = true;
                    fclose(fp);
                }

                nCount = (nCount+1)%3;
                break;
            
            default:
                nCount = (nCount+1)%3;
                break;
        }

        if (bFlag = true)
        {
            bFlag = false;
            // break;
            return nTemp;
        }
    }

    return nTemp;
}

Mat readImage1(int nCount)
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
                frame = imread("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image0.jpg", CV_LOAD_IMAGE_UNCHANGED);
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
                frame = imread("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image1.jpg", CV_LOAD_IMAGE_UNCHANGED);
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
                frame = imread("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image2.jpg", CV_LOAD_IMAGE_UNCHANGED);
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

Mat readImage2(int nCount)
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
                frame = imread("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera2/camera2image0.jpg", CV_LOAD_IMAGE_UNCHANGED);
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
            case 1:
                frame = imread("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera2/camera2image1.jpg", CV_LOAD_IMAGE_UNCHANGED);
                // if (frame == NULL)
                if (frame.empty())
                {
                    cout << "cannot read the frame \n";
                }

                else    
                {
                    /*
                    int nTemp = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera2/camera2image1.jpg");
                    if (nTemp != 0)
                    {
                        cout << "cannot delete the file camera1image1.jpg \n";
                        break;
                    }
                    bFlag = true;
                    imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/camera1image1.jpg", frame, compression_params);
                    */
                    bFlag = true;
                }

                nCount = (nCount+1)%3;
                break;
            case 2:
                frame = imread("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera2/camera2image2.jpg", CV_LOAD_IMAGE_UNCHANGED);
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

void writeImage(Mat frame, int nCount)
{
    vector<int> compression_params; //vector that stores the compression parameters of the image
    compression_params.push_back(CV_IMWRITE_JPEG_QUALITY); 
    //specify the compression technique
    compression_params.push_back(98); 

    FILE * fp;
    bool bFlag = false;

    while(1)
    {
        switch(nCount)
        {
            case 0:
                fp = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage0.jpg", "r");
                if (fp == NULL)
                {
                    cout << "muximage0.jpg Not Found \n";
                    // nCount = (nCount+1)%3;
                    // break;
                }

                else
                {
                    fclose(fp);
                    int nTemp = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage0.jpg");
                    if (nTemp != 0)
                    {
                        cout << "cannot delete the file muximage0.jpg \n";
                        break;
                    }
                    
                    bFlag = true;

                    // bool bIndi = imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera2/camera2image0.jpg", frame, compression_params);
                    if (imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage0.jpg", frame, compression_params) == false)
                        cout << "Cannot write the frame to muximage0 file \n";
                        
                }
                
                nCount = (nCount+1)%3;
                break;
                
            case 1:
                fp = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage1.jpg", "r");
                if (fp == NULL)
                {
                    cout << "camera2image1.jpg Not Found\n";
                }

                else
                {
                    fclose(fp);
                    int nTemp = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage1.jpg");
                    if (nTemp != 0)
                    {
                        cout << "cannot delete the file muximage1.jpg \n";
                        break;
                    }
                    bFlag = true;
                    if (imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage1.jpg", frame, compression_params) == false)
                        cout << "cannot write the frame to muximage1 file \n";
                    
                }
                
                nCount = (nCount+1)%3;
                break;
            case 2:
                fp = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage2.jpg", "r");
                if (fp == NULL)
                {
                    cout << "camera2image2.jpg Not Found\n";
                        // nCount = (nCount+1)%3;
                        // break;
                }

                else
                {
                    fclose(fp);
                    int nTemp = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage2.jpg");
                    if (nTemp != 0)
                    {
                        cout << "cannot delete the file muximage2.jpg \n";
                        break;
                    }
                    bFlag = true;
                    if (imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage2.jpg", frame, compression_params) == false)
                        cout << "cannot write the frame to muximage2 file \n";
                }
                nCount = (nCount+1)%3;
                break;
                
            default:
                nCount = (nCount+1)%3;
                break;
        }

        if (bFlag == true)
        {
            // cout << "write to file " << nCount << endl;
            bFlag = false;
            return;
            // break;
        }
    }
}

int main(int argc, char const *argv[])
{
    /* The purpose of mux is read from switch file and reset it after read
     * based on the read result, decide which image to use and store
     * If the input data is not valid, just don't do anything
     */

    /* It's a whole loop (pehraps we should also display a window for it such that it can escape from teh file)
       
        in the while loop:
            -- read from the switch file all the time
                -- read should be a function and return the integer number 
                -- reset the file content to be 0
                -- all the read write will be like the one we saw in other process

            -- based on the read result, choose which image to read
                -- delete the file
                -- write this image to local folder and write back
            -- write the image to another folder
     */
    
    int nSelect = -1;
    Mat img(650, 600, CV_16UC3, Scalar(0,65530, 65530)); 
    Mat frame;
    // Mat img;

    // bool bFlag = false;
    int key = 0;
    int nCount = 0;
    vector<int> compression_params; //vector that stores the compression parameters of the image
    compression_params.push_back(CV_IMWRITE_JPEG_QUALITY); 
    //specify the compression technique
    compression_params.push_back(98); 
    imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage0.jpg", img, compression_params);
    imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage1.jpg", img, compression_params);
    imwrite("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/mux/muximage2.jpg", img, compression_params);
    // char chControl;

    while (1)
    {
        // if use parameter input, the process will strop... 
        key = waitKey(50);
        
        if (key == 27)
        {
            cout << "esc is pressed \n";
            break;
        }

        imshow("muxWindow", img);
        //display the image for the mux so that it can accept key from the board
        nSelect = openSwitch(nCount);
        nCount = (nCount+1)%3;
        // int nTemp2 = openSwitch(nCount);

        if (nSelect == 1)
        {
            frame = readImage1(nCount);
        }

        else if (nSelect == 2)
        {
            frame = readImage2(nCount);
        }

        else
        {
            cout << "the switch file gives number " << nSelect <<"\n";
            continue;
        }

        writeImage(frame, nCount);
       
    }

    return 0;
}