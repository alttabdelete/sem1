#include <stdlib.h>
#include <stdio.h>

void print_el(int i, int* tab)
{
	printf("Element należy wstawic na poz %d", tab[i]); 
}

int main() {
	int tab[5] = {2,3,5,7,9};

	int x = 6;

	int b = sizeof(tab) / sizeof(tab[0]) / 2 - 1;

	printf("== %d\n", b);

	loop:

	if (tab[b] < x) {
		printf("> Jestem po prawej stronie\n");

		if (tab[b + 1] < x) {
			print_el(b, tab);
		} else {
		
		b = b / 2 - 1;
		goto loop;
		}	
	} else {
		if (tab[b-1] >  x) {
			
			print_el(b - 1, tab);
		} else {
		b = b / 2 - 1;
		goto loop;
		}
	}
}
