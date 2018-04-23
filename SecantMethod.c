//Program to find the root's of an equation using Secant Method
//...Dated 11/3/18

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define fun(a) exp(-a) - a

int main(int argc,char* argv[]){
	double  x0,x1,x2,fx0,fx1,fx2,A,B;
	int i;
	x0 = atoi(argv[1]);
	x1 = atoi(argv[2]);
	fx0= fun(x0);
	fx1= fun(x1);
	
	if(argc<2){
		printf("Wrong Arguments ! Try again!");
	}
	else{
		for(i=1;i<7;i++){
		
		
		A = (x0 * fx1) - (x1 * fx0);
		B= fx1-fx0;
		x2 = A/B;
		
		fx2 =  fun(x2);
		if(abs(fx2)<0.000001){
				printf("Iteration: %d \n",i);
				printf("\nx0   %.4lf|\tfx0 %.4lf|\tx1  %.4lf|\tfx1  %.4lf|\tx2  %.4lf|\tfx2  %.4lf|\n",x0,fx0,x1,fx1,x2,fx2);
		}
		
		else if(abs(fx0-fx1)<0.0001){
			printf("Slope is too small!");	
			exit(1);
		}
		else{
			break;
		}
		fx0 =fx1;
		fx1= fx2;
		x0=x1;
		x1=x2;
		
	
	
	 }
}
	
	

}
