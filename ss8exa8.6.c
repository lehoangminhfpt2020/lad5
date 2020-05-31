#include <stdio.h>
#include <stdlib.h>

/* nhap 3 mon, tinh trung binh, xep loai */

int main() {
	float a,b,c,d;
	printf("nhap diem mon thu nhat: ");
	scanf("%f",&a);
	printf("nhap diem mon thu hai: ");
	scanf("%f",&b);
	printf("nhap diem mon thu ba: ");
	scanf("%f",&c);
	
	d=(a+b+c)/3;
	
	if(d>=90)
	printf ("sinh vien dat diem trung binh loai E+");
	if (d>=80 && d<90)
	printf ("sinh vien dat diem trung binh loai E");
	if (d>=70 && d<80)
	printf ("sinh vien dat diem trung binh loai A+");
	if (d>=60 && d<70)
	printf ("sinh vien dat diem trung binh loai A");
	if (d>=50 && d<60)
	printf ("sinh vien dat diem trung binh loai B+");
	if (d<50) 
	printf ("truot ");
	return 0;
}
