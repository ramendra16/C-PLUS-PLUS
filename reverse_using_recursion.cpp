#include <iostream>
using namespace std;

int reverseNumber(int num, int reversedNum = 0) {
    if (num == 0) {
        return reversedNum;
    }

    int lastDigit = num % 10;

    reversedNum = reversedNum * 10 + lastDigit;

    num /= 10;

    return reverseNumber(num, reversedNum);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversed = reverseNumber(num);
    cout << "Reversed number: " << reversed << std::endl;

    return 0;
}
