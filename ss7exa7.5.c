#include <stdio.h>
#include <stdlib.h>


int main() {
	char c;
	printf ("enter a character : ");
	scanf ("%c",&c);
	
	if (c>= 'A'&& c<='Z')
	printf (" lowercare charater = %c",c+'a'-'A');
	else 
	printf (" Charater entered is = %c",c);
	
	return 0;
}
