#include<stdio.h>
int main(){
   int i,j,count=0;
   printf("The prime number under 100 are :\n");
   for(i=2;i<=100;i++){
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