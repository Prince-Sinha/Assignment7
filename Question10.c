#include<stdio.h>
#include<math.h>
int main(){
    int i,n,j,a,p,c;
    int count;
    printf("The Amstrong number under 1000 are :");
    for(a=1;a<=1000;a++){
        int x=a;
        count=0;
        int sum=0;
       for(i=0;x>=1;i++){
        x=x/10;
        count++;}
     int b=a,c=0;
       for(j=0;b>=1;j++){
        c=b%10;
       sum=sum+pow(c,count);
        b=b/10;
    }
    if(sum==a){
        printf("%d\t",a);
    }
}
    return 0;
}
