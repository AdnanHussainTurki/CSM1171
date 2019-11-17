#include <iostream>

using namespace std;

class Category
{
protected: 
    string category;
public:
    Category(string category) {
        this->category = category;
    };
    string getCategory() {
        return this->category;
    }
    
};

class Product
{
protected: 
    int code = -1;
    int price = -1;
    string category = "Uncategorized";
public:
    Product() {

    }
    Product(int code, int price, string category) {
        this->code = code;
        this->price = price;
        this->category = category;
    }
    Product(Category category) {
        this->category = category.getCategory();
    }
    void printSummary() {
        puts("\n\n=====================================");
        puts("========PRODUCT SUMMARY==============");
        cout << "Code: " << this->code << endl;
        cout << "Price: " << this->price << endl;
        cout << "Category: " << this->category<< endl;
        puts("=====================================");

    }
    
};

main() {
    Category c1("Mobiles");

    Product p1 = Product(123, 13999, "Mobiles");
    p1.printSummary();

    Product p2;
    p2.printSummary();

    p2 = c1; // Constructor at line 34 will run 
    p2.printSummary();
}