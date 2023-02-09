//
//  main.cpp
//  4.21-newstrct
//
//  Created by Liang on 2019/3/20.
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
    
    inflatable *ps = new inflatable;
    cout << "Enter name of inflatable item; ";
    cin.get(ps->name,20);
    cout << "Enter name of inflatable feet; ";
    cin >> (*ps).volume;
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name:" << (*ps).name << endl;
    cout << "Volume:" << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;
    delete ps;
    
    return 0;
}
