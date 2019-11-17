#include <iostream>
#include <stdlib.h>

using namespace std;

class Student
{
public:
    char name[100];
    char branch[100];
    int semester;

    int marksOfOne = -1;
    int marksOfTwo = -1;
    int marksOfThree = -1;
    int marksOfFour = -1;
    int marksOfFive = -1;
    int marksOfSix = -1;
    

    int isMarksProvided() {
        if ((this->marksOfOne == -1) or (this->marksOfTwo == -1) or (this->marksOfThree == -1) or (this->marksOfFour == -1) or (this->marksOfFive == -1) or (this->marksOfSix == -1))
        {
            return 0;
        }
        return 1;
    }
    float getPercentage() {
        if (this->isMarksProvided() == 0)
        {
            puts("FATAL ERROR: MARKS NOT SET.");
            return 0;
        }
        float percentage = ((this->marksOfOne + this->marksOfTwo + this->marksOfThree +this->marksOfFour +this->marksOfFive +this->marksOfSix) / 6);
        return percentage;
    }
    int isPassed(){
        if (this->getPercentage() < 33)
        {
            return 0;
        }
        if ((this->marksOfOne < 33) or (this->marksOfTwo < 33) or (this->marksOfThree < 33) or (this->marksOfFour < 33) or (this->marksOfFive < 33) or (this->marksOfSix < 33))
        {
            return 0;
        }
        return 1;
    }

    void printResult() {
        system("cls");
        puts("");
        puts("========== RESULT ==============");
        puts("Name: ");
        puts(this->name);
        puts("");
        puts("Branch: ");
        puts(this->branch);
        puts("");
        puts("Semester: ");
        cout << this->semester << endl; 
        puts("");
        puts("Percentage: ");
        cout << this->getPercentage() << endl ;
        puts("");
        puts("Result: ");
        cout << ((this->isPassed() == 1) ? "PASSED" : "FAILED") << endl ;
        puts("============================================");

    }
    
};

main() {
    Student s1;
    puts("Enter the name of the student: ");
    cin.getline(s1.name, 100);

    puts("Enter the branch of the student: ");
    cin.getline(s1.branch,100);

    puts("Enter the semester you are in (in numeric): ");
    cin >> s1.semester;

    puts("Enter the marks in subject 1: ");
    cin >> s1.marksOfOne;

    puts("Enter the marks in subject 2: ");
    cin >> s1.marksOfTwo;

    puts("Enter the marks in subject 3: ");
    cin >> s1.marksOfThree;

    puts("Enter the marks in subject 4: ");
    cin >> s1.marksOfFour;

    puts("Enter the marks in subject 5: ");
    cin >> s1.marksOfFive;

    puts("Enter the marks in subject 6: ");
    cin >> s1.marksOfSix;


    s1.printResult();





}