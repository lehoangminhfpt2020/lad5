#include <stdio.h>
#include <stdlib.h>


int main() {
	char a;
	fflush(stdin);
	printf ("ban muon nhan luong!!");
	printf ("\n co 3 loai nhan vien. A, B va cac loai khac");
	printf ("\n Hay nhap loai nhan vien (neu la loai khac hay nhap C)");
	fflush(stdin);
	scanf ("%c",&a);
	fflush(stdin);
	switch(a)
	{
		case 'A':
			printf ("nhan vien loai A muc luong la 300");
		case 'B':
			printf ("nhan vien loai A muc luong la 250");
		case 'C':
			printf ("nhan vien cac loai khac muc luong la 100");
	}
	return 0;
}
