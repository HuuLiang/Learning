//
//  main.cpp
//  5.13 while
//
//  Created by Liang on 2019/5/7.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

const int ArSize = 20;

int main(int argc, const char * argv[]) {
    
    using namespace std;
    char name[ArSize];
    
    cout << "Your first name,please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized:\n";
    int i = 0;
    while (name[i] != '\0') {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    
    return 0;
}
