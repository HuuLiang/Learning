//
//  main.cpp
//  6.2 ifelse
//
//  Created by Liang on 2019/5/13.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    char ch;
    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.') {
        if (ch == '\n')
            std::cout << ch;
        else
            std::cout << ++ch;
        std::cin.get(ch);
    }
    std::cout << "\nPlease excuse the slight confusio.\n";
    
    return 0;
}
