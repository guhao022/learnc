#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int age;
	void(*sayHello)();
} People;

// 创建people
People* create() {
	// 返回people的指针类型
	return malloc(sizeof(People));
}

//删除
void delete(People *p) {
	free(p);
}

void sayHello() {
	printf("Hello, C\n");	
}


//初始化
People* init(People *p, int age) {
	p->age = age;
	p->sayHello = sayHello;
	return p;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    People *p = init(create(), 20);
	p->sayHello();
	delete(p);
	return 0;
}
