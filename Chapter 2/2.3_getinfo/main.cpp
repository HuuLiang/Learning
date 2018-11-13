//
//  main.cpp
//  2.3_getinfo
//
//  Created by Liang on 2018/11/5.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    int carrots;
    
    cout << "How many carrots do you have ?" << endl;
    cin >> carrots;
    cout << "Here are two more.";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    
    return 0;
}
