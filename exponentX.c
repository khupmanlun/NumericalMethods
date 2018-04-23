#include<stdio.h>
int main(void){
    int n,i;
    float sum = 1 ,term = 1;
    float x;
    printf("Type the value of X: \t");
    scanf("%f",&x);
    printf("\nType the number of terms: \t");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        term = term *(x/i);
        sum = sum + term;
    }
      printf("\nThe sum of the series till %d terms is %.3f\n",n,sum);
  
}
