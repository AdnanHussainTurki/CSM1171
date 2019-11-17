#include <iostream>


using namespace std;

// Faranheit (a concept) (Basic Type: float) to  Celcius (User Defined Data Type: Celcius (as Class))
class Temperature
{
    float tCelcius;
public:
    Temperature(float tFaranheit) {
        tFaranheit = (tFaranheit - 32 ) * (5/9);
    }
    
};

int main(int argc, char const *argv[])
{
    // Changed float data type  to its equivalent Temperature(user-defined) data type
    Temperature(98.6);
    return 0;
}