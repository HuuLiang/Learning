//
//  main.cpp
//  5.19 textin4
//
//  Created by Liang on 2019/5/8.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int ch;
    int count = 0;
    
    while ((ch = cin.get()) != EOF ) {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read\n";
    
    return 0;
}
