//
//  main.c
//  lo5
//
//  Created by num5 on 12/11/15.
//  Copyright © 2015 num5. All rights reserved.
//

#include <stdio.h>

// 创建函数
void test(int score) {
    if (score >= 90) {
        printf("优秀\n");
    } else if (score >= 80) {
        printf("良好\n");
    } else if (score >= 60) {
        printf("及格\n");
    } else {
        printf("不及格\n");
    }
}

void test2(int score) {
    switch (score/10) {
        case 9:
            printf("优秀\n");
            break;
            case 8:
            printf("良好\n");
            break;
            case 7:
            case 6:
            printf("及格\n");
            
            
        default:
            printf("不及格\n");
            break;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
    test2(195);
    return 0;
}
