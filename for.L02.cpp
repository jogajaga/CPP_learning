#include <iostream>
#include <string>

using namespace std;

int main() {
    string query, word;
    getline(cin, query);
    for (int i = 0; i <= query.size(); ++i) {
        if (i == query.size() || query[i] == ' ') {
            if (word.size()) {
                cout << '[' + word + ']' << endl;
                word.clear();
            }
        }
        else {
            word += query[i];
        }
    }
    return 0;
}