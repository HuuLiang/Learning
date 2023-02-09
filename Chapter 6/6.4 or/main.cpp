//
//  main.cpp
//  6.4 or
//
//  Created by Liang on 2019/5/13.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    cout << "This program may reformat your hard disk\n"
            "and destory all your data.\n"
            "Do you wish to continue? <y/n> ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y') {
        cout << "You were warned!\a\a\n";
    } else if (ch == 'n' || ch == 'n') {
        cout << "A wish choice ... bye\n";
    } else {
        cout << "That wasn't a y or n! Apparently you "
                "can't follow\ninstructions,so "
                "I'll transh your disk anyway.\a\a\a\n";
    }
    
    return 0;
}
