#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    void inputDetails() {
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    void displayDetails() {
        cout << "\n--- Book Details ---\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b;
    b.inputDetails();
    b.displayDetails();

    return 0;
}