/*
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
*/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int max=0;
    int arr[4]={a,b,c,d};
    for (int i=0; i<4; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
