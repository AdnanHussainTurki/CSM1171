#include <iostream>
#include <math.h>

using namespace std;

class Triangle
{
private:
    static int countCreated;
    static int countDestroyed;
public:
    Triangle() {
        puts("\n\nCREATING A OBJECT\n");
        this->countCreated += 1;
    }
    ~Triangle() {
        puts("\n\nDESTROYING A OBJECT\n");
        this->countDestroyed -= 1;
    }

    static int getCreatedCount() {
        return countCreated;
    }
    static int getDestroyedCount() {
        return countDestroyed;
    }
    
    
};
int Triangle::countCreated = 0;
int Triangle::countDestroyed = 0;

int main(int argc, char const *argv[])
{
    
    Triangle t;
    cout << "\n\nCount Created:" << Triangle::getCreatedCount();
    cout << "\nCount Destroyed:" << Triangle::getDestroyedCount();
    
    Triangle a,c,d,e;
    cout << "\n\nCount Created:" << Triangle::getCreatedCount();
    cout << "\nCount Destroyed:" << Triangle::getDestroyedCount();
    cout << "\n\n";
    return 0;
}