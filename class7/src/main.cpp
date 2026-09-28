#include"Student.h"
#include"StudentManarger.h"

int main(){
    man children;
    cout<<"欢迎使用奶蛙大学学生信息管理系统"<<endl;
    while(true){
        cout<<"[1]添加学生信息"<<"\n[2]显示所有学生信息"<<"\n[3]按学号查找学生信息"<<"\n[4]计算并显示所有学生的平均分"<<"\n[0]推出系统";
        cout<<"请输入对应数字来执行对应操作"<<endl ;
        int choice;
        cin>>choice;

        /*if (){
            
        }*/

        switch(choice){
            case 1:children.input();break;
            case 2:children.display();break;
            case 3:children.seek();break;
            case 4:children.cul();break;
            case 0:cout<<"感谢使用，再会"<<endl;return 0; 
            default:cout<<"无效选择，请重试"<<endl;break;
        }
        
    }
    return 0;
}