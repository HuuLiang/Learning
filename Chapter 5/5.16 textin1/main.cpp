//
//  main.cpp
//  5.16 textin1
//
//  Created by Liang on 2019/5/7.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";
    cin >> ch;
    while (ch != '#') {
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << endl << count << " character read\n";
    
    return 0;
}
