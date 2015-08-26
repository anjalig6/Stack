typedef struct stack
{
    int top;
    unsigned int capacity;
    int *array;
}stack;

void push(stack *,int);

int pop(stack *);

int IsEmpty(stack *);

int IsFull(stack *s);
