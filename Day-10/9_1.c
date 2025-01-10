// Program to count the number of words in a string

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int count = 0;
    int length;
    printf("Enter string: ");
    scanf("\n");
    scanf("%[^\n]%*c", str);
    length = strlen(str);
    str[length]='\0';
    for (int i=0; i<=length; i++){
        if (str[i] == ' ' || str[i]== '\n' ||str[i] == '\0'){
            count++;
        }
    }
    printf("count = %d",count);
    return 0;
}