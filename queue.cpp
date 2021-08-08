#include <iostream>
using namespace std;

const int SIZE = 5;

class Queue{
    int items[SIZE], front, rear;

        public:
    Queue(){
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if( front == 0 && rear == SIZE - 1) {
            return true;
        }else{
            return false;
        }
    }

    bool isEmpty() {
        if(front == -1) {
            return true;
        }else{
            return false;
        }
    }

    void enQueue(int item){
        if(isFull()) {
            cout << "Queue Is Full!";
        } else{
            if (front == -1) front = 0;
            rear++;
            items[rear] = item;
        }
    }

    int deQueue(){
        int item;
        if(isEmpty()) {
            cout << "Queue Is Empty!";
            return -1;
        } else {
            item = items[front];
            if (front >= rear){
                front = -1;
                rear = -1;
            } else {
                front++;
            }
            return item;
        }
    }

    void display() {
        if (isEmpty()){
            cout << "Queue Is Empty";            
        } else {
            for (int i=front; i <= rear; i++ ) {
                cout << items[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enQueue(1);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(2);

    q.display();

    q.deQueue();
    q.deQueue();

    q.display();
    
    return 0;
}