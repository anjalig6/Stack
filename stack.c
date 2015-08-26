#include "stack.h"

int IsEmpty(stack *s)
{
    return s->top==-1;
}

int IsFull(stack *s)
{
    return s->top==s->capacity-1;
}

void push(stack *s,int item)
{
    if(IsFull(s))
        return ;

    s->top=s->top+1;
    s->array[s->top]=item;
}

int pop(stack *s)
{   
    int item;

    if(IsEmpty(s))
        return;

    item=s->top;
    s->top=s->top-1;

    return s->array[item];
}





