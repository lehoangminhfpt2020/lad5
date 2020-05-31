#include <stdio.h>
#include <stdlib.h>

int main() {
	int num,res;
	printf("enter the number: ");
	scanf ("%d",&num);
	
	res = num % 2;
	 if (res==0)
	 printf ("%d is even.",num);
	 else 
	 printf ("%d is odd.",num);
	return 0;
}
