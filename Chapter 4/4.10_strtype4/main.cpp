//
//  main.cpp
//  4.10_strtype4
//
//  Created by Liang on 2018/11/16.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    char charr[20];
    string str;
    
    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in str before input: " << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;;
    cout << "Enter another line of text:\n";
    getline(cin, str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: " << strlen(charr) << endl;
    cout << "Length of string in str after input :" << str.size() << endl;
    
    return 0;
}
