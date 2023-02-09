//
//  main.cpp
//  5.15 dowhile
//
//  Created by Liang on 2019/5/7.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int n;
    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite number\n";
    do {
        cin >> n;
    } while (n != 7);
    cout << "Yes, 7 is my favorite.\n";
    return 0;
}
