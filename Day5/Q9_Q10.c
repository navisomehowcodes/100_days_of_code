// Q9 Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main(){
    // int P, R , T;
    // float SI, CI , A;
    // printf("Enter Principal");
    // scanf("%d", &P);
    // printf("Enter Rate");
    // scanf("%d", &R);
    // printf("Enter Time");
    // scanf("%d", &T);

    // SI= (P*R*T)/100;

    // A=P*pow((1+R/100.0),T);
    // CI= A-P;

    // printf("Simple interest =%.2f\n", SI);
    // printf("Compound interest =%.2f\n", CI);


// Q10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.

    int time, hours, mins, sec;
    printf("Enter time in seconds");
    scanf("%d ", &time);
    
    hours=time/3600;
    time=time%3600;
    mins=time/60;
    sec=time%60;

    printf("%02d:%02d:%02d", hours, mins ,sec);


    return 0;

}