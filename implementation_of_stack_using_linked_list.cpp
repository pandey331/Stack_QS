#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node* next;
    int val;

};

class Mystacks
{
    public:
    Node* head;
    
    int sizeofstack;
    Mystacks()
    {
        head=NULL;
        sizeofstack=0;
    }

    void push(int d)
    {
        Node* temp=new Node();
        temp->val=d;
        temp->next=head;
        head=temp; 
        cout<<"Element pushed is :" << d <<" "<< "Succcessfully !!"<<endl;
        sizeofstack++;

    }
    void pop()
    {
         if(head==NULL) 
         {
            cout<<"Stack is empty "<<endl;
            return;
         }
         else
         {
            Node* temp=head;
            head=temp->next;
            temp->next=NULL;
            free(temp);
            cout<<"Element poppeds"<<endl;
            sizeofstack--;
         }

    }

    int top()
    {
         if(head==NULL)
         {
            cout<<"Stack is empty"<<endl;
            return -1;
         }
         else{
            return head->val;
            cout<<"Top element is "<<head->val<<endl;
            return head->val;
         }
    }
    int isEmpty()
    {
        if(head==NULL)
        {
            cout<<"Stack is empty" <<endl;
            return 1;
        }
        else{
            cout<<"Stack is not empty" <<endl;
            return 0;
        }

    }
    int size()
    {
        cout<<"Size of stack is:" << sizeofstack<<endl;
        return sizeofstack;
    }
};

int main()

{
    Mystacks s;
    s.isEmpty();
    s.push(7);
    s.push(8);
    s.pop();
    s.pop();
    s.push(10);
    s.push(9);
    s.top();
    s.size();
    s.pop();
    s.pop();
    s.isEmpty();
    
    return 0;

}