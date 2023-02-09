//
//  main.cpp
//  4.16-init_ptr
//
//  Created by Liang on 2019/3/14.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    int higgens = 5;
    int * pt = &higgens;
    
    cout << "Value of higgens = " << higgens
    << "; Address of higgens = " << &higgens << endl;
    
    cout << "Value of *pt = " << *pt
    << "; Value of pt = " << pt << endl;
    
    return 0;
}
 
