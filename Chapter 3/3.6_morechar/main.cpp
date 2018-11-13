//
//  main.cpp
//  3.6_morechar
//
//  Created by Liang on 2018/11/6.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    
    cout << "Add one to the charachter code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    
    cout << "Displaying char ch using cout.put(ch):";
    cout.put(ch);
    
    cout.put('!');
    cout << endl << "Done" << endl;
    
    return 0;
}
