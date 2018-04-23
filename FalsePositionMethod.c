//Say the f(x) = x**2 - 3 ....Just change the Macro function()  as and when necessary
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double func(double x){
    return exp(-x) -x;
}

double root(double a,double b){
         double A,B,c;
         A = a*func(b)-b*func(a);
         B = func(b) - func(a);
         c=  A/B;
    return c;
}
void FalsePos(double  x0,double  x1){
        double  fx2,fx0,fx1,x2,temp;
        int i=0;
        fx0= func(x0);
        fx1=func(x1);
        temp= 0;
        //If x1-x0 i.e the length of interval is less than 0.000001 then obviously we have found the root
        for(i=1;i<8;i++){
		x2=root(x0,x1);
		fx2 = func(x2);
            if(fx2<=0.000001)
                printf("Value of x0= %lf, || x1= %lf || x2=%lf || iteration=%d||fx2 = %.3lf\n",x0,x1,x2,i,fx2);
            else
            	break;
			if(fx0*fx2<=0){
			//check if fx0 * fx2 is less than 0 ,if yes change x1=x2 else x0=x2
				x1 = x2;
				fx1=fx2;
			}
			else{
				x0 = x2;
				fx0=fx2;
			}
			i++;//iterations
			             
		}
		printf("The root is %lf",x2);
}
int main(int argc,char* argv[]){
	double x0,x1,fx0,fx1,fx2;
	x0 = atoi(argv[1]);
	x1= atoi(argv[2]);
 	if(argc<2){
		printf("Try again~~");
	}
		fx0=func(x0);
        	fx1=func(x1);
		if(fx0*fx1<0){
            		FalsePos(x0,x1);//Calls Bisection Method to find the root  of the given function
        }
	else{
        printf("Take another value of a and b! ");
	}
	

}

