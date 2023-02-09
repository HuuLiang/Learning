//
//  main.cpp
//  5.2 num_test
//
//  Created by Liang on 2019/5/6.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--) {
        cout << "i = " << i << "\n";
    }
    cout << "Done now that i = " << i << "\n";
    return 0;
}
