#include <stdio.h>
#include <stdlib.h>

/* nhap ki tu xuat ra chuong trinh tuong ung */

int main() {
	char a;
	fflush(stdin);
	printf ("nhap ki tu:");
	scanf ("%c",&a);
	
	switch(a)
	{
	case 'A':
	printf("Ada");
	break;
	
	case 'a':
	printf("Ada");
	break;
	
	case 'B':
	printf("Basic");
	break;
	
	case 'b':
	printf("Basic");
	break;
	
	case 'C':
	printf("COBOL");
	break;
	
	case 'c':
	printf("COBOL");
	break;
	
	case 'D':
	printf("dBASEIII");
	break;
	
	case 'd':
	printf("dBASEIII");
	break;
	
	case 'F':
	printf("Fortran");
	break;
	
	case 'f':
	printf("Fortran");
	break;
	
	case 'P':
	printf("Pascal");
	break;
	
	case 'p':
	printf("Pascal");
	break;
	
	case 'V':
	printf("Visual C++");
	break;
	
	case 'v':
	printf("Visual C++");
	break;
	
	default:
		printf ("nhap lai ky tu");
		break;
	}
	
	
	return 0;
}
