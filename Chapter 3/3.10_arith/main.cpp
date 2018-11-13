//
//  main.cpp
//  3.10_arith
//
//  Created by Liang on 2018/11/9.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    using namespace std;
    
    float hats,heads;
    
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter a number:";
    cin >> hats;
    cout << "Enter another number:";
    cin >> heads;
    
    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    
    return 0;
}
