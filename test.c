
#include <stdio.h>

int main() {
	char upper = 65; // A
	char lower = 97; // a
	char count = 0;
	printf("\t  CHARACTERS TO ASCII\n");
	printf("\t upper    ||     lower\n"
	       "\t ======================\n");
	for(; count < 26; count++) {
		printf("\t %c: %i    ||     %c: %i\n", upper, upper, lower, lower);
		++upper;
		++lower;
	}
	printf("\t ======================\n");
}
