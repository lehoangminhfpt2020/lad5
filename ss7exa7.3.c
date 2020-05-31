#include <stdio.h>
#include <stdlib.h>

int main() {
	int year;
	printf ("\n please enter a year:");
	scanf ("%d",&year);
	if (year % 4 == 0 && year % 100 !=0 || year % 400==0 )
	
	printf ("\n %d is a leap year!",year);

	return 0;
}
