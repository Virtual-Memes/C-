#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include <ctime>
using namespace std;
//菜单页面
void menu(){
    system("cls");
    cout<<"***菜单***"<<"\n"<<endl;
    cout<<"    关于(选项 a)"<<endl;
    cout<<"    帮助(选项 h)"<<endl;
    cout<<"\n"<<"返回首页(选项 N) 返回上页(选项 P) 退出(选项 E)";
    cout<<"\n"<<"请给出选择:";
}