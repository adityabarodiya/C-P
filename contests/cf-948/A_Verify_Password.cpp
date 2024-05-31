#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

bool areCharactersSorted(const vector<char>& characters) {
    return is_sorted(characters.begin(), characters.end());
}

bool hasDigitAfterLetter(const string& password) {
    bool letterFound = false;
    for (auto ch : password) {
        if (isalpha(ch)) {
            letterFound = true;
        } else if (isdigit(ch) && letterFound) {
            return true;
        }
    }
    return false;
}

bool isStrongPassword(const string& password) {
    vector<char> letters;
    vector<char> digits;

    for (auto ch : password) {
        if (isdigit(ch)) {
            digits.push_back(ch);
        } else if (isalpha(ch)) {
            letters.push_back(ch);
        }
    }

    if (!areCharactersSorted(letters)) {
        return false;
    }

    if (!areCharactersSorted(digits)) {
        return false;
    }

    if (hasDigitAfterLetter(password)) {
        return false;
    }

    return true;
}

void processTestCases() {
    int numberOfTestCases;
    cin >> numberOfTestCases;

    while (numberOfTestCases--) {
        int passwordLength;
        cin >> passwordLength;
        string password;
        cin >> password;

        cout << (isStrongPassword(password) ? "YES" : "NO") << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    processTestCases();
    return 0;
}
