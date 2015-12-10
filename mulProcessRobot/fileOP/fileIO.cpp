#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <fstream>
using namespace std;
using namespace cv;

int main () 
{
    int key = 0;
    // while (1)
    // for (int nIndex = 0; nIndex < 5; nIndex++)
    // {
        // if use parameter input, the process will strop... 
        fstream openFile;
        openFile.open("example.txt");
        // openFile.open("/home/yongxin/Documents/opencv/yossi/mulProcessRobot/switch/status.txt");
        int nTemp = -1;

        /*
        if (!openFile.is_open())
        {
            cout << "Cannot open the file \n";
        }
        */

        // else
        // {
            openFile >> nTemp;
            cout << "Enter the loop with nTemp = " << nTemp << "\n";
            openFile.seekp(0,ios::beg);
            openFile << 1 << endl;
            openFile.close();
        // }

        // imshow("MyWindow", img); 
        //display the image which is stored in the 'img' in the "MyWindow" window
    //     key = waitKey(100);
    //     // cin >> chControl;
    //     // cout << "The input key is " << key << " and the Falg is " << bFlag <<"\n";

    //     // if (key == 99)
    //     if (key == 27)
    //     {
    //         cout << "esc is pressed \n";
    //         break;
    //     }
    // }
    return 0;
}