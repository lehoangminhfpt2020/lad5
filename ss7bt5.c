#include <stdio.h>
#include <stdlib.h>


int main() {
	int a;
	printf ("nhap diem sinh vien: ");
	scanf ("%d",&a);
	if (a>=75)
	printf("loai A");
	
	else if (a>=60&&a<75)
	printf("loai B");
	
	else if (a>=45&&a<60)
	printf("loai C");
	
	else if(a>=35&&a<45)
	printf("loai D");
	
	else
	printf("loai E");
	
	return 0;
}
