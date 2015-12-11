//
//  main.c
//  lo2
//
//  Created by num5 on 12/11/15.
//  Copyright © 2015 num5. All rights reserved.
//

#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n", max(14, 18));
    return 0;
}
