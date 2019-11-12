#include <iostream>

using namespace std;

struct Book
{
    int book_id;
    string title;
    string author;
    int price;
    void printSummary(Book *b) {
   
        puts("===================================");
        puts("Book ID: ");
        cout << b->book_id<< endl<<endl;
        puts("Title: ");
        cout << (b->title)<< endl<<endl;
        puts("Author: ");
        cout << (b->author)<< endl<<endl;
        puts("Price: ");
        cout << b->price<< endl<<endl;
        puts("===================================");
    }
};

main() {
    Book b;
    b.book_id  = 1;
    b.title = "The Imitation Game";
    b.author = "Adnan Hussain";
    b.price = 20;
    b.printSummary(&b);
}