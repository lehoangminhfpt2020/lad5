#include <stdio.h>
#include <stdlib.h>

/*  bai toan tinh hoa hong va san pham loai A */

int main() {
	float sale,com=0;
	char grade;
	printf (" enter the sale amount: ");
	scanf ("%f",&sale);
	fflush(stdin);
	printf ("enter the grade: ");
	scanf ("%c",&grade);
	fflush(stdin);
	if (sale>10000)
	if(grade=='A')
	 com = sale *0.1;
	else
	com = sale*0.8;
	else 
	com = sale *0.05;
	
	printf ("\n commission = %f",com);
	return 0;
}
