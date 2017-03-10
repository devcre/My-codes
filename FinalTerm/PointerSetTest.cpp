#include <stdio.h>

int main(void){
	int a = 5;
	int *p = &a;
	
	*p = 3;
	printf("%d\n", a);
}
