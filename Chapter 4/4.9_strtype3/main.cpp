//
//  main.cpp
//  4.9_strtype3
//
//  Created by Liang on 2018/11/16.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>


int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    str1 = str2;
    strcpy(charr1, charr2);
    
    str1 += " paste";
    strcat(charr1, " juice");
    int len1 = (int)str1.size();
    int len2 = (int)strlen(charr1);
    
    cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
    
    return 0;
}
