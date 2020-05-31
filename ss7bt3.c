#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b;
	printf ("nhap so thu nhat: ");
	scanf ("%d",&a);
    printf ("nhap so thu hai: ");
	scanf ("%d",&b);
	
	if (a!=0 && b==0)
	printf ("hieu bang gia tri %d",a);
	if (a==0 && b!=0)
	printf ("hieu bang gia tri %d",b);
	if (a!=0 && b!=0)
	printf ("hieu khong bang bat ki gia tri nao da nhap vao");
	return 0;
}
