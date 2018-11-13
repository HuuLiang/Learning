//
//  main.cpp
//  3.14_typecast
//
//  Created by Liang on 2018/11/12.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    int auks, bats, coots;
    
    auks = 19.99 + 11.99;
    
    bats = (int)19.99 + (int)11.99;
    coots = int(19.99) + int(11.99);
    cout << "auks = " << auks << ",bats = " << bats;
    cout << " , coots = " << coots << endl;
    
    char ch = 'Z';
    cout << "The code for " << ch << " is" ;
    cout << int(ch) << endl;
    
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;
    
    return 0;
}
