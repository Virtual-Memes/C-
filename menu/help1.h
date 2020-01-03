#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include <ctime>
using namespace std;
//帮助相关信息
void help(){
    system("cls");
    cout<<"帮助信息："<<"\n"<<endl;
    cout<<"    输入对应的序号以进行相关操作，\n特定查询时输入详细信息。"<<endl;
    cout<<"\n"<<"返回首页(选项 N) 返回上页(选项 P) 退出(选项 E) 返回菜单(选项 M)";
    cout<<"\n"<<"请给出选择:";
}