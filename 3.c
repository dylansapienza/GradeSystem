#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int flag;
int grade1;
int grade2;
double grade3;
double grade12avg;
double close1;
double close2;
int z;

int main()
{
    printf("Enter Grade 1: ");
    scanf("%d", &grade1);
    printf("Enter Grade 2: ");
    scanf("%d", &grade2);
    if(grade1>grade2){
        flag = 1;
    }
    else{
        flag = 0;
    }
    grade12avg = (grade1+grade2)/2;
    z = grade1-grade2;
    z = z*z;
    z = sqrt(z);
    printf("\nZ Value is = %d\n",z);
    if(z>10){
        printf("Enter Grade 3: ");
        scanf("%lf", &grade3);
        if(grade3==grade12avg){
            printf("Final Grade: %lf", grade12avg);
        }
        else if(flag==1){
            if(grade3<grade2){
                printf("Final Grade: %d Mini",grade2);
            }
            else{
            close1 = grade3-grade1;
            close1 = close1*close1;
            close1 = sqrt(close1);
            close2 = grade3-grade2;
            close2 = close2*close2;
            close2 = sqrt(close2);
            if(close1>close2){
                grade12avg=(grade2+grade3)/2;
            }
            else{
                grade12avg=(grade1+grade3)/2;
            }
            printf("Final Grade: %lf", grade12avg);
            }
        }

        else{
            close1 = grade3-grade1;
            close1 = close1*close1;
            close1 = sqrt(close1);
            close2 = grade3-grade2;
            close2 = close2*close2;
            close2 = sqrt(close2);
            if(close1>close2){
                grade12avg=(grade2+grade3)/2;
            }
            else{
                grade12avg=(grade1+grade3)/2;
            }
            printf("Final Grade: %lf", grade12avg);
            }

    }
    else{
        printf("Final Grade: %lf", grade12avg);
    }


    return 0;
}
