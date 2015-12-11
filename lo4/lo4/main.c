//
//  main.c
//  lo4
//
//  Created by num5 on 12/11/15.
//  Copyright © 2015 num5. All rights reserved.
//

#include <stdio.h>

// 宏方法
#define MAX(A, B) A>B?A:B

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, %f\n", MAX(1.5, 1.65));
    return 0;
}
