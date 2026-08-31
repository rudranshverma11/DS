#include <iostream>
using namespace std;

int main() 
{
    int bookIds[5];
    int searchId;
    int found = 0;   

    cout << "Enter 5 book IDs:\n";
    for (int i = 0; i < 5; i++) 
    {
        cout << "Book " << (i + 1) << ": ";
        cin >> bookIds[i];
    }

    cout << "\nEnter the book ID to search: ";
    cin >> searchId;

    for (int i = 0; i < 5; i++) 
    {
        if (bookIds[i] == searchId) 
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        cout << "Book found" << endl;
    else
        cout << "Book not found" << endl;

    return 0;
}