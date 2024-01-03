#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

struct Node {
    int data;
    int priority;
    struct Node* next;
};

struct queue {
    struct Node *front, *rear;
    int size;
    int capacity;
};

struct queue *create_queue(int cap);
void enqueue(struct queue *q);
int dequeue(struct queue *q);
bool isfull(struct queue *q);
bool isempty(struct queue *q);

int main() {
    int capacity;
    struct queue *q1 = NULL;
    printf("Please enter the capacity of the priority queue\n");
    scanf("%d", &capacity);

    q1 = create_queue(capacity);

    printf("Before metadata: rear %p front %p capacity %d size %d\n", (void *)q1->rear, (void *)q1->front, q1->capacity, q1->size);

    enqueue(q1);
    printf("After metadata: rear %p front %p capacity %d size %d\n", (void *)q1->rear, (void *)q1->front, q1->capacity, q1->size);
    printf("Data is %d with priority %d\n", q1->rear->data, q1->rear->priority);

    enqueue(q1);
    printf("Data is %d with priority %d\n", q1->rear->data, q1->rear->priority);
    enqueue(q1);
    printf("Data is %d with priority %d\n", q1->rear->data, q1->rear->priority);
    enqueue(q1);
    printf("Data is %d with priority %d\n", q1->rear->data, q1->rear->priority);

    printf("Dequeue: %d\n", dequeue(q1));
    printf("After metadata: rear %p front %p capacity %d size %d\n", (void *)q1->rear, (void *)q1->front, q1->capacity, q1->size);
    printf("Dequeue: %d\n", dequeue(q1));
    printf("After metadata: rear %p front %p capacity %d size %d\n", (void *)q1->rear, (void *)q1->front, q1->capacity, q1->size);

    enqueue(q1);
    printf("Data is %d with priority %d\n", q1->rear->data, q1->rear->priority);
    printf("Dequeue: %d\n", dequeue(q1));
    printf("Dequeue: %d\n", dequeue(q1));
    printf("Dequeue: %d\n", dequeue(q1));

    return 0;
}

struct queue *create_queue(int cap) {
    struct queue *q = malloc(sizeof(struct queue));

    if (q == NULL) {
        printf("Unable to allocate memory\n");
        exit(0);
    }

    q->capacity = cap;
    q->front = q->rear = NULL;
    q->size = 0;

    return q;
}

bool isfull(struct queue *q) {
    return q->size == q->capacity;
}

bool isempty(struct queue *q) {
    return q->size == 0;
}

void enqueue(struct queue *q) {
    if (isfull(q)) {
        printf("Overflow: Priority Queue is full\n");
        return;
    }

    int data, priority;
    printf("Please enter data and priority to enqueue: ");
    scanf("%d %d", &data, &priority);

    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Unable to allocate memory for a new node\n");
        exit(0);
    }

    newNode->data = data;
    newNode->priority = priority;
    newNode->next = NULL;

    if (q->rear == NULL || priority > q->rear->priority) {
        // Insert at the beginning for higher priority
        newNode->next = q->front;
        q->front = newNode;
    } else {
        struct Node *temp = q->front;
        while (temp->next != NULL && temp->next->priority >= priority) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    if (q->rear == NULL) {
        q->rear = newNode;
    }

    q->size++;
}

int dequeue(struct queue *q) {
    if (isempty(q)) {
        printf("Underflow: Priority Queue is empty\n");
        return INT_MIN;
    }

    struct Node *temp = q->front;
    int data = temp->data;

    q->front = q->front->next;
    free(temp);
    q->size--;

    return data;
}
