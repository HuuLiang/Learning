//
//  main.cpp
//  4.22-delete
//
//  Created by Liang on 2019/3/20.
//  Copyright © 2019 Liang. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;
char * getname(void);

int main(int argc, const char * argv[]) {
    
    char * name;
    name = getname();
    cout << name << " at " << (int *) name << "\n";
    delete [] name;
    
    name = getname();
    cout << name << " at " << (int *)name << "\n";
    delete [] name;
    
    return 0;
}

char * getname() {
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char *pn = new char(strlen(temp) + 1);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
    strcpy(pn, temp);
    return pn;
}
