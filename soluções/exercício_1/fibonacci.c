#include <stdio.h>

int main(){
	int a = 0;
	int b = 1;
	int c = 0;
	
	printf("%d %d ", a, b);
	for(int i = 0; i < 8; i++){
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
	
	printf("\n");
	return 0;
}
