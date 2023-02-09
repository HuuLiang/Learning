//
//  main.cpp
//  5.9 forstr2
//
//  Created by Liang on 2019/5/6.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;
    
    char temp;
    int i,j;
    for (j = 0 , i = (int)word.size() - 1; j < i; --i, ++j) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDone\n";
    
    return 0;
}
