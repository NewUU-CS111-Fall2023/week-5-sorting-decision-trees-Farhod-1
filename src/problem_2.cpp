//
// Created by Farxod on 16/11/2023.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> coins;
    string coin;
    cout << "Enter the coins (end with #): " << endl;
    while (getline(cin, coin) && coin != "#") {
        coins.push_back(coin);
    }
    cout << "The coins in the order of their entry are: " << endl;
    for (int i = 0; i < coins.size(); i++) {
        cout << coins[i] << endl;
    }
    cout << "The coins in alphabetical order are: " << endl;
    sort(coins.begin(), coins.end());
    for (int i = 0; i < coins.size(); i++) {
        cout << coins[i] << endl;
    }
    return 0;
}
