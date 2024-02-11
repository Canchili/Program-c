#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
//	printf("Hello world");
	double a = 5.1,b = 1,c = -2, d, x1, x2;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	d = b*b - 4*a*c;
	x1 = (-b + sqrt(d))/ (2*a);
	x2 = (-b - sqrt(d))/ (2*a);
	printf("d = %lf \n",d);
	printf("x1 = %lf \n" "x2 = %lf \n",x1,x2);
	if (d>0){
	x1 = (-b + sqrt(d))/ (2*a);
	x2 = (-b - sqrt(d))/ (2*a);
	printf("x1 = %lf \n" "x2 = %lf \n",x1,x2);
	}
	if(d<0){
		printf("korne net",0);
	}
	if (d == 0){
		printf("1 korne",0);
		x2 = (-b - sqrt(d))/ (2*a);
		printf( "x2 = %lf",x2);
	}
	return 0;
}
