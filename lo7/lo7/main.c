//
//  main.c
//  lo7
//
//  Created by num5 on 12/11/15.
//  Copyright © 2015 num5. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//结构体
struct People {
    int age;
    char *name;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    struct People * p = malloc(sizeof(struct People));
    p->age = 10;
    p->name = "xiaoli";
    
    printf("Hello, World!%s\n", p->name);
    
    struct People * p1 = p;
    p->age = 90;
    printf("%s==>%d\n", p1->name,p1->age);
	free(p);
    return 0;
}
