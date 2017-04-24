#include <stdio.h>
#include <string.h>

void func1(){

<<<<<<< HEAD
	printf("User A : message from func1 , I just change this program lololo pqow,C edit this");
	printf("User A : message to User C --> hellooo");
=======
	printf("User A : message from func1 , I just change this program lololo pqow");
	printf("User A : message to User C --> hellooooo");
>>>>>>> ed7980be0d6868574005f92f6d844d656e6e23e2
}

void main()
{ 
<<<<<<< HEAD
	printf("programA, I change here ,C edit here\n");
=======
	printf("programA, I change here, change heree again... \n");
>>>>>>> ed7980be0d6868574005f92f6d844d656e6e23e2
	func1();
}
