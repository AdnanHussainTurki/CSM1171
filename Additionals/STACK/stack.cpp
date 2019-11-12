#include <iostream>

using namespace std;

class test
{
private:

    int s[20];
    int top;
public:
    test() {
      top = -1;
    };
    void push(int item) {
        puts("PUSH HAS BEEN CALLED FOR ");
        cout << item << endl<<endl;
        this->top++;
        this->s[top] = item;

    }
    void pop() {
        if (top == -1)
        {
            puts("NOTHING TO POP");
            return;        
        }
        puts("POP HAS BEEN CALLED");
        top--;

    }
    void print() {
        puts("\n\n\nPRINTING STACK:");
        for (int i = 0; i <= (top); ++i)
        {
            cout << this->s[i] << ", ";
        }
    }
    int peep(int index) {
        if (this->top < index || index < 0 )
        {
            puts("ERROR DUE TO OVERFLOW OR INTERFLOW;");
            return -1;
        }
        return this->s[index];
    }
protected:
    
};

main() {
    test a;

    a.push(1);
    a.push(1);
    a.push(1);
    a.push(1);

    cout << "The peeped element is " << a.peep(3);
    
}