#include <stdio.h>
#include <stdlib.h>

/* bai tap tinh tin hoa hong neu nhan vien dat 10000$ doanh so*/
/*hoa hong 10%*/

int main() {
	float sale,com=0;
	printf ("enter the sales amount: ");
	scanf ("%f",&sale);
	
	if (sale >=10000)
	com = sale *0.1;
	
	printf ("commission = %f ",com);
	return 0;
}
