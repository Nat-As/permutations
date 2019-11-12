#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void perm(string i, string o){
    if (i.size() == 0){
        cout << o << endl;
    }

    for (int j = 0; j < i.size(); j++){
        perm(i.substr(1), o + i[0]);
        rotate(i.begin(), i.begin() + 1, i.end());
    }
}

int main() {
    string i;
    std::cout << "Enter a string:";
    std::cin >> i;
    std::cout << endl;

    perm(i, "");
    return 0;
}