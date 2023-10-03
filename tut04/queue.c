#include <stdio.h>

typedef struct stack {
    // Stack definition goes here
} *Stack;

// Creates a new empty stack
Stack StackNew(void);

// Pushes an item onto the stack
void StackPush(Stack s, int item);

// Pops an item from the stack and returns it
// Assumes that the stack is not empty
int StackPop(Stack s);

// Returns the number of items on the stack
int StackSize(Stack s);

struct queue {
	Stack s1;
	Stack s2;
};

typedef struct queue *Queue;

Queue QueueNew(void) {
	Queue q = malloc(sizeof(struct queue));
	q->s1 = StackNew();
	q->s2 = StackNew();
	return q;
}

void QueueEnqueue(Queue q, int item) {
	// TODO
}

int QueueDequeue(Queue q) {
	// TODO
}