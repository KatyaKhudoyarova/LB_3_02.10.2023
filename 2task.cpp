#include <iostream>
#include <string>

int main() {
    int book_number;
    std::cout << "Enter book`s number (1-7): ";
    std::cin >> book_number;
    std::string author, title;
    switch (book_number) {
        case 1:
            author = "Agata Kristi";
            title = "Murder of Roger Ackroyd";
            break;
        case 2:
            author = "Agata Kristi";
            title = "The Mysterious Incident in Stiles";
            break;
        case 3:
            author = "Agata Kristi";
            title = "Murder on the Orient Express";
            break;
        case 4:
            author = "Agata Kristi";
            title = "Ten Little Indians ";
            break;
        case 5:
            author = "Agata Kristi";
            title = "Death on the Nile";
            break;
        case 6:
            author = "Agata Kristi";
            title = "In the end death is coming";
            break;
        case 7:
            author = "Agata Kristi";
            title = "Five piglets ";
            break;
        default:
            std::cout << "Uncorrect book`s number" << std::endl;
            return 1;
    }
    std::cout << "Author: " << author << std::endl;
    std::cout << "Title: " << title << std::endl;

    return 0;
}














