#include<iostream>
#include<queue>
using namespace std;
class Mystack
{
    //we will use two queue
    
    public:
    queue<int>q1,q2;
    void push(int x)
    {
        //q1->q2
        //q1.push
        ///q2->q1
        if(q2.empty())
        {
           while(!q1.empty())
           {
            q2.push(q1.front());
            q1.pop();
           }
        }
        q1.push(x);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }

    }
    int pop()
    {
        int val =q1.front();
        q1.pop();
        
        cout<<"Popped eleemnt is "<< val <<endl;
        return val;


    }

    int top()
    {
        int vall=q1.front();
       
        cout<<"Top value is :"<<vall<<endl;
         return vall;

    }
    bool isEmpty()
    {
        if(q1.empty())
        {
            cout<<"Queue is empty"<<endl;
            return 1;
        }
        else
        {
            cout<<"Queue is not empty"<<endl;
            return -1;
        }

    }

};

int main()
{
    Mystack q;
    q.push(2);
    q.push(3);
    q.isEmpty();
    q.top();
    q.pop();

    return 0;

}