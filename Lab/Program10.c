#include<stdio.h>

struct student {
    char name[25];
    int marks ;
};

void main() {

    int i,n;
    struct student st[10];
    float total = 0,avgmarks;
    printf(" \n Enter the number of students in class (<=10) :");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("\n Enter student %d name :", i+1);
        scanf("%s", st[i].name);
        printf("\n Enter the student %d marks : ", i+1);
        scanf("%d", &st[i].marks);
    }

    // totalling of marks
    for (i=0;i<n;i++){
        total = total + st[i].marks;
    }

    avgmarks = total /n;


    printf("\n Average marks = %.2f \n ", avgmarks);
    for(i=0;i<n;i++){
        if(st[i].marks >= avgmarks)
        {
            printf("\n student %d having name %s marks = %d above average  \n ",i+1,st[i].name,st[i].marks);
        }
        else {
            printf("\n Student %d having name %s marks = %d below average \n", i+1,st[i].name,st[i].marks);
        }
    }
}

//#include <stdio.h>
//
//struct student {
//    char name[25];
//    int marks;
//} st[10];
//
//int main() {
//    int i, n;
//    float total = 0, avgmarks;
//    printf("\nEnter the number of students in class (<=10): ");
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        printf("\nEnter student %d name: ", i + 1);
//        scanf("%s", st[i].name);
//        printf("\nEnter the student %d marks: ", i + 1);
//        scanf("%d", &st[i].marks);
//    }
//    for (i = 0; i < n; i++) {
//        total += st[i].marks;
//    }
//    avgmarks = total / n;
//    printf("\nAverage marks = %.2f", avgmarks);
//    for (i = 0; i < n; i++) {
//        if (st[i].marks >= avgmarks) {
//            printf("\nStudent %d having name %s marks = %d above average", i + 1, st[i].name, st[i].marks);
//        } else {
//            printf("\nStudent %d having name %s marks = %d below average", i + 1, st[i].name, st[i].marks);
//        }
//    }
//    return 0;
//}
