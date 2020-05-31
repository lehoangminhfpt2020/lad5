#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b;
	printf ("nhap so a : ");
	scanf ("%d",&a);
	printf ("nhap so b : ");
	scanf ("%d",&b);
	
	if (a*b<1000)
	{
	printf ("tich %d va %d nho hon 1000"),a,b;
    }
    
    else if (a*b==1000)
    {
    	printf("tich %d va %d bang 1000"),a,b;
	}
	
	else
	printf ("tich %d va %d lon hon 1000"),a,b;
	return 0;
}
