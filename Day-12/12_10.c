/*
Problem Statement

Jim is hosting a party and wants to set up different lighting effects to create the perfect atmosphere. He has three types of lighting modes available: disco lights, strobe lights and laser lights. Each lighting mode has a different intensity adjustment factor.

Conditions for intensity adjustment:
1.	For Disco Lights (Mode 1): The intensity level is multiplied by 1.5.
2.	For Strobe Lights (Mode 2): The intensity level is multiplied by 2.0.
3.	For Laser Lights (Mode 3): The intensity level is multiplied by 1.8.

Write a program to help Jim adjust the intensity of the lighting based on the selected mode.
Input format :
The first line of input consists of an integer N, representing the lighting mode.
The second line consists of a floating-point value M, representing the initial intensity level.
Output format :
The output prints "Intensity: X" where X is a floating point value rounded off to two decimal places, representing the adjusted intensity level.
If invalid modes other than 1, 2, or 3 are given, print "Invalid".

Refer to the sample output for formatting specifications.
Code constraints :
In this scenario, the test cases fall under the following constraints:
0.0 ≤ M ≤ 60.0
Sample test cases :
Input 1 :
1
10.0
Output 1 :
Intensity: 15.00
Input 2 :
2
8.0
Output 2 :
Intensity: 16.00
Input 3 :
3
12.5
Output 3 :
Intensity: 22.50
Input 4 :
5
60.0
Output 4 :
Invalid

*/

#include<stdio.h>

int main(){
    int m;
    float i, ai;
    scanf("%d %f", &m, &i);
    if (m==1){
        ai=i*1.5;
    }
    else if (m==2){
        ai=i*2.0;
    }
    else if (m==3){
        ai=i*1.8;
    }
    else{
        printf("Invalid\n");
        return 0;
    }
    printf("Intensity: %.2f\n",ai);
    return 0;
}
