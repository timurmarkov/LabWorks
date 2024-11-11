#include <iostream>
#include <string>
#include <algorithm>
#include <Windows.h>
using namespace std;

string formatNumber(const string& input) {
    string result;
    int count = 0;

    for (int i = input.size() - 1; i >= 0; --i) {
        result += input[i]; 
        count++;

        if (count % 3 == 0 && i != 0) {
            result += ' ';  
        }
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string input;
    cout << "Введіть рядок цифр: ";
    cin >> input;

    string formattedNumber = formatNumber(input);
    cout << "Форматований рядок: " << formattedNumber << endl;

    return 0;
}
