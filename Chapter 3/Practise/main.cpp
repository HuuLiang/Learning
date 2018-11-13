//
//  main.cpp
//  Practise
//
//  Created by Liang on 2018/11/12.
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
    int in;
    cout << "Please input your height(in): \b\b\b\b\b\b";
    cin >> in;
    cout << " Your height(in) = " << in << endl;;
    cout << " Your height(ft) = " << float(in) / 12 << endl;
}

void Test2()
{
    int ft, in, lb;
    cout << "Please input your ft: ";
    cin >> ft;
    cout << ", your in :";
    cin >> in;
    cout << ", your lb :";
    cin >> lb;
    
    const int ft_in = 12;
    const float in_me = 0.0254;
    const float kg_lb= 2.2;
    
    float height = (ft * ft_in + in) * in_me;
    float kg = lb / kg_lb;
    cout << " height = " << height << " kg = " << kg << endl;
    double BMI = kg / ((double)height * (double)height);
    cout << "Your BMI is " << BMI << endl;
}

void Test3()
{
    cout << "Enter a latitude in degree, minutes, and seconds:" << endl;
    cout << "First, enter the degree:";
    int degree;
    cin >> degree;
    cout << "Next, enter the minutes of arc:";
    int minutes;
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:";
    int seconds;
    cin >> seconds;
    
    const float d_m = 60;
    const float m_s = 60;
    
    cout << degree << " degree," << minutes << " minutes," << seconds << " seconds = " << (float)degree + (float(seconds) / m_s + (float)minutes)/d_m << " degrees" << endl;
    
}

void Test4()
{
    cout << "Enter the number of seconds:";
    long long seconds;
    cin >> seconds;
    const int d_h = 24;
    const int h_m = 60;
    const int m_s = 60;
    long days = seconds / (d_h * h_m * m_s);
    int hours = (seconds % (d_h * h_m * m_s)) / (h_m * m_s);
    int minutes = (seconds % (h_m * m_s)) / m_s;
    int sec = seconds % m_s;
    cout << seconds << " seconds = " << days << " days," << hours << " hours," << minutes << " minutes," << sec << " seconds" << endl;
}

// 6898758899
// 310783781
void Test5()
{
    cout << "Enter the world's population:";
    long long world;
    cin >> world;
    cout << "Enter the population of the US:";
    long long us;
    cin >> us;
    cout << "The population of the US is " << float(us) / float(world) * 100.f << "% of the world population" << endl;
}

void Test6()
{
    cout << "Enter the mi:";
    long mi;
    cin >> mi;
    cout << "Enter the gal:";
    long gal;
    cin >> gal;
    cout << "mi_gal =" << float(mi)/float(gal) << endl;
    
    cout << "Enter the km:";
    long km;
    cin >> km;
    cout << "Enter the l:";
    float l;
    cin >> l;
    cout << "l*100/km = " << l*100.f/float(km) << endl;
}

void Test7()
{
    
}
