#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    Mat colorImg = imread("这我推.jpg" , IMREAD_COLOR);
    //cout<<colorImg<<endl;
    Mat grayImg = imread("这我推.jpg", IMREAD_GRAYSCALE);
    
    // Mat alphaImg = imread("image.png", IMREAD_UNCHANGED);
    
    if (colorImg.empty()) {
        cout << "图片无法打开" << endl;
        return -1;
    }

    namedWindow("图片展示", WINDOW_NORMAL);

    imshow("图片展示" ,colorImg);

    cout<<"输入任意按键以关闭窗口"<<endl;

    waitKey(0);

    destroyAllWindows();

    //bool outputJPG = imwrite("converted_image.jpg",colorImg,{IMWRITE_JPEG_QUALITY,100});
    
    bool outputPNG = imwrite("converted_image.png",colorImg,{IMWRITE_PNG_COMPRESSION,9});
    if(outputPNG){
        cout<<"保存成功"<<endl;
    }
    else{
        cout<<"保存失败"<<endl;
    }
    
    return 0;
}
