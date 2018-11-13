//
//  main.cpp
//  Practise
//
//  Created by Liang on 2018/11/5.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>
using namespace std;

void chooseNum(int);
void Test1();
void Test2();
void Test3();
void Test4();
void Test5();
void Test6();
void Test7();

int main(int argc, const char * argv[]) {
    
    int num;
    cout << "Please enter number to choose exercises:";
    cin >> num;
    chooseNum(num);
    
    return 0;
}

void chooseNum(int num) {
    switch (num) {
        case 1:
            Test1();
            break;
        case 2:
            Test2();
            break;
        case 3:
            Test3();
            break;
        case 4:
            Test4();
            break;
        case 5:
            Test5();
            break;
        case 6:
            Test6();
            break;
        case 7:
            Test7();
            break;
        default:
            cout << "Try again:";
            cin >> num;
            chooseNum(num);
            break;
    }
}

void Test1()
{
    cout << "姓名：胡亮亮" << "地址：杭州" << endl;
}

void Test2()
{
    int dis;
    cout << "Please input dis:";
    cin >> dis;
    cout << "The ma = " << dis * 220 << endl;
}

void coutTwice(string);

void Test3()
{
    coutTwice("Three blind mice");
    coutTwice("See how they run");
}

void coutTwice(string str)
{
    cout << str << endl;
    cout << str << endl;
}

void Test4()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    cout << age*12 << " monthes";
}

void Test5()
{
    int cel;
    cout << "Please enter a Celsius value:";
    cin >> cel;
    cout << cel << "degrees Celsius is " << cel*1.8+32.0 << " degrees Fahrenheit." << endl;
}

void Test6()
{
    cout << "Enter the number of light year:";
    int year;
    cin >> year;
    double dis;
    dis = year * 63240;
    cout << year << " light year = " << dis << " astronomical units." << endl;;
}

void Test7()
{
    int hours;
    cout << "Enter the number of hours:";
    cin >> hours;
    
    int mins;
    cout << "Enter the number of minutes:";
    cin >> mins;
    
    cout << "Time: " << hours << ":" << mins << endl;
}
