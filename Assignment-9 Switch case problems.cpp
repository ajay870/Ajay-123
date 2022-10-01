//WAP which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main(){
    int i,choice;
    printf("\n1. January");
    printf("\n2.February");
    printf("\n3.March");
    printf("\n4.April");
    printf("\n5.may");
    printf("\n6.june");
    printf("\n7.July");
    printf("\n8.August");
    printf("\n9.September");
    printf("\n10.October");
    printf("\n11.November");
    printf("\n12.December");
    printf("\n13.Exit");
    printf("Enter choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Number of days is %d\n",31);
        break;
        case 2:
        printf("Number of days are %d\n",28 or 29);
        break;
        case 3:
        printf("Number of days are %d\n",31);
        break;
        case 4:
        printf("Number of days are %d\n",30);
        break;
        case 5:
        printf("Number of days are %d\n",31);
        break;
        case 6:
        printf("Number of days are %d\n",30);
        break;
        case 7:
        printf("Number of days are %d\n",31);
        break;
        case 8:
        printf("Number of days are %d\n",31);
        break;
        case 9:
        printf("Number of days are %d\n",30);
        break;
        case 10:
        printf("Number of days are %d\n",31);
        break;
        case 11:
        printf("Number of days are %d\n",30);
        break;
        case 12:
        printf("Number of days are %d\n",31);
        break;
        default:
        printf("Exit");
        break;
    }
}

//WAP to print addition,substraction,multiplication,division,even and odd.
#include<stdio.h>
int main(){
    int a,b,s,choice;
    while(1)
    {
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Even or Odd");
    printf("\n6.Exit");
    printf("Enter the choice\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
           printf("Enter the two numbers\n");
           scanf("%d%d",&a,&b);
           s=a+b;
           printf("Addition is %d\n",s);
           break;
    case 2:
           printf("Enter the two numbers\n");
           scanf("%d%d",&a,&b);
           s=a-b;
           printf("Substraction is %d\n",s);
           break;
    case 3:
           printf("Enter the two numbers \n");
           scanf("%d%d",&a,&b);
           s=a*b;
           printf("Multiplication is %d",s);
           break;
    case 4:
           printf("Enter the two numbers\n");
           scanf("%d%d",&a,&b);
           s=a/b;
           printf("Division is %d\n",s);
           break;
    case 5:
           printf("Enter the number\n");
           scanf("%d",&a);
           if(a%2==0)
           printf("The number is even\n");
           else
           printf("The number is odd\n");
           break;
    case 6:
    printf("\nExit");
    break;
    }
    }
}

//WAP which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
int main(){
    int choice;
    printf("\n1.Monday");
    printf("\n2.Tuesday");
    printf("\n3. Wednesday");
    printf("\n4.Thursday");
    printf("5.Friday");
    printf("\n6.Saturday");
    printf("\n7. Sunday");
    printf("Enter the choice");
    scanf("%d",&choice);
    switch(choice){
    case 1:
           printf("Have a good day sir/mam");
           break;
    case 2:
           printf("Have a nice day");
           break;
    case 3:
           printf("Enjoy your day");
           break;
    case 4:
           printf("Stay happy stay blessed");
           break;
    case 5:
           printf("Keep Learning keep growing");
           break;
    case 6:
           printf("Have a great weakend");
           break;
    case 7:
           printf("Sunday is the fun day ");
           break;
    default :
             printf("Exit");                           
    }
}

//WAP to check isosceles,right angled and equilateral triangle.
#include<stdio.h>
int main(){
    int a,b,c,choice;
    printf("\n1.Isosceles");
    printf("\n2.Right angled");
    printf("\n3.Equilateral");
    printf("\n4.Exit");
    printf("Enter the choice\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
           printf("Enter the sides of triangle\n");
           scanf("%d%d%d",&a,&b,&c);
           if(a==b || b==c ||c==a )
           printf("\nIsosceles triangle");
           else
           printf("\n Not a isosceles triangle");
           break;
    
    case 2:
           printf("Enter the sides of triangle\n");
           scanf("%d%d%d",&a,&b,&c);
           if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b )
           printf("\nRight angled triangle");
           else
           printf("\n Not a Right angled triangle");
           break;
    case 3:
           printf("Enter the sides of triangle\n");
           scanf("%d%d%d",&a,&b,&c);
           if(a==b && b==c)
           printf("\nEquilateral triangle");
           else
           printf("\n Not a Equilateral triangle");
           break;
    default :
           printf("Exit");  
    }
}

//WAP to convert if-else statement into switch case.
#include<stdio.h>
int main(){
       int choice;
       printf("Enter the choice\n");
       scanf("%d",&choice);
       switch(choice){
       case 1:
              printf("Good");
              break;
       case 2: 
              printf("Better");
              break;
       case 3:
              printf("Best");
              break;
       default :
                printf("Invalid");                            
       }
}

//WAP to check whether a year is leap year or not.
#include<stdio.h>
int main(){
       int n,choice;
       printf("Enter the year\n");
       scanf("%d",&n);
       printf("Enter the choice\n");
       scanf("%d",&choice);
       switch(choice){
       case 1:
              if(n%100==0 && n%400==0) 
              printf("This is a leap year");
              else
              printf("This is not a leap year");
              break;
       case 2:
              if(n%4==0)
              printf("This is not a leap year");
              else
              printf("This is not a leap year");
              break; 
       default :
                printf("Exit");             
       }
}

//WAP to calculate elctricity bill
#include<stdio.h>
int main(){
       int n,choice,bill;
       printf("Enter the  Number of units\n");
       scanf("%d",&n);
       printf("Enter the choice\n");
       scanf("%d",&choice);
       switch(choice){
       case 1:
              if(n<=50){
              bill=n*0.5;
              printf("%d",bill);
              }
              else
              printf("Chose other choice");
              break;
       case 2:  
              if(n>50 && n<=150){
              bill=50*0.5+(n-50)*0.75;
              printf("%d",bill);
              }
              else
              printf("Chose other choice");
              break;
       case 3:
              if(n>150 && n<=250){
              bill=50*0.5+100*0.75+(n-150)*1.20;
              printf("%d",bill);
              }
              else
              printf("Chose other choice");
              break;
       case 4:
              if(n>250){
              bill=50*0.5+100*0.75+100*1.20+(n-250)*1.50;
              bill=bill+(bill*20)/100;
              printf("%d",bill);
              }
              else
              printf("Chose other choice");
              break;    
       default :
                printf("Exit");       
              }                   
       }

//WAp to convert positive number into negative number and negative number into positive number.
#include<stdio.h>
int main(){
       int n,choice;
       printf("Enter the number\n");
       scanf("%d",&n);
       printf("Enter the choice\n");
       scanf("%d",&choice);
       switch(choice){
       case 1:     
             if(n>0)
             printf("%d",-n);
             else
             printf("Already a negative number");
             break;
       case 2:
              if(n<0)
              printf("%d",-n);
              else
              printf("Already a positive number");
              break;
       default :
                printf("Exit");             
}       
}

//WAP to find all roots of a quadratic equation.
#include<stdio.h>
int main(){
       int a,b,c,choice;
       printf("Enter the value of a,b,c\n");
       scanf("%d%d%d",&a,&b,&c);
       printf("Enter the choice\n");
       scanf("%d",choice);
       switch(choice){
       case 1:
              if((b*b-4*a*c)>0)
              printf("Roots are real\n");
              else
              printf("Enter other choice");
              break;
       case 2:
              if((b*b-4*a*c)==0)
              printf("Roots are Equal\n");
              else
              printf("Enter other choice");
              break;
       case 3:
              if((b*b-4*a*c)<0)
              printf("Roots are real\n");
              else
              printf("Enter other choice");
              break;
       default :
                printf("Exit");
                }
}