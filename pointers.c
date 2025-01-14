//pointers.c

#include <stdio.h>

int main(){
	// you can extract address of ordinary variable
	// with & operator
	int a = 5;
	//int a GETS 5 because we are assigning the value of 5 to a
	printf("value of a: %d \n", a);
	printf("address of a: %p \n", &a);
	//printf("address of a: %d \n", (int)&a);
	//printf("address of a: %x \n", (int)&a);
	
	// * in definition is a 'pointer'
	// * in code is 'value at'
	int* pA = &a;
	printf("value OF pA: %p \n", pA);
	printf("value AT pA: %d \n", *pA);
	//This one can mess with system memory because were trying to get 
	//to memory slot 5
	//printf("value AT a: %d \n", *a);
	

	//You can have a pointer to a pointer!
	int **ppA = &pA;
	printf("Value of ppa: %p \n", ppA);
	printf("Value AT ppA: %p \n", *ppA);
	printf("Value AT value AT ppA: %d \n", **ppA);
	return 0;
