#include <stdio.h>
#include <stdlib.h>

/* nhap 3 so, in ra so lon nhat*/

int main() {
	float a,b,c;
	printf("nhap so a: ");
	scanf ("%f",&a);
	printf("nhap so b: ");
	scanf ("%f",&b);
	printf("nhap so c: ");
	scanf ("%f",&c);
	
	if (a>b && a>c)
	printf (" so a %f la so lon nhat trong 3 so vau nhap",a);
	if (b>a && b>c)
	printf (" so b %f la so lon nhat trong 3 so vau nhap",b);
	if (c>a && c>b)
	printf (" so c %f la so lon nhat trong 3 so vau nhap",c);
	return 0;
}
