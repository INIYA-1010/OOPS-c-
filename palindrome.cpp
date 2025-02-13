#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int num) {
    return log10(num) + 1;
}
bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int numberOfDigits = countDigits(num);
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numberOfDigits);
        num /= 10;
    }
    return (sum == originalNum);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}
