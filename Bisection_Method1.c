#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define func(x) exp(-x) - x
//Macro for the function

void Bisect(double  x0,double  x1){
        double  fx2,fx0,fx1,x2;
        int i=0;
        //If x1-x0 i.e the length of interval is less than 0.000001 then obviously we have found the root
        while((x1-x0)/x1>=0.0001){

               		x2 = (x0+x1)/2;
       			fx0=func(x0);
                	fx2=func(x2);
                printf("||iteration=%d\t  ||  x0= %.4lf || x1= %.4lf || x2=%.4lf || fx2 = %.4lf \t || fx0 = %.4lf \t||Length(x1-x0) = %.4lf \n",i,x0,x1,x2,fx2,fx0,x1-x0);

			if(fx0*fx2<=0){
			//check if fx0 * fx2 is less than 0 ,if yes change x1=x2 else x0=x2
				x1=x2;
			}
			else{
				x0 = x2;
			}
			i++;//iterations

		}
	printf("The root is %lf",x2);
    
}
int main(int argc,char* argv[]){
	//Say the f(x) = x**2 - 25
	double x0,x1,fx0,fx1,fx2;
	x0 =atoi(argv[1]);//Taking cmd line arguments
	x1= atoi(argv[2]);
		fx0=func(x0);
        	fx1=func(x1);
		if(fx0*fx1<0)
			//#warning take x0 and x1 value carefully
           		 Bisect(x0,x1);
        else
       	 		printf("Take another value of a and b! ");
		
        
	
}
