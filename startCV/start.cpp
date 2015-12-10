#include "opencv2/highgui/highgui.hpp"
#include "opencv2/opencv.hpp"

#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{

    cout << "Hello world\n";
    

    // VideoCapture cap("~/Documents/SampleVideo.avi"); // open the video file for reading
    VideoCapture cap("/home/yongxin/Downloads/pirate.mp4");
    // VideoCapture cap("./sample.mov");

    // if ( argc != 2 )
    // {
    //     printf("usage: DisplayImage.out <Image_Path>\n");
    //     return -1;
    // }

    // VideoCapture cap(argv[1],1);


    if ( !cap.isOpened() )  // if not success, exit program
    {
         cout << "Cannot open the video file" << endl;
         return -1;
    }
    

    cap.set(CV_CAP_PROP_POS_MSEC, 300); //start the video at 300ms


    double fps = cap.get(CV_CAP_PROP_FPS); //get the frames per seconds of the video

    cout << "Frame per seconds : " << fps << endl;

    namedWindow("MyVideo",CV_WINDOW_AUTOSIZE); //create a window called "MyVideo"

    while(1)
    {
        Mat frame;

        bool bSuccess = cap.read(frame); // read a new frame from video

        if (!bSuccess) //if not success, break loop
        {
            cout << "Cannot read the frame from video file" << endl;
            break;
        }

        imshow("MyVideo", frame); //show the frame in "MyVideo" window
        int key = waitKey(30);
        cout << "The recieved key is " << key << "\n";
        // if(waitKey(30) == 27) //wait  for 'esc' key press for 30 ms. If 'esc' key is pressed, break loop
        if(key == 27) //wait  for 'esc' key press for 30 ms. If 'esc' key is pressed, break loop
        {
            cout << "a key is pressed by user" << endl; 
            break; 
        }
    }
    


    return 0;

}