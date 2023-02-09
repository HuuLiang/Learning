//
//  main.cpp
//  5.5 bigstep
//
//  Created by Liang on 2019/5/6.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using std::cout;
    using std::cin;
    using std::endl;
    
    cout << "Enter an interger: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100; i = i + by) {
        cout << i << endl;
    }
    
    return 0;
}
