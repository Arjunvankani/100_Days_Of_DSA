#include <bits/stdc++.h> 
class Queue {
    int *arr;
    int first=0;
    int rear =0;
public:
    Queue() {
        arr = new int[5000];
        this->first = 0;
        this->rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(this->first == this->rear){
            return 1;
        }
        else
            return 0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(this->rear <= 5000){
            this->arr[this->rear++] = data;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(this->first == this->rear){
            return -1;
        }
        else{
            int v = this->arr[this->first++];
            if(this->first == this->rear){
                this->first =0;
                this->rear = 0;

            }
            return v;
        }
    }

    int front() {
        // Implement the front() function
        if(this->first != this->rear){
            return this->arr[this->first];
        }
        return -1;
    }
};
