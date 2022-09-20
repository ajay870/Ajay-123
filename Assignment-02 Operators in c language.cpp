//WAP to print unit digit of a given number 
//OR WAP to print a given number without its last digit.
#include<stdio.h>
int main(){
    int i,r;
    printf("Enter the number");
    scanf("%d",&i);
    r=i%10;
    printf("the unit digit is %d",r);
    return 0;
}
//WAP to swap values of two int variables
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The swap values are %d and %d",a,b);
    return 0;
}
 //WAP to input a three digit number and display the sum of the digits.
 #include<stdio.h>
 int main(){
    int n,r;
    printf("Enter the three digit number");
    scanf("%d",&n);
    r=n%10;
    s=
 }


 //WAP which takes a character as an input and displays its ASCII code.
 #include<stdio.h>
 int main(){
    int n;
    char c;
    printf("Enter the character");
    scanf("%c",&c);
    printf("The ASCII value of %C is %d",c,n);
    return 0;
 }   //its not working

 //WAP to print the position of first 1 in LSB.
 //WAP to check whether a given number is even or odd using bitwise operators.
 #include<stdio.h>
 int main(){
    int n;
    printf("Enter the number");
    scanf("%d",n);
    if(n%2==0){
        printf("even number");
    }
    else{
        printf("Odd number");
    }
    return 0;
 }

 //WAP to print size of an int, a float, a char and a double type variable.
 #include<stdio.h>
 int main(){
    printf("Enter the integer number ",sizeof(int));
    printf("Enter the float number",sizeof(float));
    printf("Enter the character",sizeof(char));
    printf("Enter a double number",sizeof(double));
    return 0;
 }
// WAP to make the last digit of a number stored in a variable as zero.
#include<stdio.h>
int main(){
    int n,r;
    printf("Enter the number\n");
    scanf("%d",&n);
    r=n/10;
    n=r*10;
    printf("the updated value is %d",n);
    return 0;
}
#include<stdio.h>
int main(){
    int n,d;
    printf("Enter the number and a digit");
    scanf("%d %d",&n,&d);
    n=n*10+d;
    printf("The resulting number is %d",n);
    return 0;
}
//WAP to convert INR to USD.
#include<stdio.h>
int main(){
    float r,d;
    printf("Enter the ammount in INR");
    scanf("%f",&r);
    d=r/76.23;
    printf("The ammount in USD is %f",d);
    return 0;
}
//WAP to rotate digits by one position of three digit no.
#include<stdio.h>
int main(){
    int  n,r,q;
    printf("Enter the three digit number\n");
    scanf("%d",&n);
    q=n/10;
    r=n%10;
    n=r*100+q;
    printf("The updated number is %d",n);
} 