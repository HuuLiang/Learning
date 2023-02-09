//
//  main.cpp
//  6.7 not
//
//  Created by Liang on 2019/5/14.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>
#include <climits>

bool is_int(double);

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    double num;
    
    cout << "Yo,dube! Enter an interger value: ";
    cin >> num;
    
    while (!is_int(num)) {
        cout << "Out of range - - please try again: ";
        cin >> num;
    }
    int val = int (num);
    cout << "You've entered the interger " << val << "\nBye\n";
    
    
    return 0;
}

bool is_int(double x) {
    if (x <= INT_MAX && x >= INT_MIN)
        return true;
    else
        return false;
}

