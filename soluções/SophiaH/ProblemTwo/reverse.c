#include <stdio.h>
#include <string.h>

int main() {
	char text[] = "Banana e melhor do que maca";
	int len = strlen(text);
	char* a = text, *b = text + len - 1;
	puts(text);
	while (a < b) {
		*a ^= *b;
		*b ^= *a; 
		*a ^= *b;
		a++;
		b--;
	}
	puts(text);
	return 0;
}
