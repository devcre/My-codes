#include <stdio.h>

int main(void){
	int i = 0, power = 2048;
	
	while((power / 2) > 0){
		printf("%-6d\n", power);
		power = power / 2;
	}
}
