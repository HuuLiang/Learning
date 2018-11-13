//
//  main.cpp
//  2.4_sqrt
//
//  Created by Liang on 2018/11/5.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    double area;
    cout << "Enter the floor area, in square feet ,of your home：";
    cin >> area;
    
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    
    return 0;
}
