/*
Problem Statement

Yasmin is a student studying various animals and their unique characteristics. She wants to develop a program to analyze different attributes of animals such as deer, bears, and birds based on specific inputs.

Conditions:
1.	For Deer (Mode 'D' or 'd'): Distance = speed of sound * time taken, where the speed of sound in air is 343 meters per second.
2.	For Bear (Mode 'B' or 'b'): Weight = footprint size * average weight, where the average weight per square inch for a bear is 5.0 pounds.
3.	For Bird (Mode 'F' or 'f'): Altitude = flying pattern * distance covered (in meters).

Write a program to help Yasmin analyze the characteristics of animals based on the given inputs using switch and break statements.
Input format :
The first line of input consists of a character, representing the type of animal 'D/d' for deer, 'B/b' for bear, 'F/f' for bird.
If the choice is 'D' or 'd':
1.	The second line of input consists of a floating-point value T, representing the time taken from the deer's location to the observer.
If the choice is 'B' or 'b':
1.	The second line of input consists of a floating-point value S, representing the size of the bear's footprint in square inches.
If the choice is 'F' or 'f':
1.	The second line of input consists of a floating-point value P, representing the bird's flying pattern.
2.	The third line consists of a floating-point value D, representing the distance covered by the bird in meters.
Output format :
The output prints one of the following:
If the choice is 'D' or 'd':
1.	The output prints "Distance: X m" where X is a floating point value rounded off to two decimal places, representing the calculated distance travelled by the sound wave in meters.
If the choice is 'B' or 'b':
1.	The output prints "Weight: Y lb" where Y is a floating point value rounded off to two decimal places, representing the estimated weight of the bear in pounds.
If the choice is 'F' or 'f':
1.	The output prints "Altitude: Z m" where Z is a floating point value rounded off to two decimal places, representing the calculated altitude of the bird's flight in meters.
If the given choice is invalid, print "Invalid".

Refer to the sample output for formatting specifications.
Code constraints :
In this scenario, the test cases fall under the following constraints:
1.0 ≤ T ≤ 10.0
1.0 ≤ S ≤ 5.0
1.0 ≤ P ≤ 50.0
1.0 ≤ D ≤ 50.0
Sample test cases :
Input 1 :
d
2.5
Output 1 :
Distance: 857.50 m
Input 2 :
B
4.5
Output 2 :
Weight: 22.50 lb
Input 3 :
F
10.0
15.0
Output 3 :
Altitude: 150.00 m
Input 4 :
G
Output 4 :
Invalid
*/

#include <stdio.h>

int main(){
    char choice;
    float times, footprintSize, flyingPattern, distance, result;
    const int speed=343;
    scanf("%c",&choice);
    switch(choice){
        case 'D':
        case 'd':
            scanf("%f",&times);
            result = speed*times;
            printf("Distance: %.2f m\n",result);
            break;
        case 'B':
        case 'b':
            scanf("%f",&footprintSize);
            result = 5.0*footprintSize;
            printf("Weight: %.2f lb\n",result);
            break;
        case 'F':
        case 'f':
            scanf("%f",&flyingPattern);
            scanf("%f",&distance);
            result = flyingPattern*distance;
            printf("Altitude: %.2f m\n",result);
            break;
        default:
            printf("Invalid\n");
    }
    return 0;
}
