//WAP to check whether a given number is positive or non positive
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n>0){
        printf("The numbetr is positive");
    }
    else{
        printf("The number is non positive");
    }
}
//WAP to check whether a given number is divisible by 5 or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n%5==0){
        printf("The number is divisible by 5");
    }
    else{
        printf("The number is not divisible by 5");
    }
}
//WAP to check even or odd without using % operator
#include<stdio.h>
int main(){
    int x,r;
    printf("Enter the number\n");
    scanf("%d",&x);
    r=x/2;
    if(x==2*r){
        printf("The nuber is even");
    }
    else{
        printf("the number is odd");
    }
}
//WAP to check whether a given number is three digit number or not.
#include<stdio.h>
int main(){
    int n,count,r;
    printf("Enter the three digit number\n");
    scanf("%d",&n);
    r=n%10;
    while(r!=0){
       count ++;
    }
    if(count==3){
        printf("The number is a three digit number");
    }
    else{
        printf("The number is not a three digit number");
    }
    return 0;
} //Not working

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the two numbers\n");
    scanf("%d%d",&num1,&num2);
    if(num1>=num2){
        printf("%d is greater number\n",num1);
    }
    else{
        printf("%d is greater\n",num2);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int D,a,b,c;
    printf("Enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0){
        printf("Roots are real and distinct\n");
    }
    else if(D==0){
        printf("Roots are real and equal\n");
    }
    else{
        printf("Roots are imaginary\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("%d is the greatest number\n",a);
     }
     else if(b>=c){
        printf("%d is the greatest number\n",b);
     }
     else{
        printf("%d is the greatest number\n",c);
     }
     return 0;
}

#include<stdio.h>
int main(){
    int y;
    printf("Enter the year\n");
    scanf("%d",&y);
    if(y%4==0){
        printf("The year is a leap year\n");
    }
    else{
        printf("The  year is not a leap year\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    float s,c,p,l;
    printf("Enter the selling price and cost price\n");
    scanf("%f%f",&s,&c);
       if(s>c){
        p=((s-c)/c)*100;
        printf("The profit is %f",p);
    }
    else if(c>s){
         l=((c-s)/c)*100;
         printf("The loss is %f",l);
    }
    return 0;
} //not working.

#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    printf("Enter the marks of 5 subjects\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33){
        printf("You are passed");
    }
    else{
        printf("You are failed");
    }
    return 0;
}

// WAP to check upper case and lower case.
#include<stdio.h>
int main(){
    char n;
    printf("Enter the number\n");
    scanf("%c",&n);
    if(n>=65 && n<=90){
        printf("Upper case alphabet");
    }
    else if(n>=97 && n<=122){
        printf("The alphabet is lower case");
    }
    return 0;
}

//WAP to check divisible by 3 & 2.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%2==0 && n%3==0){
        printf("The number is divisible by 2 and 3");
    }
    else{
        printf("The number is not divisible by 2 & 3");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n%7==0 || n%3==0){
        printf("The number is divisible by 7 or 3\n");
    }
    else{
        printf("The number is not divisible by 7 or 3\n");
    }
    return 0;
}

//WAP to check number is positive,negative or zero.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n>0){
        printf("The number is positive");
    }
    else if(n<0){
        printf("The number is negative");
    }
    else{
        printf("The number is 0");
    }
    return 0;
}

//WAP to check triangle.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the length of sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b+c && b<a+c && c<a+b){
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is invalid");
    }
    return 0;
}

//Wap to print no. of days in month.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the month number\n");
    scanf("%d",&n);
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
     printf("Number of days in this month are 31");
    }
    else if(n==4||n==6||n==9||n==11){
        printf("Number of days in this month are 30");
    }
    else{
        printf("Number of days in this month are 28 or 29");
    }
    return 0;
}