#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> ones = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
std::vector<std::string> teens = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
std::vector<std::string> tens = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

// Function to convert a two-digit number to words
std::string twoDigitNumberToWords(int number) {
    if (number < 10) {
        return ones[number];
    } else if (number < 20) {
        return teens[number - 10];
    } else {
        int tensDigit = number / 10;
        int onesDigit = number % 10;
        return tens[tensDigit] + (onesDigit != 0 ? " " + ones[onesDigit] : "");
    }
}

// Function to convert a positive integer to words
std::string integerToWords(int N) {
    if (N == 0) {
        return "Zero";
    }

    std::string result;

    if (N >= 1000) {
        result += integerToWords(N / 1000) + " Thousand";
        N %= 1000;
    }

    if (N >= 100) {
        result += " " + ones[N / 100] + " Hundred";
        N %= 100;
    }

    if (N > 0) {
        if (!result.empty()) {
            result += " and";
        }
        result += " " + twoDigitNumberToWords(N);
    }

    return result;
}

int main() {
    int N;
    std::cout << "Enter a positive integer: ";
    std::cin >> N;

    if (N < 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        std::string result = integerToWords(N);
        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}
