//
//  main.cpp
//  3.12_modulus
//
//  Created by Liang on 2018/11/12.
//  Copyright © 2018 Liang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    const int Lbs_per_stn = 14;
    int lbs;
    
    cout << "Enter your weight in pounds:";
    cin >> lbs;
    int stone = lbs/Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " pounds are " << stone
    << " stone, " << pounds << " pound(s)\n";

    
    return 0;
}
