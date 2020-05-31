#include <stdio.h>
#include <stdlib.h>


int main() {
	int x,y;
	x=y=0;
	printf ("enter choice (1-3) : ");
	scanf("%d",&x);
	
	if (x==1)
	{ 
	  printf ("\n enter the value for y (1-5): ");
	  scanf ("%d",&y);
	
	if (y<=5)
	
	printf ("\n the value of y exceeds 5");
	}
	
	else 
	printf ("\n Choice entered was not 1"); 
	
	return 0;
}
