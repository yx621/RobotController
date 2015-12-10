#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;

bool fileWrite0(char cCont)
{
    FILE * fp;
    fp=fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status0.txt","w");
    if (fp == NULL)
        return false;
    if (cCont == 'c')
    {
        cout << "output number " << 1 << "\n";
        fputs("1", fp);
    }
    
    else if (cCont == 'v')
    {
        cout << "output number " << 2 << "\n";
        fputs("2", fp);
    }

    fclose(fp);
    return true;
}

bool fileWrite1(char cCont)
{
    FILE * fp;
    fp=fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status1.txt","w");
    if (fp == NULL)
        return false;

    if (cCont == 'c')
        fputs("1", fp);
    else if (cCont == 'v')
        fputs("2", fp);

    fclose(fp);

    return true;
}

bool fileWrite2(char cCont)
{
    FILE * fp;
    fp=fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status2.txt","w");
    if (fp == NULL)
        return false;

    if (cCont == 'c')
        fputs("1", fp);
    else if (cCont == 'v')
        fputs("2", fp);

    fclose(fp);

    return true;
}

int main(int argc, char const *argv[])
{
    /* The purpose of switch is just to write command to a file. 
     * And the mux will read the file and based on the result read relevant pictures
     * char 'c' for camera1
     * char 'v' for camera2
     * the file number is 1 and 2. We choose image based on this
     * char 'esc' is used to stop the process
     */

    Mat img(650, 600, CV_16UC3, Scalar(0,65530, 65530)); 

    FILE *fp;
    fp=fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status0.txt","w");
    fputs("0", fp);
    fclose(fp);
    fp=fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status1.txt","w");
    fputs("0", fp);
    fp=fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status2.txt","w");
    fputs("0", fp); 
    // always true becuase of write
    
    int nCount = 0;
    bool bFlag = false;
    bool bMemory = false;
    int key = 0;

    char chControl;

    while (1)
    {
        imshow("switchWindow", img); 
        key = waitKey(50);
        cout << "The input key is " << key << " and the Falg is " << bFlag << " while the flag bMemory is " << bMemory  <<"\n";
        if (key == 27)
        {
            cout << "esc is pressed \n";
            break;
        }

        while (1)
        {
            switch(nCount)
            {
                case 0:
                    fp=fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status0.txt","r");
                    
                    if (fp == NULL)
                    {
                        cout << "status0 file is not exist \n";
                    }

                    else
                    {
                        fclose(fp);
                        int nTemp = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status0.txt");
                        if (nTemp != 0)
                        {
                            cout << "cannot delete the file status0.jpg \n";
                            break;
                        }

                        bFlag = true;
                        if (key == 99)
                        {
                            bMemory = false;
                            if (fileWrite0('c') == false)
                                cout << "cannot write to file status0.txt \n";
                        }
                        
                        else if (key == 118)
                        {
                            bMemory = true;
                            if (fileWrite0('v') == false)
                                cout << "cannot write to file status0.txt \n";
                        }

                        else
                        {
                            if (bMemory == false)
                            {
                                if (fileWrite0('c') == false)
                                    cout << "cannot write to file status0.txt \n";
                            }

                            else
                            {
                                if (fileWrite0('v') == false)
                                    cout << "cannot write to file status0.txt \n";
                            }

                        }
                    }

                    nCount = (nCount+1)%3;
                    break;

                case 1:
                    fp=fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status1.txt","r");
                    
                    if (fp == NULL)
                    {
                        cout << "status1.txt file is not exist \n";
                    }

                    else
                    {
                        fclose(fp);
                        int nTemp = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status1.txt");
                        if (nTemp != 0)
                        {
                            cout << "cannot delete the file status1.txt \n";
                            break;
                        }

                        bFlag = true;
                        if (key == 99)
                        {
                            bMemory = false;
                            if (fileWrite1('c') == false)
                                cout << "cannot write to file status0.txt \n";
                        }
                        
                        else if (key == 118)
                        {
                            bMemory = true;
                            if (fileWrite1('v') == false)
                                cout << "cannot write to file status0.txt \n";
                        }

                        else
                        {
                            if (bMemory == false)
                            {
                                if (fileWrite1('c') == false)
                                    cout << "cannot write to file status0.txt \n";
                            }

                            else
                            {
                                if (fileWrite1('v') == false)
                                    cout << "cannot write to file status0.txt \n";
                            }

                        }
                    }
                    nCount = (nCount+1)%3;
                    break;
                
                case 2:
                    fp=fopen("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status2.txt","r");
                    
                    if (fp == NULL)
                    {
                        cout << "status2.txt file is not exist \n";
                    }

                    else
                    {
                        fclose(fp);
                        int nTemp = remove("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status2.txt");
                        if (nTemp != 0)
                        {
                            cout << "cannot delete the file status2.txt \n";
                            break;
                        }

                        bFlag = true;
                        if (key == 99)
                        {
                            bMemory = false;
                            if (fileWrite2('c') == false)
                                cout << "cannot write to file status0.txt \n";
                        }
                        
                        else if (key == 118)
                        {
                            bMemory = true;
                            if (fileWrite2('v') == false)
                                cout << "cannot write to file status0.txt \n";
                        }

                        else
                        {
                            if (bMemory == false)
                            {
                                if (fileWrite2('c') == false)
                                    cout << "cannot write to file status0.txt \n";
                            }

                            else
                            {
                                if (fileWrite2('v') == false)
                                    cout << "cannot write to file status0.txt \n";
                            }

                        }
                    }
                    nCount = (nCount+1)%3;
                    break;
                
                default:
                    nCount = (nCount+1)%3;
                    break;
            }    

            if (bFlag == true)
            {
                // cout << "write to file " << nCount << "\n";
                bFlag = false;
                break;
            }
        }


    }

    return 0;
}