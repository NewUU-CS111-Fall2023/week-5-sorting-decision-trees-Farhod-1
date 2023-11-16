//
// Created by Farxod on 16/11/2023.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> books;
    string book;
    cout << "Enter the books (end with #): " << endl;
    while (getline(cin, book) && book != "#") {
        books.push_back(book);
    }
    cout << "The books in the order of their entry are: " << endl;
    for (int i = 0; i < books.size(); i++) {
        cout << books[i] << endl;
    }
    cout << "The books in alphabetical order are: " << endl;
    sort(books.begin(), books.end());
    for (int i = 0; i < books.size(); i++) {
        cout << books[i] << endl;
    }
    return 0;
}
