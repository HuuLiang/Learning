//
//  main.cpp
//  6.8 cctypes
//
//  Created by Liang on 2019/5/15.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>
#include <cctype>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    cout << "Enter text for analysis, and type @"
        " to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;
    
    cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            others++;
        
        cin.get(ch);
    }
    
    cout << chars << " letters, "
         << whitespace << " whitespace, "
         << digits << " digit, "
         << punct << " punct, "
         << others << " others.\n";
    
    return 0;
}
