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
            if (!word.empty()) { // Проверка на пустое слово перед добавлением
                words.push_back(word);
            }
            word.clear();
        }
        else {
            word += c;
        }
    }

    if (!word.empty()) { // Добавление последнего слова
        words.push_back(word);
    }

    for (string length : words) {
        cout << "[" << length << "]" << " "s << endl;
    }
}