#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <ctime>
using namespace std;
//首页界面
void navMessage(){
    system("cls");
    time_t t=time(0);
    char *ct=ctime(&t);
    cout<<"    当前时间为："<<ct<<"\n"<<endl;
    cout<<"***欢迎来到课外阅读时长查询系统***"<<"\n\n"<<endl;
    cout<<"    开始查询(选项 s)"<<endl;
    cout<<"    菜单(选项 m)"<<endl;
    cout<<"\n"<<"退出(选项 E)"<<endl;
    cout<<"\n"<<"请给出选择:";
}