#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <ctime>
using namespace std;
//定义包含结构体的类 data
class data{
    public:
        struct Student
        {
            string name;
            string num;
            string major;
            string cls;
            float time;
        }stu[30];
        //定义 read 方法获取文件数据，存储至结构体 Student 中
        void read(){
            ifstream f;
            f.open("search/time.txt");
            for(int i=0;i<30;i++){
                f>>stu[i].name;
                f>>stu[i].num;
                f>>stu[i].major;
                f>>stu[i].cls;
                f>>stu[i].time;
            }
        }       
};