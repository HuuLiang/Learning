//
//  main.cpp
//  2.2_carrots
//
//  Created by Liang on 2018/11/5.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    int carrots;
    
    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch ,crunch. Now i have" << carrots << "carrots" <<endl;
    
    return 0;
}
