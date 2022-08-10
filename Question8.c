#include<stdio.h>
int main(){
   int a,b,i,j,count,min,max;
   printf("Enter the number: ");
   scanf("%d",&b);
   i=b+1;
   while(i>b){
          count=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0 || i==2){
             printf("%d\t",i);
             break;
            }
            i++;
   }
   
    return 0;
}