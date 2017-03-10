#include <stdio.h>
#include <math.h>

double my_sqrt(double number){
	double sqrt;
	double x;
	int i = 1;
	int j;
	while(1){
		if((i*i <= number) && (number < (i+1)*(i+1))){
			x = i;
			break;
		}
		i += 1;
	}
	//printf("%lf\n", x);
	sqrt = (x + number/x)*0.5;
	for(j=0; j<10; j++){
		sqrt = (sqrt + number/sqrt)*0.5;
	}
	return sqrt;
}

int main(int argc, char const *argv[]){
	double integer;
	printf("Tell me non-negative number X: ");
	scanf("lf", &integer);
	printf("\nsqrt(x)    = %10lf, sqrt(x)^2    = %.30e\n"
		"my_sqrt(x) = %10lf, my_sqrt(x)^2 = %.30e \n",
		sqrt(integer), sqrt(integer)*sqrt(integer),
		my_sqrt(integer), my_sqrt(integer)*my_sqrt(integer));
	
	return 0;
}
