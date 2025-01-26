#include <stdio.h>
// Taking input for a user's name and display it back
int main(){
    char name[100]; // Defining variable
    printf("Enter your name :");
    scanf("%s",&name); // Getting user input
    printf("The name of the user is %s",name); // Printing the name
    return 0;
}