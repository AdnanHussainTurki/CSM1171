#include <iostream>
#include <math.h>

using namespace std;

class Triangle
{
private:
    int base;
    int height;
public:
    Triangle(int base, int height) {
        this->base  = base;
        this->height = height;
    }
    float hypo() {
        return pow(pow(this->base,2) + pow(this->height,2) ,0.5);
    }
    float area() {
        return (0.5 * this->base * this->height) ;
    }
    
};

int main(int argc, char const *argv[])
{
    Triangle t(3,4);
    cout << "\n\nArea:" << t.area();
    cout << "\nHypotenuse:" << t.hypo();
    cout << "\n\n";
    return 0;
}