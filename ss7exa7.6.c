#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	x=0;
	printf ("enter the number : ");
	scanf ("%d",&x);
	
	if (x==1)
	printf("\n choice is 1");
	else if (x==2)
	printf ("\n choice is 2");
	else if (x==3)
	printf ("\n choice is 3");
	
	else 
	printf ("\n Invalid choive");
	
	return 0;
}
