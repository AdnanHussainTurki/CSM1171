#include "iostream"

using namespace std;

const int n =20;

class test
{
private:
    int a[n];
    int front, rear;
public:
    test() {
        this->front = this->rear = -1;
    };
    void enqueue(int item) {
        if (this->rear == (n-1))
        {
            puts("Queue is full. Overflow exception.");
            return;
        }
        if (this->rear == -1)
        {
            // Nothing in the queue
            this->rear = this->front = 0;
        } else {
            // Queue has something
            this->rear = this->rear + 1;
        }
        puts("ENQUEUE ITEM");
        this->a[this->rear] = item;
    }
    void dequeue() {
        if (this->front == -1)
        {
            // Nothing to dequeue
            puts("Queue empty. Dequeue is not possible.");
            return;
        }
        if (this->front == this->rear)
        {
            // Important: DO NOT IGNORE
            this->front = this->rear = -1;
        } else {
            puts("DEQUEUE ITEM");
            this->front = this->front + 1;
        }
        return;
    }
    void print() {
        if (this->rear == -1 || this->front == -1) {
            puts("Nothing to print.");
            return;
        }
        cout << "\n\n\nPRINTING QUEUE: \n";
        for (int i = this->front; i <= (this->rear); ++i)
        {
            cout << this->a[i] << ", ";
        }
        cout << endl << endl;
    }
};

int main() {
    test t1;
    t1.enqueue(2);
    t1.enqueue(4);
    t1.enqueue(5);
    t1.enqueue(6);
    t1.dequeue();
    t1.print();
 
}

