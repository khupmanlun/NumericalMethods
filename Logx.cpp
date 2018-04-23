#include<stdio.h>
int main(void){
	int i,terms;
	float sum,temp,x;
	printf("Type the number of terms:\t");
	scanf("%d",&terms);
	printf("Value of x: \t ");
	scanf("%f",&x);
   // printf("%f",x);
	sum = x;
	temp = x;
	for(i=1;i<=terms;i++){
		temp = (temp * ((-1)*x*i)/(i+1));
		sum += temp;
	}
	printf("The sum is %.4f : ",sum);

}
