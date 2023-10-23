#include<iostream>
using namespace std;

//CREATING NODE
struct Node
{
    Node* next;
    int data;

    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
//CREATING QUEUE
class Myqueue{
    Node* front;
    Node* rear;
    public:

    Myqueue()
    {
        front =0;
        rear=0;
    }
   //to insert elemnt 
    void Enqueue(int x)
    {
        //Node to insert
        Node* temp=new Node(x);
        //if list is empty front and rear become new node
        if(front==NULL)
        {
            front=rear=temp;
            return;
        }
        else{
            rear->next=temp;
            rear=temp;
        }
        cout<<"Last inserted elemnt is "<<rear->data<<endl;

    }
    void Dequeue()
    {
        //to check if list is empty or not
        if(front==NULL) return;
        else
        {
            Node* temp=front;
            front=front->next;
            //IF FRONT BECOME NULL AFTER DELET THE BOTH BECOME NULL

            if(front==NULL)
            {
                front=NULL;
                rear=NULL;
            }
            cout<<"deleted elemnt is "<<temp->data<<endl;
            free(temp);
        }

    }
    int qfront()
    {
        if(front !=NULL)
        {
            cout<<"Front is:"<< front->data <<endl;
        }
        return -1;
    }

};
int main()
{
    Myqueue q;
    q.Enqueue(5);
    q.Enqueue(8);
    q.qfront();

    q.Dequeue();
    q.Dequeue();
    

    return 0;

}
