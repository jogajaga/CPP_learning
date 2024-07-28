#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words = {};
    string query;

    getline(cin, query);
    string word;

    for (char c : query) {
        if (c == ' ') {

            words.push_back(word);
            word.clear();
        }
        else {
            word += c;
        }
    }

    words.push_back(word);

    for (string length : words) {
        cout << "[" << length << "]" << " "s << endl;
    }
}

/*
cin >> find me a cat
cout << [find] [me] [a] [cat]
*/