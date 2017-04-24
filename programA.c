#include <stdio.h>
#include <string.h>

void func1(){

	printf("User A : message from func1 , I just change this program lololo pqow");
	printf("User A : message to User C --> hellooo");
}

void main()
{ 
	printf("programA, I change here \n");
	func1();
}
