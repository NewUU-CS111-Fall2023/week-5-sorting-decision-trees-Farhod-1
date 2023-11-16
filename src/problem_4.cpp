//
// Created by Farxod on 16/11/2023.
//
#include <iostream>
#include <vector>

using namespace std;

int countSmallerNeighbors(vector<int> &numbers) {
    int count = 0;
    for (int i = 1; i < numbers.size() - 1; i++) {
        if (numbers[i] > numbers[i - 1] && numbers[i] > numbers[i + 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> numbers;
    int number;
    cout << "Enter the numbers (end with 0): " << endl;
    while (cin >> number && number != 0) {
        numbers.push_back(number);
    }
    cout << "The count of elements where both adjacent neighbors are smaller than the current element is: "
         << countSmallerNeighbors(numbers) << endl;
    return 0;
}