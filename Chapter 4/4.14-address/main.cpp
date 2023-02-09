//
//  main.cpp
//  4.14-address
//
//  Created by Liang on 2019/3/12.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    int donuts = 6;
    double cups = 4.5;
    
    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
    
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    
    return 0;
}
