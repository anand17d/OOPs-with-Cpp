#include <bits/stdc++.h>
using namespace std;

class Library {
public:
    class Book {
    public:
        int bookId;
        string title;
        float price;

        void input() {
            cout << "Enter Book ID: ";
            cin >> bookId;
            cout << "Enter Book Title: ";
            cin >> title;
            cout << "Enter Book Price: ";
            cin >> price;
        }

        void display() {
            cout << "\nBook ID: " << bookId;
            cout << "\nTitle: " << title;
            cout << "\nPrice: " << price << endl;
        }
    };
};

int main() {
    int n, searchId;
    cout << "Enter number of books: ";
    cin >> n;

    Library::Book books[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Book " << i + 1 << ":\n";
        books[i].input();
    }

    char choice;  
    bool continueSearching = true;

    while (continueSearching) {
        cout << "\nEnter Book ID to search: ";
        cin >> searchId;

        bool found = false;
        for (int i = 0; i < n; i++) {
            if (books[i].bookId == searchId) {
                books[i].display();
                found = true;
                break;
            }
        }

        if (found) {
            cout << "\nDo you want to search again? (y/n): ";
            cin >> choice;
            if (choice != 'y' && choice != 'Y') {
                continueSearching = false;
            }
        } else {
            cout << "Book not found. Please try again.";
        }
    }

    cout << "\nExiting program. Goodbye!\n";
    return 0;
}