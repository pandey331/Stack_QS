#include<bits/stdc++.h>
using namespace std;
class Queue{
    int qfront; //to pop element
    int rear; //to push elemnt
    int size;
    int *arr;

    public:

    Queue(int s)
    {
        this->size=s;
        this->rear=0;
        this->qfront=0;
        this->arr=new int[size];
    }
    ~Queue(){
        delete[]arr;
    }
    //to insert element in queue
    void enqueue(int element)
    {
        //firstly check queue is full or not
        if(rear==size)
        {
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear]=element;
            rear++;
        }
    }
    int dequeue(){
        //firstly check queue is empty or not
        if(qfront==rear)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            int ans =arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear)
            {
                qfront=0;
                rear=0;
            }
            cout<<"deleted element is:"<<ans <<endl;
            return ans;
        }
    }
    int front()
    {
        if(qfront==rear) 
        {
            cout<<"Queue is empty"<<endl;
        }
        else{
            //return arr[qfront];
            cout<<"Front is " <<arr[qfront]<<endl;
        }
       

    }
    int isEmpty()
    {
        if(qfront==rear)
        {
            
            cout<<"Queue is empty"<<endl;
            return 1;

        } 
        else{
            
            cout<<"queue is not empty"<<endl;
            return 0;
        }

    }
   


};
int main()
{
    Queue q(10);
    q.enqueue(5);
    q.enqueue(6);
    q.front();
    
    q.isEmpty();

    q.dequeue();
    q.dequeue();
    q.isEmpty();
   
   

    return 0;
}