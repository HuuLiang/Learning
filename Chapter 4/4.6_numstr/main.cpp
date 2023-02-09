//
//  main.cpp
//  4.6_numstr
//
//  Created by Liang on 2018/11/14.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    cout << "What year was your house built?\n";
    int year;
    //cin >> year;
    //cin.get();or cin.get(ch);
    (cin >> year).get();//(cin >> year).get(ch);
    cout << "What is its street address?\n";
    char address[80];
//    cin.getline(address, 80);
    cin >> address;
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done !\n";
    
    return 0;
}
