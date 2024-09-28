#include <bits/stdc++.h>

using namespace std; // Add this line

class Book {
private:
    string title;
    string author;
    string isbn;
    bool available;

public:
    // Setters
    void setTitle(const string& newTitle) {
        title = newTitle;
    }

    void setAuthor(const string& newAuthor) {
        author = newAuthor;
    }

    void setISBN(const string& newISBN) {
        isbn = newISBN;
    }

    void setAvailable(bool status) {
        available = status;
    }

    // Getters
    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    string getISBN() const {
        return isbn;
    }

    string getAvailable() const {
        return available ? "Available" : "Checked out";
    }

    // Book operations
    void borrowBook() {
        if (available) {
            available = false;
            cout << "Book borrowed successfully." << endl;
        } else {
            cout << "Book is already checked out." << endl;
        }
    }

    void returnBook() {
        if (!available) {
            available = true;
            cout << "Book returned successfully." << endl;
        } else {
            cout << "Book is already available." << endl;
        }
    }
};

int main() {
    const int maxCapacity = 100;
    Book* library = new Book[maxCapacity];
    int librarySize = 0;

    cout << "Welcome to the library management system!" << endl;

    while (true) {
        cout << "\nMenu:\n1. Add book\n2. Remove book\n3. Search for book\n4. Exit\n\nEnter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                if (librarySize < maxCapacity) {
                    Book newBook;
                    string title, author, isbn;

                    cout << "Enter book title: ";
                    cin.ignore();
                    getline(cin, title);
                    newBook.setTitle(title);

                    cout << "Enter book author: ";
                    getline(cin, author);
                    newBook.setAuthor(author);

                    cout << "Enter book ISBN: ";
                    getline(cin, isbn);
                    newBook.setISBN(isbn);

                    newBook.setAvailable(true);

                    library[librarySize++] = newBook;

                    cout << "Book added to library." << endl;
                } else {
                    cout << "Library is at maximum capacity. Cannot add more books." << endl;
                }
                break;
            }

            case 2: {
                string removeISBN;
                cout << "Enter book ISBN: ";
                cin >> removeISBN;

                bool found = false;
                for (int i = 0; i < librarySize; ++i) {
                    if (library[i].getISBN() == removeISBN) {
                        for (int j = i; j < librarySize - 1; ++j) {
                            library[j] = library[j + 1];
                        }
                        --librarySize;
                        found = true;
                        cout << "Book removed from library." << endl;
                        break;
                    }
                }

                if (!found) {
                    cout << "Book not found in the library." << endl;
                }

                break;
            }

            case 3: {
                string searchISBN;
                cout << "Enter book ISBN: ";
                cin >> searchISBN;

                bool found = false;
                for (int i = 0; i < librarySize; ++i) {
                    if (library[i].getISBN() == searchISBN) {
                        cout << "\nBook Information:\n"
                             << "Title: " << library[i].getTitle() << "\n"
                             << "Author: " << library[i].getAuthor() << "\n"
                             << "ISBN: " << library[i].getISBN() << "\n"
                             << "Availability: " << library[i].getAvailable() << "\n" << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Book not found in the library." << endl;
                }

                break;
            }

            case 4:
                cout << "Thank you for using the library management system!" << endl;
                delete[] library;
                return 0;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}
