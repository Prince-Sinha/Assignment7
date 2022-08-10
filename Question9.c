#include<stdio.h>
#include<math.h>
int main(){
    int i,n,sum=0,fac=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a=n,count=0;
    for(i=0;a>=1;i++){
        a=a/10;
        count++;
    }
    int b=n,j,c;
    for(j=0;b>=1;j++){
        c=b%10;
        sum=sum+pow(c,count);;
        b=b/10;
    }
    if(sum==n){
        printf("The given number is Amstrong number");
    }
    else{
            printf("The given number is not Amstrong number");
    }
}