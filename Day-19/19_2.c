/*
Farmer Ramesh is calculating the subsidy he will receive from the government for fertilizers and seeds. The rules are:
Rules:
Subsidy Percentages:
•	For fertilizers: Subsidy is 30% of the total fertilizer cost.
•	For seeds: Subsidy is 20% of the total seed cost.
Bonus Subsidy:
•	If the total cost of fertilizers and seeds exceeds Rs 50,000, add a bonus subsidy of Rs 5,000.
Seed Subsidy Reduction:
•	If the fertilizer subsidy exceeds Rs 15,000, apply a 10% reduction on the seed subsidy.
Special Discount:
•	If the total cost of fertilizers and seeds exceeds Rs 1,50,000, reduce the total subsidy by Rs 2,000.

Formula:
Total Subsidy = (Fertilizer Cost × 30%) + (Seed Cost × 20%) + Bonus Subsidy (if applicable) − Seed Subsidy Reduction (if applicable) − Special Discount (if applicable)

Input format :
The first input line contains a double l, representing the Fertilizer Cost in Rs.
The second input line contains a double m, representing the Seed Cost in Rs.

Output format :
The output prints the Total Subsidy in Rs rounded to two decimal places.

Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:
1 ≤ Fertilizer Cost ≤ 5,00,000
1 ≤ Seed Cost ≤ 5,00,000

Sample test cases :

Input 1 :
40000.0
20000.0
Output 1 :
21000.00

Input 2 :
60000.0
80000.0
Output 2 :
37400.00
*/


#include <stdio.h>

int main(){
    double fertilizer, seed, total, bonus=0, seed_sub, spl_discount=0;
    scanf("%lf %lf", &fertilizer, &seed);
    if ((seed + fertilizer) > 50000){
        bonus = 5000;
    }
    if (fertilizer*0.3>15000){
        seed_sub = seed*0.2*0.1;
    }
    if (fertilizer + seed > 150000){
        spl_discount=2000;
    }
    total = fertilizer*0.30 + seed*0.20 + bonus - seed_sub - spl_discount;
    printf("%.2f", total);
    return 0;
}
