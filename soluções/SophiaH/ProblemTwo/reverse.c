#include <stdio.h>
#include <string.h>

int main() {
	char text[] = "Bom dia";
	int len = strlen(text);
	char* a = text, *b = text + len - 1;
	puts(text);
	while (a < b) {
		*a ^= *b ^= *a ^= *b;
		a++;
		b--;
	}
	puts(text);
	return 0;
}
