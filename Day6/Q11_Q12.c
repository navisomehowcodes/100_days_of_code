// Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>

int main(){
    int num;

    printf("Enter a number ");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("%d is an even number \n",num);
    }
    else{
        printf("%d is an odd number \n", num);

    }


//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

   
    
    int n;

    printf("Enter number ");
    scanf("%d", &n);

    if(n!=0){
        if(n>0){
            printf("%d is a postive number", n);

        }
        else{
            printf("%d is a negative number", n);
        }

    }
    else{
        printf("%d is zero", num);
    }

     return 0;
}
