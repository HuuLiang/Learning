//
//  main.cpp
//  4.5_instr3
//
//  Created by Liang on 2018/11/14.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name:\n";
    cin.get(name,ArSize).get();//cin.getline(name, ArSize); //cin >> name;
    cout << "Enter your favourite dessert:\n";
    cin.get(dessert,ArSize).get();//cin.getline(dessert, ArSize); //cin >> dessert;
    cout << "I have some dilicious " << dessert;
    cout << " for you, " << name << ".\n";
    
    return 0;
}
