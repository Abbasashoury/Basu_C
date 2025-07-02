#include <iostream>
using namespace std;

struct Student {
    string name;
    float score;
};

struct Queue {
    Student data[10];  
    int front = 0;
    int rear = -1;
    int size = 0;
};

bool isEmpty(Queue* q) {
    return q->size == 0;
}

bool isFull(Queue* q) {
    return q->size == 10;
}

void addqueue(Queue* q, string name, float score) {
    if (isFull(q)) {
        cout << "Queue is full. Cannot addqueue.\n";
        return;
    }
    q->rear++;
    q->data[q->rear].name = name;
    q->data[q->rear].score = score;
    q->size++;
}

void dequeue(Queue* q) {
    if (isEmpty(q)) {
        cout << "Queue is empty. Cannot dequeue.\n";
        return;
    }
    cout << "Removed: " << q->data[q->front].name << ", " << q->data[q->front].score << endl;
    q->front++;
    q->size--;
}


void printQueue(Queue* q) {
    if (isEmpty(q)) {
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Queue content:\n";
    for (int i = q->front; i <= q->rear; i++) {
        cout << q->data[i].name << "\t" << q->data[i].score << endl;
    }
}

int main() {
    Queue q;

    addqueue(&q, "Ali", 18.5);
    addqueue(&q, "Sara", 17);
    addqueue(&q, "Reza", 19);
    printQueue(&q);

    dequeue(&q);
    printQueue(&q);

    return 0;
}
