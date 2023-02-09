//
//  main.cpp
//  4.8_strtype2
//
//  Created by Liang on 2018/11/16.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    string s1 = "penguin";
    string s2,s3;
    
    cout << "You can assign one string object to another : s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2 " << s2 << endl;
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2:" << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "You can append strings.\n";
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \"for a day\" yields s2 = " << s2 << endl;
    
    return 0;
}
