//
//  main.cpp
//  5.6 forstr1
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
    
    for (int i = (int)word.size() - 1 ; i >= 0; i--) {
        cout << word[i] << endl;
    }
    cout << "\nBye.\n";
    
    return 0;
}
