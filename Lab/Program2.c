#include<stdio.h>
#include<math.h>

int main() {
    double a,b,c;
    double discriminant;
    double root1,root2;
    double realPart,imagPart;

    printf("Enter the coefficients a,b&c : ");
    scanf("%lf %lf %lf", &a,&b,&c);

    discriminant = b*b-4*a*c;
    // condition for real and different roots
    if(discriminant > 0){
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b-sqrt(discriminant))/ (2*a);
        printf("Root1 = %.2lf and root2 - %.2lf the roots are real and different \n",root1,root2);
    }
    // condition for real and equal roots
    else if(discriminant == 0){
        root1=root2=-b/(2*a);
        printf("Root1 = Root2 = %.2lf \n the roots are real and same ", root1);
    }
    // condition if roots are not real
    else {
        realPart = -b/(2*a);
        imagPart = sqrt(-discriminant)/(2*a);
        printf("Root1 = %.2lf + %.2lf i and root2 = %.2lf-%.2lf i \n the roots are complex and different \n",realPart,imagPart,realPart,imagPart);
    }
    return 0;
}