#include<stdio.h>

#define MAX 255

int binsearch (int, int* , int);
void count_hay (int*, int);

int main(){
	int hay = 1, i, result;
	int stack[MAX];
	for ( i= 0; i < MAX; i++){
		stack[i] = 3*i;
	}
//	count_hay(stack, MAX);
	do {
		printf("\nenter hey:");
		scanf("%d", &hay);
		result = binsearch(hay, stack, MAX);
		printf("\nresult = %d", result);
	} while (hay >= 0);

}

int binsearch(int x, int v[], int n){
	int low, high, mid;

	low =0;
	high = n-1;
	while (low <= high) {
		mid = (low+high) / 2;
		if (x < v[mid]) {
			high = mid - 1;
			printf("\tif1:mid%03d:low%03d:high%03d\n", mid, low, high);
		}
		else if (x > v[mid]) {
			low = mid + 1;
			printf("\tif2:mid%03d:low%03d:high%03d\n", mid, low, high);
		}
		else {
			printf("\treturn%3d\n", mid);
			return mid;
		}
	}
	return -1; // no match
}

void count_hay(int v[], int n){
	int ret[10], count[10] = {0};
	int i,j;
	
	for (i = 0; i< 10; i++){
		ret[i] = i;
		printf("%d, ", count[i]);
	}
	
	for (i = 0; i < n; i++){
		for (j = 0; j < 10; j++){
			if (v[i] == ret[j])
				count[j]++;
		}
	}
	
	printf("\nresult:");
	for (i = 0; i < 10; i++){
		printf(" %d[%d],", ret[i], count[i]);
	}
	printf("\n");
}
