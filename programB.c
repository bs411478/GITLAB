#include <stdio.h>
#include <string.h>

void func1(){
	printf("User B : message from func1");
}

void main()
{ 
	printf("programB\n");
	func1();
}
