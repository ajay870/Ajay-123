//WAP to print MySirG 5 times on the screen.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the vaslue 0f n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("MySirG");
    }
    return 0;
} 

//WAP to print first 10 natural numbers.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}
//WAP to print first 10 natural numbers in reverse order.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=10;i>=n;i--){
        printf("%d\n",i);
    }
    return 0;
}

//WAP to print the first 10 odd natural numbers.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=2*n;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}

//WAP to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=20;i>=n;i--){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}

//WAP to print first 10 even natural numbers.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}

//WAP to print squares of 10 natural numbers.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
        printf("%d\n",i*i);
     }
     return 0;
}
//WAP to print cubes ofg the first 10 natural numbers.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",i*i*i);
    }
    return 0;
}

//WAP to print the table of 5.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
    return 0;
}
// WAP to print table
#include<stdio.h>
int main(){
    int n,j,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
     for(j=1;j<=10;j++){
        printf("%d\n",j*i);
    }
    }
    return 0;
}