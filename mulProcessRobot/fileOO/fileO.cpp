// #include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <fstream>
using namespace std;
// using namespace cv;

int main () 
{
    int key = 0;
    
    fstream openFile;
    openFile.open("example.txt");
    int nTemp = -1;
    openFile >> nTemp;
    cout << "Enter the loop with nTemp = " << nTemp << "\n";
    // openFile.close();
    
    // openFile.open("example.txt");
    openFile.seekp(0,ios::beg);
    openFile << 1 - nTemp << endl;
    openFile.close();

    return 0;
}