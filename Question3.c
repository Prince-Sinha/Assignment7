#include<stdio.h>
int main(){
   int a=-1,b=1;
   int n,i;
   printf("Enter the number :");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      int temp=b;
      b=b+a;
      a=temp;
      if(n<=b){
        if(n==b){
            printf("The given number is in the Fibonacci series");
            break;
        }
        else{
            printf("The given number is not in the Fibonacci series");
        }
        break;
      }
      
   }
    return 0;
}