#include<stdio.h>
int main(){
   int a,b,i,j,count,min,max;
   printf("Enter the two number: ");
   scanf("%d%d",&a,&b);
   if(a>=b){
    max=a;
    min=b;
   }
   else{
    min=a;
    max=b;
   }
   for(i=min+1;i<max;i++){
          count=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0 || i==2){
             printf("%d\t",i);
            }
   }
   
    return 0;
}