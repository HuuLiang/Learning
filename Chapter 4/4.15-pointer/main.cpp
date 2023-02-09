//
//  main.cpp
//  4.15-pointer
//
//  Created by Liang on 2019/3/12.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    int updates = 6;
    
    int * p_updates;
    p_updates = &updates;
    
    cout << "Values: update = " << updates;
    cout << ", p_updates = " << *p_updates << endl;
    
    cout << "Address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    
    return 0;
}



