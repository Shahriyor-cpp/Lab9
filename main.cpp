#include <iostream>
using namespace std;

// #1

// int multiply(int a, int b) {
//     if (b == 0) {
//         return 0;
//     }
//     return a+multiply(a, b-1);
//     return -multiply(a,-b);
// }
// int main() {
//     int a, b;
//     cout << "Enter 2 numbers: "<< endl;
//     cin >> a >> b;
//     cout << multiply(a,b) << endl;
// }

// #2

// int factorial(int n) {
//     if(n <= 1) {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << factorial(n) << endl;
//     return 0;
// }

// #3

// int fibonacci(int n) {
//     if (n == 1) {
//         return 1;
//     }
//     if (n == 0) {
//         return 0;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << fibonacci(n) << endl;
// }

// #4

// int sum(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return n + sum(n - 1);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << sum(n) << endl;
//     return 0;
// }

// #5

// void nums(int n) {
//     if(n == 0) {
//         cout << endl;
//         return;
//     }
//     cout<<n; nums(n-1);
// }
// int main() {
//     int n;
//     cin >> n;
//     nums(n);
// }

// #6
//
// int countDigits(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return 1 + countDigits(n / 10);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << countDigits(n) << endl;
// }

// #7

// int sumofDigits(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return n % 10 + sumofDigits(n / 10);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << sumofDigits(n) << endl;
// }

//#8
// int power(int base, int exp) {
//     if (exp == 0) {
//         return 1;
//     }
//     return base * power(base, exp - 1);
// }
// int main() {
//     int base, exp;
//     cin >> base >> exp;
//     cout << power(base, exp) << endl;
// }

//#9
// void reverseDigits(int number) {
//     if (number == 0) {
//         return;
//     }
//     cout<<number%10;
//     reverseDigits(number/10);
// }
// int main() {
//     int number;
//     cin >> number;
//     reverseDigits(number);
//     return 0;
// }

// #10
int reverseDigits(int number,int reversed = 0) {
    if (number == 0) {
        return 0;
    }
    return reverseDigits(number/10, reversed*10+number%10);
}
bool palindrome(int n) {
    if (n < 0) {
        return false;
    }else if (n==reverseDigits(n)) {
        return true;
    }
}
int main() {
    int num;
    cin >> num;
    if (palindrome(num)) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not a palindrome" << endl;
    }
    return 0;
}
