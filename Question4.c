#include<stdio.h>
int main(){
   int a,b;
   int n,i,min;
   printf("Enter the two number :");
   scanf("%d%d",&a,&b);
   if(a>=b){
    min=b;
   }
   else{
    min=a;
   }
   for(i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            n=i;
        }
   }

   printf("The HCF of %d & %d is %d",a,b,n);

    return 0;
}