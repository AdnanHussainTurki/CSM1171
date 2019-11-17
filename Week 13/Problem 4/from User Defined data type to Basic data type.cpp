#include <iostream>


using namespace std;

// Celcius (a concept)  (User Defined Type: Celcius (as class))
//  to  Farhanheit (a concept)  (Basic Data Type: float)


class Celcius
{
protected:
    float tCelcius;
public:
    Celcius(int tCelcius) {
        this->tCelcius = tCelcius;
    }
    operator float() {
        float fer;
        fer =  this->tCelcius *9/5 + 32;
        return (fer);
    }
      
};  

main() {
    Celcius c(37);
    cout << "The temperature in Celcius -40 and its Farhanheit equivalent is  : " << (float) c;
}