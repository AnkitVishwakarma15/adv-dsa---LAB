// circular queue using array
/*
#include<bits/stdc++.h>
using namespace std;
#define SIZE 5
class circularQueue{
    int queue[SIZE];
    int front,rear;
    public:
    circularQueue(){
        front = -1;
        rear = -1;
    }
    // Insert element 
    void enqueue(int value){
        if((rear + 1)% SIZE == front){
            cout<<"Queue is full" <<endl;
            return;
        }
        if(front == -1){
            front = 0;
        }
        rear = (rear +1) % SIZE;
        queue[rear] = value;
        cout<<value << "inserted" <<endl;
    }

    // delete element 
    void dequeue(){
        if(front == -1){
            cout<<"Queue is empty" <<endl;
            return;
        }
        cout<< queue[front] <<"deleted"<<endl;
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else
        front = (front + 1)% SIZE;
    }
    void display(){
        if(front == -1){
            cout<<"Queue is Empty"<<endl;
        }
        cout<<"Circular Queue: ";
        int i = front;
        while(true){
            cout<< queue[i]<<" ";
            if(i == rear)
            break;
            i = (i + 1) % SIZE;
        }
        cout<<endl;
    }
};
int main(){
    circularQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    q.dequeue();
    q.display();


}
*/ 

// circular queue using linkedlist 
#include<iostream>
using namespace std;
 class Node
 {
    int data;
    Node* next;
 };
 
 class Queue {
    Node* front;
    Node* rear;
    public:
    Queue(){
        front = rear = NULL;
    }
    bool isEmpty(){
        return front == NULL;
    }
    void enqueue(int info){
        
    }
 };
 