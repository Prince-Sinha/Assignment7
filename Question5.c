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
  if(n==1){
    printf("The %d & %d are coprime numbers",a,b);
  }
  else{
    printf("The %d & %d are not coprime numbers",a,b);

  }

    return 0;
}