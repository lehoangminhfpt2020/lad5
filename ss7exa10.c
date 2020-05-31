#include <stdio.h>
#include <stdlib.h>


int main() {
	int basic; 
	printf ("\n Enter your basic : ");
	scanf ("%c",&ch);
	
	switch (basic)
	{
		case 200:
	printf ("\ Bonus is dollar %d \n",50);
	break;
	
		case 300:
	printf ("\ Bonus is dollar %d \n",125);
	break;
		
		case 400:
	printf ("\ Bonus is dollar %d \n",140);
	break;
	
		case 500:
	printf ("\ Bonus is dollar %d \n",175);
	break;
	
	default:
		printf ("\n invalid entry");
		break;
	}
	return 0;
}
