//
//  main.cpp
//  2.6_convert
//
//  Created by Liang on 2018/11/5.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>

int stonetolb(int);

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    int stone;
    cout << "Enter the weight in stone:";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    
    return 0;
}

int stonetolb(int sts)
{
    return 14*sts;
}
