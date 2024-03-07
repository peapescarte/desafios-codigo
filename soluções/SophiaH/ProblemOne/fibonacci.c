#include <stdio.h>

void FibonacciHelper(int x, int y, int depth) {
	if (depth == 0) return;
	printf("%d\n", x + y);
	depth -= 1;
	FibonacciHelper(y, x+y, depth);
}

void Fibonacci(int depth) {
	FibonacciHelper(0, 1, depth);
}

int main() {
	Fibonacci(10);
	return 0;
}
