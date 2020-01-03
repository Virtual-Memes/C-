#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include <ctime>
using namespace std;
//创建 About 类
class About{
    public:
        //分类选择有关信息
        void about(){
            system("cls");
            cout<<"***请选择如下信息***"<<"\n\n"<<endl;
            cout<<"    基本信息(选项 b)"<<endl;
            cout<<"    成员信息(选项 m)"<<endl;
            cout<<"\n"<<"返回首页(选项 N) 返回上页(选项 P) 退出(选项 E) 返回菜单(选项 M)";
            cout<<"\n"<<"请给出选择:";
        }
        //成员信息
        void member(){
            system("cls");
            cout<<"成员信息："<<"\n"<<endl;
            cout<<"组长：赵英剑"<<endl;
            cout<<"    学号：8002119321"<<endl;
            cout<<"    专业：软件工程"<<endl;
            cout<<"    班级：软件工程1910班"<<"\n"<<endl;
            cout<<"成员一：严之寒"<<endl;
            cout<<"    学号：8002119311"<<endl;
            cout<<"    专业：软件工程"<<endl;
            cout<<"    班级：软件工程1910班"<<"\n"<<endl;
            cout<<"成员二：胡亚冰"<<endl;
            cout<<"    学号：8002119309"<<endl;
            cout<<"    专业：软件工程"<<endl;
            cout<<"    班级：软件工程1910班"<<endl;
            cout<<"\n"<<"返回首页(选项 N) 返回上页(选项 P) 退出(选项 E) 返回菜单(选项 M)";
            cout<<"\n"<<"请给出选择:";
        }
        //基本信息
        void basic(){
            system("cls");
            cout<<"基本信息："<<"\n"<<endl;
            cout<<"程序名称:"<<endl;
            cout<<"    课外阅读时长查询系统"<<"\n"<<endl;
            cout<<"版本信息:"<<endl;
            cout<<"    版本号：v2.0"<<"\n"<<endl;
            cout<<"版权声明:"<<endl;
            cout<<"    此应用版权归属者为：严之寒、胡亚冰、赵英剑三人。\n未经作者允许，禁止作为商业用途或在互联网上发布。"<<endl;
            cout<<"\n"<<"返回首页(选项 N) 返回上页(选项 P) 退出(选项 E) 返回菜单(选项 M)";
            cout<<"\n"<<"请给出选择:";
        }
};