//
//  main.cpp
//  3.8_floatnum
//
//  Created by Liang on 2018/11/9.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 /3.0 ;
    const float million = 1.0e6;
    
    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten millon tubs = ";
    cout << 10 * million * tub << endl;
    
    cout << " mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
    
    
    return 0;
}
