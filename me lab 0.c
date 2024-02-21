#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
//	printf("Hello world");
int i = 1;
while(i == 1)
{
	double a = 5.1,b = 1,c = -2, d, x1, x2;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	d = b*b - 4*a*c;
	x1 = (-b + sqrt(d))/ (2*a);
	x2 = (-b - sqrt(d))/ (2*a);
	printf("d = %lf \n",d);
	if (d>0){
	x1 = (-b + sqrt(d))/ (2*a);
	x2 = (-b - sqrt(d))/ (2*a);
	printf("x1 = %lf \n" "x2 = %lf \n",x1,x2);
	}
	if(d<0){
		printf("korne net");
	}
	if (d == 0){
		printf("1 korne");
		x2 = (-b - sqrt(d))/ (2*a);
		printf( "x2 = %lf \n",x2);
	}
	printf("if you want to continue press 1 if you don’t want 0");
	scanf("%i",&i);
	
}
	return 0;
}
	
