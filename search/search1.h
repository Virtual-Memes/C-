#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include <ctime>
using namespace std;
//搜索时选项分类
void searchTip(){
    system("cls");
    cout<<"***请在此界面选择搜索类别***"<<"\n\n"<<endl;
    cout<<"    按姓名搜索(选项 n)"<<endl;
    cout<<"    按学号搜索(选项 s)"<<endl;
    cout<<"    按时长搜索(选项 t)"<<endl;
    cout<<"\n"<<"返回首页(选项 N) 返回上页(选项 P) 退出(选项 E)";
    cout<<"\n"<<"请给出选择:";
}