//
//  main.cpp
//  hello
//
//  Created by num5 on 15/12/11.
//  Copyright © 2015年 num5. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    char * p = new char[10];
    
    strcpy(p, "iPhone\n");
    printf("%s\n", p);
    
    delete [] p;
    
    //std::cout << p;
    //std::cout << "Hello, World!\n";
    return 0;
}
