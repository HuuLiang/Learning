//
//  main.cpp
//  5.14 waiting
//
//  Created by Liang on 2019/5/7.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>
#include <ctime>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    cout << "Enter the delay time,in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    clock_t currentClock = clock();
    while (currentClock - start < delay) {
        cout << "currentClock :" << currentClock << endl;
        cout << "start :" << start;
        currentClock = clock();
    }
    cout << "done \a\n";
    
    
    return 0;
}
