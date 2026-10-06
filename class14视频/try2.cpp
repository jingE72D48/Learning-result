#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(){
    VideoCapture cap("a.mp4");

    if(!cap.isOpened()){
        cout<<"视频无法打开"<<endl;
        return -1;
    }

    int fwidth = cap.get(CAP_PROP_FRAME_WIDTH);
    int fheight = cap.get(CAP_PROP_FRAME_HEIGHT);
    double fps = cap.get(CAP_PROP_FPS);
    int famount = cap.get(CAP_PROP_FRAME_COUNT);
    double fdelay = 1000/fps;

    cout<<"帧宽："<<fwidth<<endl;
    cout<<"帧高："<<fheight<<endl;
    cout<<"帧率："<<fps<<endl;
    cout<<"总帧数："<<famount<<endl;
    cout<<"每帧显示时间："<<fdelay<<endl;

    Mat frame;
    cap.read(frame);

    if(frame.empty()){
        cout<<"无法识别视频帧"<<endl;
    }

    while(true){
        cap.read(frame);
        if(frame.empty()){
          cout<<"视频播放完毕或失败"<<endl;
          break;
        }
        imshow("视频播放",frame);
        char c = waitKey(fdelay);
        if (c == 113 ) { // 
            break;
        }
    }

    int fourcc = VideoWriter::fourcc('m','p','4','v');
    VideoWriter out("video_30frames.mp4",fourcc,fps,Size(fwidth,fheight));

    if(!out.isOpened()){
        cout<<"创造输出类型失败"<<endl;
        return -1;
    }

    Mat frame0;
    for(int i=0;i<30;i++){
        cap.read(frame0);
        if(frame0.empty()){
            break;
        }
        out.write(frame0);
    }
    
    cout<<"视频已保存"<<endl;
    
    out.release();
    cap.release();

    destroyAllWindows();

    return 0;

}
