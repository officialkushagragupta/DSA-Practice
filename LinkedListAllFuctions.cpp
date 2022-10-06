
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};


int LengthLL(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }

    return count;
}



void InsertAtFront(node *&head, node *&tail, int d) // Everything shall be given by refernce so as to keep track even if you are not in main function
{
    node *n = new node(d);
    if (head == NULL)
    {
        // node *n = new node(d);
        head = tail = n; // remember for the very first node both head and tail points to NULL
    }
    else
    {
        // node *n = new node(d);
        n->next = head;
        head = n;
    }
}


void InsertAtEnd(node *&head, node *&tail, int d)
{
    node *n=new node(d);
    if(head==NULL)
    {
        head=tail=n;
    }
    else
    {
        tail->next=n;
        tail=n;
    }
}

void InsertAtMiddle(node *&head, node *&tail, int d,int position)
{
   if (position == 0)
    {
        InsertAtFront(head, tail, d); // Agar hai hi nhi nodes tho create krna padega
    }
    else if (position >= LengthLL(head))
    {
        InsertAtEnd(head, tail, d);
        // could have also outputted cant be added as pos exceeds the length
    }
    else
    {
        node *n=new node(d);
        node*temp=head;
        for(int i=1;i<position-1;i++)
        {
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;   
    
    }
    
}

void printingLL(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}

int main()
{
    node *head = NULL, *tail = NULL;
    InsertAtFront(head, tail, 1);
    InsertAtFront(head, tail, 2);
    InsertAtFront(head, tail, 3);
    InsertAtFront(head, tail, 4);
    InsertAtFront(head, tail, 5);
    
    printingLL(head);
    cout<<endl;
    
    InsertAtEnd(head,tail,6);
    InsertAtEnd(head,tail,7);
    InsertAtEnd(head,tail,8);
    InsertAtEnd(head,tail,9);
    InsertAtEnd(head,tail,10);
    InsertAtEnd(head,tail,11);

    printingLL(head);
    cout<<endl;
    
    
    InsertAtMiddle(head, tail,69, 6);
    printingLL(head);
    cout<<endl;
    
    return 0;
}