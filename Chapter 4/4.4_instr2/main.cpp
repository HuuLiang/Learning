//
//  main.cpp
//  4.4_instr2
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
    cin.getline(name, ArSize); //cin >> name;
    cout << "Enter your favourite dessert:\n";
    cin.getline(dessert, ArSize); //cin >> dessert;
    cout << "I have some dilicious " << dessert;
    cout << " for you, " << name << ".\n";
    
    return 0;
}
