#include <stdio.h>
#include <stdlib.h>


int main() {
	int productcode;
	float order, rate =0.0;
	printf ("\n please enter the product code: ");
	scanf ("%d",&productcode);
	printf ("\n enter the order amount: ");
	scanf ("%f",&order);
	if (productcode==1)
	{
		if (order >=500)
		rate = 0.12;
		 else if (order>=300)
		rate = 0.08;
		else
		rate = 0.02;	
	}
	
	else if (productcode==2)
	{
		if (order >=2000)
		rate = 0.1;
		else if (order >=1500)
		rate = 0.05;
	}
	
	else if (productcode==3)
	{
		if (order >=5000)
		rate = 0.1;
		else if (order >=2500)
		rate = 0.05;
	}
	
	order -= order*rate;
	
	printf ("\n the net order amount is %2f ",order);
	return 0;
}
