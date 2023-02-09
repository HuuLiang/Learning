//
//  main.cpp
//  4.11-structur
//
//  Created by Liang on 2019/1/21.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>

struct inflatable
{
    char name[20];
    float valume;
    double price;
};

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    inflatable guest =
    {
        "Glorious Gloria",
        1.99,
        29.99
    };
    
    inflatable pal = {
        "Audacious Arthur",
        3.12,
        32.99
    };
    
    cout << "Expand your guest list with" << guest.name;
    cout << " and " << pal.name << "!\n";
    
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    
    return 0;
}
