//
//  main.cpp
//  5.18 textin3
//
//  Created by Liang on 2019/5/8.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters;enter # to quit:\n";
    cin.get(ch);
    while (cin.fail() == false) {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
    return 0;
}
