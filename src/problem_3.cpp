//
// Created by Farxod on 16/11/2023.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void swap(vector<string> &soldiers) {
    for (int i = 0; i < soldiers.size() - 1; i += 2) {
        string temp = soldiers[i];
        soldiers[i] = soldiers[i + 1];
        soldiers[i + 1] = temp;
    }
}

int main() {
    vector<string> soldiers;
    string soldier;
    cout << "Enter the soldiers (end with #): " << endl;
    while (getline(cin, soldier) && soldier != "#") {
        soldiers.push_back(soldier);
    }
    cout << "The soldiers in the order of their entry are: " << endl;
    for (int i = 0; i < soldiers.size(); i++) {
        cout << soldiers[i] << endl;
    }
    cout << "The soldiers in the order of their entry are: " << endl;
    swap(soldiers);
    for (int i = 0; i < soldiers.size(); i++) {
        cout << soldiers[i] << endl;
    }
    return 0;
}
