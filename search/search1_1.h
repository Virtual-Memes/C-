#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <ctime>
#include "data1.h"
using namespace std;
//提示语句
class Rdis{
    public:
        //通过姓名查询时的提示语
        void tipName(){
            system("cls");
            cout<<"***此页面仅可通过姓名查询***\n\n"<<endl;
            cout<<"请输入姓名：";
        }
        //通过学号查询时的提示语
        void tipNumber(){
            system("cls");
            cout<<"***此页面仅可通过学号查询***\n\n"<<endl;
            cout<<"请输入学号：";
        }
        //通过时长查询时的提示语
        void tipTime(){
            system("cls");
            cout<<"***此页面仅可通过时长查询***\n\n"<<endl;
            cout<<"请输入时间段："<<endl;
        }
        //单体查询无结果
        void sNOTFOUND(){
            system("cls");
            cout<<"未找到此学生（三秒后返回）";
            Sleep(3000);
        }
        //范围查询无结果
        void tNOTFOUND(){
            system("cls");
            cout<<"此范围内无学生（三秒后返回）";
            Sleep(3000);
        }
        //查询完毕
        void FINISH(){
            cout<<"\n"<<"查询结束-返回首页(选项 N) 返回上页(选项 P) 退出(选项 E) 重新查询(选项 R)"<<endl;
            cout<<"\n"<<"请给出选择:";
        }
        //查询完毕时选项不符
        void eFINISH(){
            cout<<"返回首页(选项 N) 返回上页(选项 P) 退出(选项 E) 重新查询(选项 R)"<<endl;
            cout<<"\n"<<"请给出选择:";
        }
};
//定义类 getData 继承 data 类
class getData:public data{
    Rdis R;
    public:
        //定义方法 name，通过姓名检索查询s
        void name(){
            R.tipName();
            string nam;
            cin>>nam;
            int def=100;
            for(int i=0;i<30;i++){
                if(nam==stu[i].name){
                    def=i;
                    break;
                }
            }
            if(def==100){
                R.sNOTFOUND();
                name();
            }
            else{
                system("cls");
                cout<<"您查询的是:"<<endl;
                cout<<"\n"<<"姓名为："<<stu[def].name<<endl;
                cout<<"    学号为："<<stu[def].num<<endl;
                cout<<"    专业为："<<stu[def].major<<endl;
                cout<<"    班级为："<<stu[def].cls<<endl;
                cout<<"    时长为："<<stu[def].time<<" h"<<endl;
                R.FINISH();
            }
        }
        //定义方法 number，通过学号检索查询
        void number(){
            R.tipNumber();
            string num;
            cin>>num;
            int def=100;
            for(int j=0;j<30;j++){
                if(num==stu[j].num){
                    def=j;
                    break;
                }
            }
            if(def==100){
                R.sNOTFOUND();
                number();
            }
            else{
                system("cls");
                cout<<"您查询的是:"<<endl;
                cout<<"\n"<<"姓名为："<<stu[def].name<<endl;
                cout<<"    学号为："<<stu[def].num<<endl;
                cout<<"    专业为："<<stu[def].major<<endl;
                cout<<"    班级为："<<stu[def].cls<<endl;
                cout<<"    时长为："<<stu[def].time<<" h"<<endl;
                R.FINISH();
            }
        }
        //定义方法 time，通过时间段检索查询
        void time(){
            R.tipTime();
            float t1,t2;
            cout<<"请输入第一个时间点：";
            cin>>t1;
            cout<<"\n"<<"请输入第二个时间点：";
            cin>>t2;
            int inc[30],in=0;
            if(t1>t2){
                int temp=t2;
                t2=t1;
                t1=temp;
            }
            for(int i=0;i<30;i++){
                if(stu[i].time>=t1&&stu[i].time<=t2){
                    inc[in]=i;
                    in++;
                }
            }
            for(int i=0;i<in;i++){
                for(int j=0;j<i;j++){
                    if(stu[inc[j]].time>stu[inc[i]].time){
                        int temp=inc[j];
                        inc[j]=inc[i];
                        inc[i]=temp;
                    }
                }
            }
            if(in==0){
                R.tNOTFOUND();
                time();
            }
            else{
                system("cls");
                cout<<"您查询的是:"<<endl;
                for(int i=0;i<in;i++){
                    cout<<"\n"<<"姓名为："<<stu[inc[i]].name<<endl;
                    cout<<"    学号为："<<stu[inc[i]].num<<endl;
                    cout<<"    专业为："<<stu[inc[i]].major<<endl;
                    cout<<"    班级为："<<stu[inc[i]].cls<<endl;
                    cout<<"    时长为："<<stu[inc[i]].time<<" h"<<endl;
                }
                R.FINISH();
            }
        }
};