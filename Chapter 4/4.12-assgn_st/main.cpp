//
//  main.cpp
//  4.12-assgn_st
//
//  Created by Liang on 2019/3/12.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

struct inflatable {
    char name[20];
    float volumn;
    double price;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    inflatable bouquet = {
        "sunflowers",
        0.2,
        12.49
    };
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;
    
    choice = bouquet;
    cout << "choice:" << choice.name << "for $";
    cout << choice.price << endl;
    
    return 0;
}
