#include<stdio.h>
int main(){
   int a=-1,b=1;
   int n,i;
   printf("Enter the value n :");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      int temp=b;
      b=b+a;
      a=temp;
      printf("%d",b);
   }

    return 0;
}