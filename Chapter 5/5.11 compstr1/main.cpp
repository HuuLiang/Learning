//
//  main.cpp
//  5.11 compstr1
//
//  Created by Liang on 2019/5/7.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>
#include <cstring>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate"); ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends,word is " << word << endl;
    return 0;
}
