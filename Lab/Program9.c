#include<stdio.h>
#include<string.h>

int length(char str[100]);
int compare(char s1[100], char s2[100]);
void concat(char s1[100], char s2[100]);

int main() {
    int option, result;
    char str[100],s1[100],s2[100];
    do{
        printf("1.String Length \n");
        printf("2.String Comaparision \n");
        printf("3.String concatenation \n");
        printf("4.Quit \n");
        scanf("%d", &option);
        switch(option)
        {
            case 1 :
                printf("Enter string \n");
                scanf("%s",str);
                result = length(str);
                printf("the length of string = %d \n",result);
                break;
            case 2 :
                printf("Enter the 1st string: \n");
                scanf("%s",s1);
                printf("Enter the 2nd String \n");
                scanf("%s",s2);
                result = compare(s1,s2);
                if(result == 0){
                    printf("Strings are Equal \n");
                    break;
                }
                else {
                    printf("Strings are not equal \n");
                    break;
                }
            case 3:
                printf("Enter two strings :\n");
                scanf("%s %s",s1,s2);
                concat(s1,s2);
                printf("result = %s \n", s1);
                break;
        }
    } while( option <= 3);{
        return 0;
    }
}

int length (char str[100]){
    int i=0;
    while(str[i]!= '\0'){
        i++;
    }
    return i;
}

int compare (char s1[100], char s2[100]){

    int i = 0;
    while(s1[i] != '\0'){
        if(s1[i]!= s2[i]){
            return 1;

        } else {
            i++;
        }
    }
}

void concat(char s1[100], char s2[100]){
    int i,j;
    i=0;
    while(s1[i] != '\0'){
        i++;

    }
    for(j=0;s2[j] != '\0';i++,j++){
        s1[i]=s2[j];
    }
    s1[i] = '\0';
}