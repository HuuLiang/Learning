//
//  main.cpp
//  Practise
//
//  Created by Liang on 2019/5/8.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <array>

using namespace std;

void Test1();
void Test2();
void Test3();
void Test4();
void Test5();
void Test6();
void Test7();
void Test8();
void Test9();
void Test10();

void chooseNum() {
    int num;
    cout << "Please enter number to choose exercises:";
    cin >> num;
    
    if (cin.rdstate() != ios::goodbit) {
        cout << "Try again:" << endl;
        cin.clear();
        cin.ignore();
        chooseNum();
    }
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
        case 8:
            Test8();
            break;
        case 9:
            Test9();
            break;
        case 10:
            Test10();
            break;
    }
}


int main(int argc, const char * argv[]) {
    /*1 输入条件循环在进入输入s循环体之前将评估测试表达式，如果条件最初为false，则循环不会执行其循环体。退出条件循环在处理循环体之后评估测试表达式。因此，即使测试表达式最初为false，循环也将执行一次。for 和 while 循环都是输入条件循环，而do while 循环是退出条件循环。
     2.01234
     3.0 3 6 9
     12
     4.6 8
     5.k=8
     7. {}
     8.有效
     9.cin>>ch 将跳过空格、换行符和制表符，其他两种格式将读取这些字符
     
    */
    //6
//    int i = 1;
//    while (i <=64) {
//        cout << i << "\t";
//        i *=2;
//    }
    
    
    
    chooseNum();
    return 0;
}


void Test1() {
    int i,j;
    cout << "Please enter first num:";
    cin >> i;
    cout << "Please enter second num:";
    cin >> j;
    if (i >= j) {
        int temp = i;
        i = j;
        j = temp;
    }
    int sum = 0;
    int temp = i;
    while (temp <= j) {
        sum += temp;
        ++temp;
    }
    cout << i << " To " << j << " sum = " << sum << endl;
}
void Test2() {
    const size_t ArSize = 16;
    std::array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1.L;
    for (int i = 2.; i < ArSize; i++) {
        factorials[i] = i * factorials[i-1];
    }
    for (int i = 0; i <= 100; i++) {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }
}

int inputNum() {
    int num;
    cin >> num;
    while (!cin) {
        cout << "Try again!" << endl;
        cin.clear();
        cin.ignore();
        num = inputNum();
    }
    return num;
}

void Test3() {
    cout << "Please enter a num eg.1~9 , 0 will exit program" << endl;
    int sum = 0;
    while (1) {
        int temp = inputNum();
        if (temp != 0) {
            sum += temp;
            cout << "All Sum = " << sum << endl;
        } else {
            break;
        }
    }
    cout << "End" << endl;
}
void Test4() {
    int year = 0;
    double Daphne = 100.0;
    double DaphneM = 100.0 * 0.1;
    double Cleo = 100.0;
    double CleoM = 0.05;
    do {
        year++;
        Daphne = Daphne + DaphneM;
        Cleo = Cleo * (1 + CleoM);
    } while (Daphne >= Cleo);
    cout << "At year = " << year << " Cleo: " << Cleo << " Daphne:" << Daphne << endl;
}
void Test5() {
    const int Month = 12;
    const char *months[Month] = {
        "1月",
        "2月",
        "3月",
        "4月",
        "5月",
        "6月",
        "7月",
        "8月",
        "9月",
        "10月",
        "11月",
        "12月"
    };
    int sales[Month];
    cout << "Enter every month sale" << endl;
    cin.get();
    int sum = 0;
    for (int month = 1; month <= Month; month++) {
        cout << "Enter " << months[month-1] << " sale: ";
        int sale = 0;
        cin >> sale;
        sales[month-1] = sale;
        sum += sale;
    }
    cout << "This year we sale books detail:" << endl;
    for (int month = 1; month <= Month; month++) {
        cout << "At " << months[month-1] << " sale is " << sales[month-1] << endl;
    }
    cout << "This year sales is " << sum << endl;
}
void Test6() {
    const int Year = 3;
    const int Month = 12;
    
    const char *years[Year] = {
        "第一年",
        "第二年",
        "第三年"
    };
    const char *months[Month] = {
        "1月",
        "2月",
        "3月",
        "4月",
        "5月",
        "6月",
        "7月",
        "8月",
        "9月",
        "10月",
        "11月",
        "12月"
    };
    
    int sales[Year][Month];
    int sum[Year];
    for (int year = 0; year < Year; year ++) {
        cout << "Enter " << years[year] << " sales" << endl;
        for (int month = 0; month < Month; month++) {
            cout << "Enter " << months[month] << " sale: ";
            int sale = 0;
            cin >> sale;
            sales[year][month] = sale;
            sum[year] += sale;
        }
    }
    int allyear = 0;
    for (int year = 0; year < Year; year ++) {
        allyear += sum[year];
        cout << "At " << years[year] << " sale is " << sum[year] << endl;
    }
    cout << "The allyear sales is " << allyear << endl;
}
void Test7() {
    struct Car {
        char name[20];
        int year;
    };
    int num;
    cout << "How many cars do you with to catalog?";
    cin >> num;
    cin.get();
    vector<Car> cars;
    for (int i = 0; i < num; i++) {
        Car *newCar = new Car;
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the make: ";
        cin.get(newCar->name, 20).get();
        cout << "Please enter the year made: ";
        cin >> newCar->year;
        cin.get();
        cars.push_back(*newCar);
    }
    cout << "Here is your collection:\n";
    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i].year << "\t" << cars[i].name << endl;
    }
    
}
void Test8() {
    cin.get();
    cout << "Enter words (to stop,type the word done):" << endl;
    char word[40];
    cin.get(word, 40).get();
    int i = 0;
    while (strcmp(word, "done") != 0) {
        i++;
        cin.get(word, 40).get();
    }
    cout << "You entered a total of " << i << " words" << endl;
}
void Test9() {
    cin.get();
    cout << "Enter words (to stop,type the word done):" << endl;
    string word;
    cin >> word;
    int i = 0;
    while (word != "done") {
        i++;
        cin >> word;
    }
    cout << "You entered a total of " << i << " words" << endl;
}
void Test10() {
    cout << "Enter number of rows:";
    int row;
    cin >> row;
    for (int i = 1; i <= row; i ++) {
        for (int j = 1; j <= row; j++) {
            if (j <= row - i) {
                cout << ".\t";
            } else {
                cout << "*\t";
            }
        }
        cout << endl;
    }
}
