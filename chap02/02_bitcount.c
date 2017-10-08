#include <stdio.h>

int bitcount(unsigned x);

int main () {
	int num = 0;
	int count;
	printf("enter num: ");
	scanf("%d",&num);
	while (num >= 0){
		count = bitcount(num);
		printf("bitcount = %d",count);
		int count;
		printf("\nenter num: ");
		scanf("%d",&num);
	}
	printf("\nnum must be more than 0");
	return 0;
}
int bitcount (unsigned x){
	int b;
	for (b = 0; x != 0; x>>=1 )
		if (x & 1)
			b++;
	return b;
}
