#include <stdio.h>
#include <stdlib.h>

/* in ra x khi >2000 va <3000, y >100 va <500*/

int main() {
 float x,y;
	printf ("nhap bien x");
	scanf ("%f",&x);
	printf ("nhap bien y");
	scanf ("%f",&y);
	if (x>3000)
	{
	printf ("gia tri cua x là %f",x);
    }
	else if(x<2000)
	{
	printf ("gia tri cua x là %f",x);
    }
    
	if (y>100)
	{
	if (y<500)
	printf ("gia tri cua y la %f ",y);
    }
	return 0;
}
