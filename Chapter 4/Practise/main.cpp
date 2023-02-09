//
//  main.cpp
//  Practise
//
//  Created by Liang on 2019/4/28.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <cstring>


using namespace std;

void chooseNum();
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

int main(int argc, const char * argv[]) {
    
//    cout << (int *) "Home of the jolly bytes" << endl;
    
//    struct fish {
//        char kind[20];
//        int weight;
//        float lenght;
//    };
//    fish * afish = new fish;
//    cout << "Enter kind of fish" << endl;
//    cin >> afish->kind;
//    const int Str_num {10};
//    std::vector<std::string> vstr(Str_num);
//    std::array<std::string, Str_num> astr;
//    array<string, 10> arrayStr;
//    vector<string> vectorStr(10);
    
    chooseNum();
    return 0;
}

void chooseNum() {
    int num = 0;
    cout << "Please enter number to choose exercises:";
    cin >> num;
//    cin.get();
    if (num != (int)num) {
        cout << "Try again:" << endl;
        cin.get();
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
        default:
            cout << "Try again:" << endl;
            chooseNum();
    }
}

void Test1() {
    char firstName[100];
    cout << "What is your first name ?";
//    cin.getline(firstName, 100);
    cin.get(firstName, 100).get();
    
    char lastName[100];
    cout << "What is your last name ?";
//    cin.getline(lastName, 100);
    cin.get(lastName,100).get();
    
    char deserve;
    cout << "What letter grade do you deserve?";
    cin >> deserve;
    
    int age;
    cout << "What is your age? ";
    cin >> age;
    cin.get();
    
    cout << "Name :" << lastName << "," << firstName << endl;
    cout << "Grade :" << char(deserve + 1) << endl;
    cout << "Age :" << age << endl;
}

void Test2() {
    string name,dessert;
    
    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favourite dessert:\n";
    getline(cin, dessert);
    cout << "I have some dilicious " << dessert;
    cout << " for you, " << name << ".\n";

}

void Test3() {
    char firstName[30];
    char lastName[30];
    cout << "Enter your first Name: ";
    cin.getline(firstName, 30);
    cout << "Enter your last Name :";
    cin.get(lastName, 30).get();
    cout << "Here's the information in a Single string: " << strcat(strcat(firstName, ","), lastName) << endl;
}

void Test4() {
    string firstName,lastName;
    string allName;
    cout << "Enter your first Name: ";
    getline(cin, firstName);
    cout << "Enter your last Name: ";
    getline(cin, lastName);
    allName = firstName.append(",").append(lastName);
    cout << "Here's the information in a Single string: " << allName << endl;
    cout << "Here's the information in a Single string: " << firstName << endl;
    cout << "Here's the information in a Single string: " << firstName + "," + lastName << endl;
}

void Test5() {
    struct CandyBar {
        char name[40];
        float weight;
        int calorie;
    };
    
    CandyBar snack =
    {
        "mocha Munch",
        2.3,
        350
    };
//    snack->name = "Mocha Munch";
//    snack->weight = 2.3;
//    snack->calorie = 350;
    cout << "snack->name: " << snack.name << endl;
    cout << "snack->weight: " << snack.weight << endl;
    cout << "snack->calorie: " << snack.calorie << endl;
}

void Test6() {
    struct CandyBar {
        char name[40];
        float weight;
        int calorie;
    };
    
    CandyBar snacks[3] = {
        {"name1",1.1,100},
        {"name2",2.2,200},
        {"name3",3.3,300}
    };
    cout << "snacks[0].name: " << snacks[0].name << "snacks[0].weight: " << snacks[0].weight << "snacks[0].calorie: " << snacks[0].calorie << endl;
    cout << "snacks[1].name: " << snacks[1].name << "snacks[1].weight: " << snacks[1].weight << "snacks[1].calorie: " << snacks[1].calorie << endl;
    cout << "snacks[2].name: " << snacks[2].name << "snacks[2].weight: " << snacks[2].weight << "snacks[2].calorie: " << snacks[2].calorie << endl;
}

void Test7() {
    struct Pizza {
        string name;
        float dis;
        float weight;
    };
    
//    Pizza *pizza = new Pizza();
    Pizza pizza{};
    
    cout << "Please input Pizza's company: ";
    getline(cin, pizza.name);
    cout << "Please input Pizza's dis: ";
    cin >> pizza.dis;
    cout << "Please input Pizza's weight: ";
    cin >> pizza.weight;
    
    cout << "Pizza has been saved!\n";
    cout << "name:" << pizza.name << endl
         << "dis:" << pizza.dis << endl
         << "weight" << pizza.weight << endl;
}

void Test8() {
    struct Pizza {
        string name;
        float dis;
        float weight;
    };
    
    Pizza *pizza = new Pizza();
    
    cout << "Please input Pizza's dis: ";
    cin >> pizza->dis;
    cout << "Please input Pizza's company: ";
    getline(cin, pizza->name);
    cout << "Please input Pizza's weight: ";
    cin >> pizza->weight;
    
    cout << "Pizza has been saved!";
    cout << "name:" << pizza->name << "dis:" << pizza->dis << "weight" << pizza->weight << endl;
    delete pizza;
}


void Test9() {
    cin.get();
    struct CandyBar {
        char name[40];
        float weight;
        int calorie;
    };
    vector<CandyBar> snacks;
    
    for (int i = 0; i < 3; i++) {
        CandyBar *snack = new CandyBar;
        cout << "Enter snack" << i << "name: " ;
        cin.get(snack->name, 40);
        cin.get();
        cout << "Enter snack" << i << "weight: ";
        cin >> (*snack).weight;
        cin.get();
        cout << "Enter snack" << i << "calorie: ";
        cin >> (*snack).calorie;
        cin.get();
        snacks.push_back(*snack);
        delete snack;
    }
    
    for (int i = 0 ; i < snacks.size(); i++) {
        cout << "snack" << i  << "name: " << snacks[i].name << endl
                                << "weight: " << snacks[i].weight << endl
                                << "calorie:" << snacks[i].calorie <<endl;
    }
}


void Test10() {
    
    array<float, 3> cards;
    
    cout << "Enter your 40ma report card" << endl;
    cout << "First: ";
    cin >> cards[0];
    cout << "Second: ";
    cin >> cards[1];
    cout << "Third: ";
    cin >> cards[2];
    
    float ava = 0.;
    for (int i = 0; i < cards.size(); i++) {
        cout << "This is " << i + 1 << "Time card :" << cards[i] << endl;
        ava += cards[i];
    }
    cout << "ava is " << ava/3 << endl;
}
