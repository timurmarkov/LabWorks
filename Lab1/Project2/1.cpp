#include <iostream>
#include <sstream>
#include <vector>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string input;

    cout << "Введіть строку: ";
    getline(cin, input);
    istringstream iss(input);
    vector<string> words;
    string word;

    while (iss >> word) {
        words.push_back(word);
    }

    for (auto& w : words) {
        cout << w << endl;
    }

    return 0;
}

