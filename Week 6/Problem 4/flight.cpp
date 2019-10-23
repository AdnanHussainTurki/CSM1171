#include <iostream>

using namespace std;

class Flight
{
protected:
    int number;
    char source[100];
    char destination[100];
    int fare;
public:
    Flight(int number, char* source, char* destination, int fare){
        this->number = number;
        this->fare = fare;
        int i = 0 ;
        while(source[i] != '\0') {
            this->source[i] = source[i];
            i++;
        } 
        this->source[i] = '\0';
        i = 0 ;
        while(destination[i] != '\0') {
            this->destination[i] = destination[i];
            i++;
        } 
        this->destination[i] = '\0';
    }
    ~Flight() {
    }
    
    void print() {
        cout << "\nFlight Number : " << this->number;
        cout << "\nSource : " << this->source;
        cout << "\nDestination : " << this->destination;
        cout << "\nFare : " << this->fare;
    }
    
};

main() {
    puts("\n\nEnter the flight number: ");
    int flight_no;
    cin >> flight_no;
    cin.ignore();

    char source[100];
    puts("\n\nEnter the source of the flight: ");
    gets(source);

    char destination[100];
    puts("\n\nEnter the destination of the flight: ");
    gets(destination);

    puts("\n\nEnter the fare: ");
    int fare;
    cin >> fare;
    cin.ignore();


    Flight flightOne = Flight(flight_no, source, destination, fare);
    flightOne.print();

}