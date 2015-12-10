#include <ctime>
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;
// using namespace CodedLight;

// void CodedLight::findAllCameras()  // find camears in the system 
void pause(int dur)
{
    int temp = time(NULL) + dur;

    while(temp > time(NULL));
}
void findAllCameras()  // find camears in the system 
{ 
 
//  can use http://opencv.willowgarage.com/wiki/CameraCapture  for more info on the camera
    // char* cameraName = "Color" ;
    // char* graycScaleName = "GrayScale" ;
//  cv::namedWindow(cameraName);
    CvCapture *CameraVideo = 0  ;
 
    for (int i = -1 ; i < 10 ; i++ )
    {
        CameraVideo  = cvCaptureFromCAM(i) ;
 
        if (CameraVideo == 0 )
        {
            printf ("camera open fail - %d \n", i ) ;
        }
        else
            printf ("---------------camera open ok - %d \n", i ) ;
    }
    cvReleaseCapture(&CameraVideo) ;
    //  cv::destroyWindow(cameraName) ;
}


// CvCapture* CodedLight::OpenCamera(void)  // open external or internbal camera
CvCapture* OpenCamera(void)  // open external or internbal camera
{ 
    
    CvCapture *CameraVideo ;
    
    CameraVideo = cvCreateCameraCapture(0);
    
    if (CameraVideo == 0 )
    {
        printf ("External camera open fail, trying internal camera \n" ) ;
        #ifdef ALTERNATIVLY_USE_INTERNAL_CAMERA
            CameraVideo = cvCaptureFromCAM(-1) ; // try internal camera
        #endif
    }
    if (CameraVideo == 0 )
    {
        printf ("Internal camera open fail  \n" ) ;
        
    }
    else
    {   // configure differant resolution
        cvSetCaptureProperty( CameraVideo, CV_CAP_PROP_FRAME_WIDTH, 320 );
        cvSetCaptureProperty( CameraVideo, CV_CAP_PROP_FRAME_HEIGHT, 240 ); //not working
        //cvSetCaptureProperty( CameraVideo, CV_CAP_PROP_FRAME_WIDTH, 1920 );
        //cvSetCaptureProperty( CameraVideo, CV_CAP_PROP_FRAME_HEIGHT, 1080 ); //not working
        //  cvSetCaptureProperty( CameraVideo, CV_CAP_PROP_FRAME_WIDTH, 1024 );
        //  cvSetCaptureProperty( CameraVideo, CV_CAP_PROP_FRAME_HEIGHT, 768 ); //not working
    }
 
    return CameraVideo;
}

int countCameras()
{
    int maxTested = 32;
    int sum = 0;
    for (int i = 0 ; i < maxTested; i++)
    {
        VideoCapture temp_camera(i);
        bool res = temp_camera.isOpened();
        temp_camera.release();
        
        if (res)
        {
            cout << "The number " << i << " camera is available " << endl;
            sum++;
        }
    }
    
    return sum;
}

void test()
{
    VideoCapture cap(0);
    // VideoCapture cap2(2);
    int key = 0;
    Mat frame;
    Mat frame1;

    while(key != 27)
    {
        // cap2 >> frame1;
        cap >> frame;
        cv::imshow("0",frame);
        // cv::imshow("1", frame1);
        key = waitKey(30);

    }
    cap.release();
    // cap2.release();
    
}
int main(int argc, char const *argv[])
{
    /* code */
    int nMax = 32;
    cout << "Hello world\n";
    // findAllCameras();
    /*check the environment works*/

    // cap1 used for the cameta

    // test();

    // cout << "The number of cameras are " << countCameras() << "\n";
    
    // for (int nIndex = -2; nIndex < nMax; nIndex++)
    // VideoCapture cap;
    // for (int nIndex = -2; nIndex < nMax; nIndex++)
    for (int nIndex = 2; nIndex >= 0; nIndex--)
    {
        cout << "enter the for loop to check the camera IDs = " << nIndex << "\n";

        cv::VideoCapture cap(nIndex);
        // cap.open(nIndex);

        if (!cap.isOpened())
        {
            cout << "cannot open camera " << nIndex << endl;
            continue;
        }

        Mat frameX;
        int key = 0;
        while (key != 27)
        {
            cap.grab();
            bool bSuccess = cap.read(frameX);
            

            if (!bSuccess)
            {
                cout << "cannot read frame from camera " << nIndex << endl;
                break;
            }

            key = waitKey(30);
            imshow("YongxinWindowXXX", frameX);
        }

        destroyWindow("YongxinWindowXXX");
        cap.release();

        pause(2);
        
    }

    /*
    VideoCapture cap(0);
    // VideoCapture cap1(1);

    Mat frameTemp;
    Mat frameTemp1;
    int key = 0;

    while(key != 27)
    {
        bool bSuccess = cap.read(frameTemp);
        // bool bSuccess1 = cap1.read(frameTemp1);

        if (!bSuccess)
        {
            cout << "Cannot read frame from camera or camera 2\n";
            break;
            // return -2;
        }

        
        // cap1 >> frameTemp;
        key = waitKey(30);
        imshow("YongxinWindow", frameTemp);
        // imshow("YongxinWindow1", frameTemp1);
    }
    cap.release();

    cout << "come to the second camera\n";
    VideoCapture cap1(-9);
    if(!cap1.isOpened())  // check if we succeeded
    {
        cout << "The integer number for the camera offset is " << CAP_MSMF << endl;
        cout << "cannot open the second camera\n";
        return -1;
    }
    

    while(key != 99)
    {
        // bool bSuccess = cap.read(frameTemp);
        bool bSuccess1 = cap1.read(frameTemp1);

        if (!bSuccess1)
        {
            cout << "Cannot read frame from camera or camera 2\n";
            break;
            // return -2;
        }

        
        // cap1 >> frameTemp;
        key = waitKey(30);
        // imshow("YongxinWindow", frameTemp);
        imshow("YongxinWindow1", frameTemp1);
    }

    cap1.release();
    
    */

    // cap2 used for read video from the disk
    // VideoCapture cap2(1);
    // VideoCapture cap2("/home/yongxin/Downloads/pirate.mp4");
    /*we have 2 video capture objects here*/
    // bool bFlagCM, bFlagVD;
    // bFlagCM = false;
    // bFlagVD = false;

    

    /*
    if(!cap1.isOpened() && !cap2.isOpened())
    {
        cout << "cannot open the 2 cameras \n";
        bFlagVD = true;
        bFlagCM = true;
        return -1;
    }

    if (!cap1.isOpened())
    {
        cout << "cannot open the camera 0 \n";
        bFlagCM = true;
        return -2;
    }

    if (!cap2.isOpened())
    {
        cout << "cannot open the camera 1 \n";
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
        
        bool bSucc1 = cap1.read(frame1);
        bool bSucc2 = cap2.read(frame2);

        if (!bSucc1 && !bSucc2)
        {
            cout << "cannot read frame from 2 cameras\n";
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
            
        }

        imshow("YongxinWindow", frame);

    }
    

    cap1.release();
    cap2.release();
    */
    
    return 0;
}