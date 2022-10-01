//Write a function to calculate the area of circle.(Take Something Return Something).
#include<stdio.h>
#include<conio.h>
float area(float);
int main(){
    float r,a;
    printf("Enter the radius\n");
    scanf("%f",&r);
    a=area(r);
    printf("Area is %f\n",a);
    return 0;
}
float area(float r)
{
    float a;
    a=3.14*r*r;
   // printf("area is %f\n",a);
    return a;
}

//Write a function to calculate simple interest.(Take something return something.)
#include<stdio.h>
#include<conio.h>
float simple(float,float,float);
int main(){
    float p,r,n,s;
    printf("Enter the Money,Rate,Time\n");
    scanf("%d",&p,&r,&n);
    s=simple(p,r,n);
    printf("simple interest is %f\n",s);
    return 0;
}
float simple(float p,float r, float n)
{
    float s;
    s=(p*r*n)/100;
    return s;
}

//WAF to check whether a given number is even or odd.Return 1 if the number is even.
//Otherwise return 0.(Take something return something)
#include<stdio.h>
#include<conio.h>
int Even(int);
int main(){
    int n,num;
    printf("Enter the number\n");
    scanf("%d",&n);
    num=Even(n);
    //printf("Number is even or odd\n");
    return 0;
}
int Even(int n)
{
    if(n%2==0)
    printf("Number is Even ");
    else
    printf("Number is odd");
    return 0;
}

//WAF to print first N natural number(Take something return nothing)
#include<stdio.h>
#include<conio.h>
void printnatural(int);
int main(){
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    printnatural(n);
    return 0;
}
void printnatural(int n)
{
    int i;
    for(i=0;i<=n;i++)
     printf("%d\n",i);
}

//WAF to print N odd natural numbers.(Take something return nothing)
#include<stdio.h>
#include<conio.h>
void odd(int);
int main(){
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    odd(n);
    return 0;
}
void odd(int n)
{
    int i;
    for(i=1;i<=(2*n);i++,i++)
    printf("%d\n",i);
}

//WAF to calculate the factorial of a number.(Take something Return something)
#include<stdio.h>
#include<conio.h> 
int fact(int);
int main(){
    int n,factorial=1,N;
    printf("Enter the number\n");
    scanf("%d",&n);
    N=fact(n);
    return 0;
}
int fact(int n)
{
    int factorial=1,i;
    for(i=1;i<=n;i++)
    if(n>0){
        factorial=factorial*i;
    }
    printf("The factorial is %d\n",factorial);
    return 0;
}

//WAF to calculate the number of combinations one can make from n items and r selected at a time.(Take something Return something)
#include<stdio.h>
#include<conio.h>
int combination(int,int);
int fact(int);
int main(){
    int n,r,comb,N;
    printf("Enter the numbers\n");
    scanf("%d%d",&n,&r);
    N=combination(n,r);
    return 0;
}
int combination(int n,int r)
{
    int comb;
    comb=fact(n)/(fact(r)*fact(n-r));
    printf("%d\n",comb);
    return 0;
}
int fact(int n)
{
    int factorial=1,i;
    for(i=1;i<=n;i++)
    if(n>0){
        factorial=factorial*i;
    }
    printf("The factorial is %d\n",factorial);
    return 0;
}

//WAF to calculate the number of arrangements(permutations) one can make from n items and r selected at a time.
//take something return something.

//WAF to check whether a given number contains a given digit or not .(take something return something).
#include<stdio.h>
#include<conio.h>
int digit(int,int);
int main(){
    int n,d,r;
    printf("Enter the number and digit\n");
    scanf("%d%d",&n,&d);
    n=digit(n,d);
    return 0;
}
int digit(int n,int d)
{
  int r;
  r=n%10;
  while(r!=0){
    //r=n%10;
    n=n/10;
    if(r==d){
    printf("The digit is present in the number\n");
    break;}
    else{  
    printf("The digit is not present in the number\n");
    break;}
  }
  return 0;
}

//WAF to print all prime factors of a given number.For example,if the number is 36 then your result should be 2,2,3,3
//Take Something return something.
#include<stdio.h>
#include<conio.h>
int factor(int);
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    n=factor(n);
    return 0;
}
int factor(int n)
{
    int i=2;
    while(n!=1){
        while(n%i==0){
         printf("%d\n",i);
         n=n/i;
    }
     i++;
    }   
    return 0;
}