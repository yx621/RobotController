#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main(int argc, char const *argv[])
{

    Mat img(650, 600, CV_16UC3, Scalar(0,65530, 65530)); 
    
    namedWindow("YongxinWindow2", CV_WINDOW_AUTOSIZE);
    // get the height of the frame
    vector<int> compression_params; //vector that stores the compression parameters of the image
    compression_params.push_back(CV_IMWRITE_JPEG_QUALITY); 
    //specify the compression technique
    compression_params.push_back(98); 

    // write the status information in the file
    FILE *fp;
    // char str[50];
    
    while (1)
    {
        // Mat frame;
        // bool bSuccess = cap.read(frame);
        // write paraemter always will not return null. so we need read and then change to write after closing the read file
        fp  = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/status.txt","r");

        // fp  = OpenFile("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/status.txt",);
        
        if (fp == NULL)
        {
            printf("File 2 Not Found");
            // return -1;
            continue;
        }
        fclose(fp);
        
        int nTemp = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/status.txt");
        if (nTemp != 0)
        {
            cout << "error deleting the file \n";
            continue;
        }

        fp  = fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/camera1/status.txt","w");
        fputs("2",fp);
        fclose(fp);
        // this indicate a new file write 
        
        imshow("YongxinWindow2", img);

        if (waitKey(50) == 27)
        {
            cout << "esc key is pressed\n";
            break;
        }
        
    }

    
    return 0;
}