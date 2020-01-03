#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include <ctime>
#include "nav1.h"
#include "search/search1.h"
#include "search/search1_1.h"
#include "menu/menu1.h"
#include "menu/about1.h"
#include "menu/help1.h"
using namespace std;
getData G;
Rdis R;
About A;
//选择错误时提示
void error(){
    system("cls");
    cout<<"输入格式错误（三秒后返回）";
    Sleep(3000);
}
//退出提示
void exit(){
    system("cls");
    cout<<"正在退出...(三秒后)";
    Sleep(3000);
}
void nav();
void S1();
void S1_1();
void S1_2();
void S1_3();
void S1_1_e();
void S1_2_e();
void S1_3_e();
void M1();
void M1_1();
void M1_2();
void M1_1_1();
void M1_1_2();
//首页
void nav(){
    navMessage();
    G.read();
    char nh;
    cin>>nh;
    switch(nh){
        case 's':{
            S1();
            break;
        }
        case 'm':{
            M1();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        default:{
            error();
            nav();
            break;
        }
    }
}
//查询
void S1(){
    searchTip();
    char sh1;
    cin>>sh1;
    switch(sh1){
        case 'n':{
            S1_1();
            break;
        }
        case 's':{
            S1_2();
            break;
        }
        case 't':{
            S1_3();
            break;
        }
        case 'N':{
            nav();
            break;
        }
        case 'P':{
            nav();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        default:{
            error();
            S1();
            break;
        }
    }
}
//按姓名查询
void S1_1(){
    G.name();
    char sh1_1;
    cin>>sh1_1;
    switch(sh1_1){
        case 'N':{
            nav();
            break;
        }
        case 'P':{
            S1();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        case 'R':{
            S1_1();
            break;
        }
        default:{
            S1_1_e();
            break;
        }
    }
}
//姓名查询结束选择错误
void S1_1_e(){
    error();
    system("cls");
    R.eFINISH();
    char sh1_1;
    cin>>sh1_1;
    switch(sh1_1){
        case 'N':{
            nav();
            break;
        }
        case 'P':{
            S1();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        case 'R':{
            S1_1();
            break;
        }
        default:{
            S1_1_e();
            break;
        }
    }
}
//按学号查询
void S1_2(){
    G.number();
    char sh1_2;
    cin>>sh1_2;
    switch(sh1_2){
        case 'N':{
            nav();
            break;
        }
        case 'P':{
            S1();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        case 'R':{
            S1_2();
            break;
        }
        default:{
            S1_2_e();
            break;
        }
    }
}
//学号查询结束选择错误
void S1_2_e(){
    error();
    system("cls");
    R.eFINISH();
    char sh1_2;
    cin>>sh1_2;
    switch(sh1_2){
        case 'N':{
            nav();
            break;
        }
        case 'P':{
            S1();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        case 'R':{
            S1_2();
            break;
        }
        default:{
            S1_2_e();
            break;
        }
    }
}
//按时长查询
void S1_3(){
    G.time();
    char sh1_3;
    cin>>sh1_3;
    switch(sh1_3){
        case 'N':{
            nav();
            break;
        }
        case 'P':{
            S1();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        case 'R':{
            S1_3();
            break;
        }
        default:{
            S1_3_e();
            break;
        }
    }
}
//时长查询结束选择错误
void S1_3_e(){
    error();
    system("cls");
    R.eFINISH();
    char sh1_3;
    cin>>sh1_3;
    switch(sh1_3){
        case 'N':{
            nav();
            break;
        }
        case 'P':{
            S1();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        case 'R':{
            S1_3();
            break;
        }
        default:{
            S1_3_e();
            break;
        }
    }
}
//菜单
void M1(){
    menu();
    char mh;
    cin>>mh;
    switch (mh)
    {
        case 'a':{
            M1_1();
            break;
        }
        case 'h':{
            M1_2();
            break;
        }
        case 'N':{
            nav();
            break;
        }
        case 'P':{
            nav();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        default:{
            error();
            M1();
            break;
        }
    }
}
//关于
void M1_1(){
    A.about();
    char mh1_1;
    cin>>mh1_1;
    switch(mh1_1){
        case 'b':{
            M1_1_1();
            break;
        }
        case 'm':{
            M1_1_2();
            break;
        }
        case 'N':{
            nav();
            break;
        }
        case 'P':{
            M1();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        case 'M':{
            M1();
            break;
        }
        default:{
            error();
            M1_1();
            break;
        }
    }
}
//帮助
void M1_2(){
    help();
    char mh1_2;
    cin>>mh1_2;
    switch(mh1_2){
        case 'N':{
            nav();
            break;
        }
        case 'P':{
            M1();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        case 'M':{
            M1();
            break;
        }
        default:{
            error();
            M1_2();
            break;
        }
    }
}
//基本信息
void M1_1_1(){
    A.basic();
    char mh1_1_1;
    cin>>mh1_1_1;
    switch(mh1_1_1){
        case 'N':{
            nav();
            break;
        }
        case 'P':{
            M1_1();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        case 'M':{
            M1();
            break;
        }
        default:{
            error();
            M1_1_1();
            break;
        }
    }
}
//成员信息
void M1_1_2(){
    A.member();
    char mh1_1_2;
    cin>>mh1_1_2;
    switch(mh1_1_2){
        case 'N':{
            nav();
            break;
        }
        case 'P':{
            M1_1();
            break;
        }
        case 'E':{
            exit();
            break;
        }
        case 'M':{
            M1();
            break;
        }
        default:{
            error();
            M1_1_2();
            break;
        }
    }
}