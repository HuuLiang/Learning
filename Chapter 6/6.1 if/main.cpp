//
//  main.cpp
//  6.1 if
//
//  Created by Liang on 2019/5/10.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using std::cout;
    using std::cin;
    
    char ch;
    int spaces = 0;
    int total = 0;
//    cout << "Enter ch";
    cin.get(ch);
    while (ch != '.') {
        if (ch == ' ') {
            ++spaces;
        }
        ++total;
        cin.get(ch);
    }
    cout << spaces << " spaces," << total;
    cout << " characters total in sentence\n";
    
    return 0;
}
