/* El programa copia la entrada a la salida, reemplazando:
 * cada tabulación por \t,
 * cada backspace por \b,
 * y cada backslash by \\
 * Daniel Marcelletti
 * 20/04/2015
 */

#include <stdio.h>

int main ()
{
	int c;
	
	while ((c = getchar()) != EOF) {
		switch(c){
			case '\t':
				printf("\t");
				break;		
			case '\b':
				printf("\b");
				break;
			case '/':
				printf("/");
				break;
			default:
				putchar(c);
		}
	}
return 0;
}
