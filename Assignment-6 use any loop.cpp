//WAP to calculate sum of first N natural numbers.
#include<stdio.h>
int main(){
    int N,s=0,i;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        s=s+i;
     }
    printf("%d\n",s);
    return 0;    
}

//WAP to calculate sum of first N even natural numbers.
#include<stdio.h>
int main(){
    int N,i,s=0;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        if(i%2==0){             // for odd number-if(i%2!=0)
            s=s+i;
    }
    }
    printf("%d\n",s);
    return 0;
    }

    //WAP to calculate sum of squares of first N natural numbers.
    #include<stdio.h>
    int main(){
        int N,i,s=0;
        printf("Enter the value of N\n");
        scanf("%d",&N);
        for(i=1;i<=N;i++){
            s=s+i*i;
        }
        printf("%d\n",s);
        return 0;
    }
    //WAP to calculate sum of cubes of first N natural numbers.
    #include<stdio.h>
    int main(){
        int N,i,s=0;
        printf("Enter the value of N\n");
        scanf("%d\n",&N);
        for(i=1;i<=N;i++){
             s=s+(i*i*i);
        }
        printf("%d\n",s);
        return 0;
    }
    //WAP to print factorial of a number.
    #include<stdio.h>
    int main(){
        int n,i,factorial=1;
        printf("Enter the value of n\n");
        scanf("%d\n",&n);
        for(i=1;i<=n;i++){
            if(n>0){
                factorial=factorial*1;
            }
        }
            printf("%d\n",factorial);
            return 0;
    }
