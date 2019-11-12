#include "iostream"

using namespace std;

struct node
{
    int INFO;
    node *NEXT;
};

class linkedlist
{
    node *START;
public:
    linkedlist() {
        START = NULL;
    };
    void insertAtBegin(int item) {
        node *pnew = new node;
        pnew->INFO = item;
        pnew->NEXT=START; // 
        START = pnew;
    }
    void insertAtEnd(int item) {
        node *pnew = new node;
        pnew->INFO = item;
        pnew->NEXT = NULL:
        if (START == NULL) // IF NO NODE EXIST
        {
            START = pnew;
        } else {
            node *p = START; // FETCHING THE FIRST NODE
            while(p->NEXT != NULL) { // RUN UNTIL LAST ELEMENT IS REACHED
                p = p->NEXT; // IN ORDER TO CONTROL THE LOOP
            } // P WILL NOW CONTAINS THE ADDRESS OF LAST NODE
            p->NEXT = pnew;
        }
    }
    void insertAfterValue(int needle, int item) {
        if (START == NULL)
        {
            puts("List is empty");
            return;
        }
        node *p = search(needle);
        if (p == NULL)
        {
            puts("NO MATCH FOUND.");
            return;
        }
        node *pnew = new node;
        pnew->INFO = item;
        pnew->NEXT = p->NEXT;
        p->NEXT= pnew;
    }
    node* search(int searchable) {
        node *p = START;
        while(p->NEXT != NULL) {
            if (p->INFO == searchable)
            {
                return p;
            } else {
                p = p->NEXT;
            }
        }
        return NULL;
    }
    void traversal() {
        if (START == NULL)
        {
            puts("List is empty");
            return;
        }
        node *p = START;
        while(p->NEXT != NULL) {
            puts(p->INFO);        
            p = p->NEXT;
        }
    }
    void deleteFromBeg() {
        if (START == NULL)
        {
            puts("List is empty");
            return;
        }
        node *pnew = START;
        START = pnew->START;
        delete pnew;
    }
    void deleteFromEnd() {
        if (START == NULL)
        {
            puts("List is empty");
            return;
        }
        if (START->NEXT == NULL)
        {
            deleteFromBeg();
        } else {
            node *pp = START;
            node *p = START->NEXT;
            while(p->NEXT != NULL) {
                pp = p;
                p = p->NEXT;
            }
            pp->NEXT = NULL;
            delete p;
        }
    }
    void deleteWithValue(int searchable) {
        if (START == NULL)
        {
            puts("List is empty");
            return;
        }
        if (START->INFO == searchable)
        {
            deleteFromBeg();
        } else {
            node *pp = START;
            node *p = START->NEXT;
            while(p->NEXT != NULL) {
                if (p->INFO  == searchable)
                {
                    break;
                }
                pp = p;
                p = p->NEXT;
            }
            if (p == NULL)
            {
                puts("Loop crossed no value found with a match.");
                return;
            }
            pp->NEXT = p->NEXT;
            delete p;
        }
    }

    ~linkedlist() {
        node *p START, *ps;
        START=NULL;
        while(p!=NULL) {
            ps = p->NEXT;
            delete p;
            p = ps;
        }
    };
    
};
main() {
    linkedlist l;
}