//
//  main.cpp
//  5.12 compstr2
//
//  Created by Liang on 2019/5/7.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends,word is " << word << endl;
    
    return 0;
}
