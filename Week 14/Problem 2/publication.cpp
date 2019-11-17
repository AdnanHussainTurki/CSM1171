#include <iostream>

using namespace std;

class Publication
{
protected: 
    string title;
    string author;
public:
    Publication () {

    }
    Publication(string title, string author) {
        this->title = title;
        this->author = author;
    }
    void setPublication(string title, string author) {
        this->title = title;
        this->author = author;
    }
    void setPublication() {
        puts("Name of the book: ");
        getline(cin,this->title);
        puts("Author of the book: ");
        getline(cin,this->author);
    }
    string getTitle() {
        return this->title;
    }
    string getAuthor() {
        return this->author;
    }
    void setTitle(string title) {
        this->title = title;
    }
    void setAuthor(string author) {
        this->author  = author;
    }
};

class Sale : public Publication
{
private:
    int countSales = 0;        
public:

    Sale(Publication p) {
        this->title = p.getTitle();
        this->author = p.getAuthor();
        return;
    }

    int doSale() {
        return ++countSales;
    }  
    void printSaleSummary() {
        puts("=============================================================");
        cout << "\nThe total sale for this pubication: " << this->countSales << endl;
        puts("=============================================================");
    }
   
};

main() {
    Publication p1;
    p1.setPublication();
    Sale salesDesk(p1);
    salesDesk.doSale();
    salesDesk.doSale();
    salesDesk.doSale();
    salesDesk.doSale();
    salesDesk.doSale();
    salesDesk.printSaleSummary();



}