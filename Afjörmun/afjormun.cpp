#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string sentence;
        getline(cin, sentence);

        for (int j = 0; j < sentence.size(); j++) {
            if (j == 0) {
                sentence[j] = toupper(sentence[j]);
            } else {
                sentence[j] = tolower(sentence[j]);
            }
        }

        cout << sentence << "\n";
    }
}
