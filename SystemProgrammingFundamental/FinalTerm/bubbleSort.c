#include <stdio.h>

void swap(int *, int *);

void bubble(int a[], int n){
	int i, j;
	
	for(i=0; i<n-1; ++i){
		for(j=n-1; j>i; --j){
			if(a[j-1] > a[j]){
				swap(&a[j-1], &a[j]);
			}
			printf("%s%d %d %d %d %d %d %d %d\n", "a: ",
			 a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
		}
		printf("\n");
	}
}

void swap(int *a, int *b){
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void){
	int a[] = {7, 3, 66, 3 ,-5, 22, -77, 2};
	
	bubble(a, 8);
}
