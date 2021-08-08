#include <iostream>
using namespace std;

const int MAX = 10;
int size = 0;
struct stack {
    int top;
    int items[MAX];
};

void createStack(struct stack* st){
    st->top = -1;
}

int isFull(struct stack* st){
    if(st->top == MAX - 1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct stack* st){
    if(st->top == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack* st, int newItem){
    if(isFull(st)){
        cout<< "Stack Is Full";
    }else{
        st->top++;
        st->items[st->top] = newItem;
    }
    size++;
}

void pop(struct stack* st){
    if(isEmpty(st)){
        cout << "Stack Is Emptty";
    }else{
        st->top--;
    }
    size--;
}

void showValues(struct stack* st){
    for(int i=0; i<size;i++){
        cout<< st->items[i] << " ";
    }
    cout<< endl;
}

int main(){
    struct stack* st  = new stack();
    createStack(st);
    cout<< st->top << endl;
    cout<< isFull(st) << endl;
    cout<< isEmpty(st) << endl;
    
    push(st, 2);
    push(st, 3);
    push(st, 8);
    push(st, 6);
    push(st, 12);

    showValues(st);

    pop(st);
    showValues(st);

    return 0;
}