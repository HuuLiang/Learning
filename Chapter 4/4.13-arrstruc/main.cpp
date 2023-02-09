//
//  main.cpp
//  4.13-arrstruc
//
//  Created by Liang on 2019/3/12.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char * argv[]) {
    using namespace std;
    
    inflatable guests[2] = {
        {"Bambi",0.5,21.99},
        {"Godzilla",2000,565.99}
    };
    
    cout<< "The guests " << guests[0].name << " and " << guests[1].name
        << "\nhave a combined volumn of "
        << guests[0].volume + guests[1].volume << " cubic feet.\n ";
    
    return 0;
}
