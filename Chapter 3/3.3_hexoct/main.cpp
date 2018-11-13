//
//  main.cpp
//  3.3_hexoct
//
//  Created by Liang on 2018/11/6.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;
    
    cout << "Monsieur cute a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
    
    
    return 0;
}
