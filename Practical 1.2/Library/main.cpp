#include <iostream>
#include <limits>
#include "../Library.h"

int main()
{
    Library L[50];
    int ch, last = 0;
    std::string title;

    while (true)
    {
        std::cout << "\n1. Add Book\n";
        std::cout << "2. Issue Book\n";
        std::cout << "3. Return Book\n";
        std::cout << "4. Display Books\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice -> ";
        if (!(std::cin >> ch))
        {
            std::cout << "Invalid choice\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (ch)
        {
        case 1:
            if (last < 50)
            {
                L[last].addBook();
                last++;
            }
            else
            {
                std::cout << "Library storage full!\n";
            }
            break;

        case 2:
        {
            std::cout << "Enter Book Title -> ";
            std::getline(std::cin, title);

            bool found = false;
            for (int i = 0; i < last; i++)
            {
                if (L[i].issueBook(title))
                {
                    found = true;
                    break;
                }
            }

            if (!found)
                std::cout << "ERROR: Book does not exist\n";
            break;
        }

        case 3:
        {
            std::cout << "Enter Book Title -> ";
            std::getline(std::cin, title);

            bool found = false;
            for (int i = 0; i < last; i++)
            {
                if (L[i].returnBook(title))
                {
                    found = true;
                    break;
                }
            }

            if (!found)
                std::cout << "ERROR: Book does not exist\n";
            break;
        }

        case 4:
            if (last == 0)
            {
                std::cout << "Library is empty\n";
            }
            else
            {
                std::cout << "\nBookID\tTitle\tAuthor\tCopies\n";
                for (int i = 0; i < last; i++)
                    L[i].display();
            }
            break;

        case 5:
            return 0;

        default:
            std::cout << "Invalid choice\n";
        }
    }
}
