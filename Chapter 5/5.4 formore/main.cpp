//
//  main.cpp
//  5.4 formore
//
//  Created by Liang on 2019/5/6.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

const int ArSize = 16;

int main(int argc, const char * argv[]) {
    
    long long factorials[ArSize];
    
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++) {
        factorials[i] = i * factorials[i-1];
    }
    for (int i = 0; i < ArSize; i++) {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }
    
    return 0;
}
