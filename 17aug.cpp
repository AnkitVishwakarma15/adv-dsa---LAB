#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int data[100];
    int front, rear;
     
    void initialize(){
        front = rear = -1;
    }

    bool isEmpty(){
        return front == -1;
    }
    bool isFull(){
        return rear == 99;
    }
    void enqueue(int info){
        if(rear == 99){
            cout << "Queue is full" << endl;
            return;
        }
        if(front == -1){
            front += 1;
        }
        rear += 1;
        data[rear] = info;
    }
    void dequeue(){
        if(front == -1){
            cout << "Queue is empty" << endl;
            return;
        }
        if(front == rear){
            front = rear = -1;
            return;
        }
        front += 1;
    }

    void  transverse(){
        if(front == -1){
            cout << "Queue is empty" << endl;
            return;
        }
        for(int i = front; i <= rear; i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    Queue q;
    q.initialize();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Front element: " << q.data[q.front] << endl;
    cout << "Rear element: " << q.data[q.rear] << endl;
    q.dequeue();
    cout << "Front element after dequeue: " << q.data[q.front] << endl;
    
    return 0;
}