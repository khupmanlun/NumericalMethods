//Program to implement NR method
//Dated- 23/02/18
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double  FUN(double a){
	return exp(-a) - a;
}

double Derivative(double x){
	double const  Del=1.0e-6;
	double a = x-Del;
	double b = x+Del;
	double c = FUN(a);
	double d = FUN(b);
	return   (d-c)/(b-a);
}

double calculate_x1(double x){
	return x - FUN(x)/Derivative(x);
}

double Newton_Raphson(double x0){
	double x1,fx0,fx1,fx01;
	int iteration  = 0,i;
		for(i=1;i<6;i++){
			fx0=FUN(x0);
			if(abs(Derivative(x0))<=0.000001){
			//if the derivative is too small we know it will never converge so,we exit if Derv is too small
				printf("Slope is to small!Try again\n");
				exit(1);
			}
			x1= calculate_x1(x0);
			if(abs((x1-x0)/x1)<0.000001){
				printf("||x1-x0/x1 = %.4lf\t||x0 = %.4lf\t||x1 =%.4lf\t||fx0= %.3lf\t||fx0'= %.4lf\t||iteration=%d\n",(x1-x0)/x1,x0,x1,FUN(x0),Derivative(x0),iteration++);
			}
			x0 = x1;
		}
	printf("\nThe root is %.5lf",x1);
}

int main(int argc, char* argv[]){
	int  x0 = atoi(argv[1]);
	if(argc<2){
		printf("Wrong arguments!!Try again");
		
	}
	else
		Newton_Raphson(x0);

}
