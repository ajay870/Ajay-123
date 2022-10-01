   //*
   //* *
   //* * *
   //* * * *
   //* * * * *
   #include<stdio.h>
   int main(){
    int i,j,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        for(j=1;j<=n;++j){
            if(i>=j){
            printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
   }
   
//WAP to print triangle.
   #include<stdio.h>
   int main(){
    int i,j,n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(i=n;i>=1;--i){
        for(j=n;j>=1;--j){
            if(i>=j){
            printf("*");
            }
        }
        printf("\n ");
    }
    return 0;
   }

   #include<stdio.h>
   int main(){
    int i,j,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i<=j){
                printf(" * ");
            }
        }
        printf("\n");
    }
    return 0;
   }
//WAP to print MySirG in heart.
   #include<stdio.h>
   int main(){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<19;j++){
            if(((2-i<=j)&&(j<=6+i))|| ((12-i<=j)&&(16+i>=j))){
            printf(" * ");
            }
         else{
            printf(" ");}
        }
        printf("\n");
    }
    for(i=0;i<10;i++){
        for(j=0;j<19;j++){
            if((i==0)&&(j>=6)&&(j<=11))
            continue;
            if((i<=j)&&(j<=18-i)){
                printf(" * ");
            }
            else{
                printf(" ");
            }
        }
    }
    return 0;
   }
// WAP to print triangle.
#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<4;i++){
    for(j=0;j<9;j++){
        if(j==4-i|| j==4+i || i==4)
        printf(" * ");
        else
            printf(" ");
        }
    printf("\n");
}
return 0;
}

//WAP to print star pattern 
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0 || i==j || i==n-j)
            printf(" * ");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//WAP to print star pattern.
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0|| j==i || i==4)
            printf(" * ");
            else
            printf(" ");
        }
        printf(" \n ");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j>=4-i)
            printf(" * ");
            else
            printf(" ");
        }
    }
    return 0;
}

#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(j>=5-i && j<=3+i)
            printf(" * ");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
