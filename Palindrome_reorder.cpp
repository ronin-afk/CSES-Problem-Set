#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    vector<int> freq(26, 0);
    for (char c : S) freq[c - 'A']++; 

    int oddCount = 0;
    int oddIdx = -1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
            oddIdx = i;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string firstHalf = "", middle = "";
    for (int i = 0; i < 26; i++) {
        string temp(freq[i] / 2, (char)('A' + i));
        firstHalf += temp;
    }

    if (oddIdx != -1) {
        middle = (char)('A' + oddIdx);
    }

    string secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());

    cout << firstHalf << middle << secondHalf << endl;

    return 0;
}
