#include<stdio.h>
int main(void){
    int n,i;
    float  sum=1,term=1,x;
    printf("Type the value of angle: \t");
    scanf("%f",&x);
    x = (x * 3.141)/180;
    printf("\nType the number of terms: \t");
    scanf("%d",&n);
     for(i=1;i<=n;i++){
        term = (term  * (-1) * x * x)/((2*i)*(2*i-1));
        sum+=term;
    }
    printf("The sum of the series till %d terms is %.3f",n,sum);
}
