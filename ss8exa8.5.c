#include <stdio.h>
#include <stdlib.h>

/* lam ve switch */

int main() {
	float a,b;
	char c;
	printf ("nhap so dau tien: ");
	scanf ("%f",&a);
	printf ("\n nhap so thu hai: ");
	scanf ("%f",&b);
	fflush(stdin); 
	printf("\n ban muon thuc hien phep tinh gi : ");
	scanf ("%c",&c);
	
	switch (c)
	{
		case '+':
		printf ("\n tong hai so la: %f .",a+b);
		break;
		
		case '-':
		printf ("\n hieu hai so la: %f .",a-b);
		break;
		
		case '/':
		printf ("\n thuong hai so la: %f .",a/b);
		break;
		
		case '*':
		printf ("\n tich hai so la: %f",a*b);
		break;
		
		default: 
		printf ("\n hay nhap lai ky tu!");
	}
	
	return 0;
}
