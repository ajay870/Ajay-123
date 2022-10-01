//WAP to find Nth term of fibonacci series.
#include<stdio.h>
int main(){
    int n,a=-1,b=1,c;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("The last term of fibonacci series is %d",c);
    return 0;
}

//WAP to print first N term of a fibonacci series.
#include<stdio.h>
int main(){
    int n,a=-1,b=1,i,c;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=a+b;
        printf("The fibonacci series is %d\n",c);
        a=b;
        b=c;
    }
    return 0;
}

// WAP to check whether a given number is there in the fibonacci series or not.
#include<stdio.h>
int main(){
    int n,a=-1,b=1,c,i,x;
    printf("Enter the number of terms and the number you want to search\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=a+b;
        if(x==c){
            printf("The number is present in the fibonacci series %d\n",x);
        }
        a=b;
        b=c;
        printf("%d\n",c);
    }
    return 0;
}    // Not working

// WAP to calculate HCF of two numbers.
#include<stdio.h>
int main(){
    int a,b,H;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b; H>0;H--){
        if(a%H==0 && b%H==0){
            break;
        }
        }
        printf("HCF is %d\n",H);
     return 0;
}
//WAP to check whether two given numbers are co-prime or not.
#include<stdio.h>
int main(){
    int x,i;
    printf("Enter the number\n");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++){
        if(x%i==0)
        break;
    }
        if(i==x){
            printf("Number is  prime %d\n",x);   
        }
        else{
            printf("Number is co prime %d\n",x);
        }
    return 0;
}

//WAP to print all prime numbers under 100.
#include<stdio.h>
int main(){
    int x,i,j;
    printf("Enter the number\n");
    scanf("%d",&x);
    for(j=1;j<=x;j++){
    for(i=2;i<=x-1;i++){
        if(j%i==0)
        break;
     if(j==i){
        printf("The prime no is %d\n",j)
     }
    }
    return 0;
}    //Not working.

//WAP to check whether a given number is armstrong number or not.
#include<stdio.h>
int main(){
    int n,x,r,s=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    x=n;
    while(x!=0){
        r=x%10;
        s=s+r*r*r;
        x=x/10;
    }
    if(s==n){
    printf("The number is armstrong\n");
    }
    else{
        printf("The number is not a armstrong number\n");
    }
    return 0;
}

//WAP to print armstrong numbers under 1000.
#include<stdio.h>
int main(){
    int n,x,r,s=0,i;
printf("Enter the value of n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    while(x!=0){
        r=x%10;
        s=s+r*r*r;
        x=x/10;
    }
    if(s==i){
        printf("%d\n",i);
    }
}
return 0;
}