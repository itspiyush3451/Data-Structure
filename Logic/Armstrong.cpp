// Armstrong number : sum of cubes of the digits of the number should be equal to the number itself
//  i.e 1634=1^3+6^3+3^3+4^3;

#include<bits/stdc++.h>
#include<math.h>
 using namespace std;

 
bool isArmstrong(int num) {
    int mod, sum = 0, x = num, cnt = 0;

    // Step 1: Count the number of digits
    while (x > 0) {
        x /= 10;
        ++cnt;
    }

    x = num; // Reset x to original number for the next loop

    // Step 2: Calculate the sum of powers
    while (num > 0) {
        mod = num % 10; // Get the last digit
        sum += pow(mod, cnt); // Add the power of the digit to sum
        num /= 10; // Remove the last digit
    }

    // Return true if sum equals original number
    return sum == x; 
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}