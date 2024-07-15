/*
 1.Include Necessary Header
 2.Declare variables and ge the input
 3. Convert degree to Radians
 4.Compute the value of sin(x) using talyor series
 5. Print this above output
 6. Compute and print the value generated but the inbuilt function
 sin(x) = x - (x-3)/3! + (x-5)/5! - (x-7)/7! + (x-9)/9! - .....
 */




#include<stdio.h>
#include<math.h>

int main() {
    float degree , x ;
    float numerator , denominator ,  sine=0 ;
    int n , i;

    printf("Enter the angle value : \n");
    scanf("%f", &degree);
    printf("ENter the number of terms : \n");
    scanf("%d", &n);

    x = degree * 3.142 / 180 ;

    numerator = x;

    denominator = 1.0 ;
    sine = 0; // sin and sine are different
    for(i=1;i<=n;i++){

        sine = sine + (numerator / denominator);
        numerator = - numerator * x * x;
        denominator = denominator * (2*i) * (2*i+1);

    }

    printf("Calculated value of sin() is %f \n", sine);
    printf("Computed value of sin(%f) using Builtin function is %f \n",degree,sin(x));


    return 0;
}