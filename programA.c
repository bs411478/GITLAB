#include <stdio.h>
#include <string.h>

void func1(){
	printf("User A : message from func1 , I just change this program lololo from user A");
}

void main()
{ 
	printf("programA, I change here \n");
	func1();
}
