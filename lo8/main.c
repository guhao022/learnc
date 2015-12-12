//
//  main.c
//  lo8
//
//  Created by num5 on 12/11/15.
//  Copyright © 2015 num5. All rights reserved.
//

#include <stdio.h>

void sayHello() {
	printf("Hello C\n");
}

typedef void(*Func)();


int main(int argc, const char * argv[]) {
    // insert code here...
	
	void (*p)();

	Func f = sayHello;
	f();
	printf("Hello %d\n", 1233);

    return 0;
}
