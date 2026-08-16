#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    int bookId;
    string title;
    string author;
    bool issued;
public:
    Book(int id, string bookTitle, string bookAuthor)
    {
        bookId = id;
        title = bookTitle;
        author = bookAuthor;
        issued = false;
    }
    void displayBook()
    {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        if (issued)
        {
            cout << "Status: Issued" << endl;
        }
        else
        {
            cout << "Status: Available" << endl;
        }
    }
    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "Book issued successfully!" << endl;
        }
        else
        {
            cout << "Book is already issued!" << endl;
        }
    }
    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "Book returned successfully!" << endl;
        }
        else
        {
            cout << "Book is already available!" << endl;
        }
    }
    bool searchByTitle(string searchTitle)
    {
        return title == searchTitle;
    }
    bool searchByAuthor(string searchAuthor)
    {
        return author == searchAuthor;
    }
};
class Member
{
private:
    int memberId;
    string name;
public:
    Member(int id, string memberName)
    {
        memberId = id;
        name = memberName;
    }
    void displayMember()
    {
        cout << "Member ID: " << memberId << endl;
        cout << "Member Name: " << name << endl;
    }
};
int main()
{
    Book book(101, "The Alchemist", "Paulo Coelho");
    Member member(1, "Anugrah");
    int choice;
    string searchText;
    cout << "===== LIBRARY MANAGEMENT SYSTEM =====" << endl;
    do
    {
        cout << "\n----- MENU -----" << endl;
        cout << "1. Display Book" << endl;
        cout << "2. Search by Title" << endl;
        cout << "3. Search by Author" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Return Book" << endl;
        cout << "6. Display Member" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "\n--- Book Details ---" << endl;
                book.displayBook();
                break;
            case 2:
                cin.ignore();
                cout << "Enter title to search: ";
                getline(cin, searchText);
                if (book.searchByTitle(searchText))
                {
                    cout << "Book found!" << endl;
                    book.displayBook();
                }
                else
                {
                    cout << "Book not found!" << endl;
                }
                break;
            case 3:
                cin.ignore();
                cout << "Enter author to search: ";
                getline(cin, searchText);
                if (book.searchByAuthor(searchText))
                {
                    cout << "Book found!" << endl;
                    book.displayBook();
                }
                else
                {
                    cout << "Book not found!" << endl;
                }
                break;
            case 4:
                book.issueBook();
                break;
            case 5:
                book.returnBook();
                break;
            case 6:
                cout << "\n--- Member Details ---" << endl;
                member.displayMember();
                break;
            case 7:
                cout << "\nThank you for using the Library Management System!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 7);
    return 0;
}
