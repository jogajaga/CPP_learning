#include <iostream>
#include <string>

using namespace std;

int main() {
    int first, second = 0;
    cin >> first >> second;
    int S = first + second;
    string string_S = to_string(S);
    int finalS = S * string_S.size();
    cout << finalS << endl;
}