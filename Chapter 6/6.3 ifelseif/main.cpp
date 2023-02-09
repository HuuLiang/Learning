//
//  main.cpp
//  6.3 ifelseif
//
//  Created by Liang on 2019/5/13.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

const int Fave =27;

int main(int argc, const char * argv[]) {
    using namespace std;
    int n;
    
    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    do {
        cin >> n;
        if (n < Fave) {
            cout << "Too low -- guess again: ";
        } else if (n > Fave) {
            cout << "Too high -- guess again: ";
        } else {
            cout << Fave << " is right:\n";
        }
    } while (n != Fave);
    
    
    return 0;
}
