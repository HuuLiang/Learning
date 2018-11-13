//
//  main.cpp
//  3.4_hexoct2
//
//  Created by Liang on 2018/11/6.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    
    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    
    return 0;
}
