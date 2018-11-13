//
//  main.cpp
//  3.2_exceed
//
//  Created by Liang on 2018/11/6.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>
#define ZERO 0
#include <climits>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "And $1 to each account." << endl << "Now ";
    
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has" << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;
    
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
    << "Take $1 from each account." << endl << "Now ";
    
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has" << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << " Lucky Sue!" << endl;
    
    return 0;
}
