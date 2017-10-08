#include <stdio.h>
int bitcount(unsigned x);
int main () {
	int x = 0;
	int b;
	while (x >= 0) {
		printf("\nenter num:");
		scanf("%d",&x);
		b = bitcount(x);
		printf("return %d",b);
	}
			
}
int bitcount (unsigned x) {
	int b;
	for (b = 0; x != 0; x &= (x-1))
		b++;
	return b;
}
