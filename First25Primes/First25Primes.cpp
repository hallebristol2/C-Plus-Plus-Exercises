// Positive numbers with no fractional part
// Greater than 1 and less than 100
// Factors must be 1 and itself

#include <iostream>

int num = 2;

int main() {
    /*
        while num ranges from 2 to 100
        divide it by every number from two to one less than itself
        if any of the results are modulo 0, proceed to the next num
        if none of the results are nmodulo 0, print the number
        if it gets to the number itself without a modulo 0 then it is prime.
    */
   while(num < 101) {
        int divisor = 2;
        while(divisor <= num) {
            if(num % divisor == 0 && num != divisor) {break;}
            else if(num == divisor) {printf("%d\n", num); break;}
            else ++divisor;
        }
        ++num;
    }
}