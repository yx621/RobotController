#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include<stdio.h>
using namespace cv;
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */

    FILE *fp;
    // char str[50];
    fp=fopen("/home/yongxin/Documents/opencv/yossi/FileIO/status.txt","w");
    
    if (fp == NULL)
    {
        printf("File Not Found");
    }
    
    else
    {
        // scanf("%[^\n]s",str);
        fputs("0",fp);  
    }

    fclose(fp);

    return 0;
}