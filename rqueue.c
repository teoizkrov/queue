#include <stdlib.h>
#include "hqueue.h"
int main( int argc, char* argv[] )
{

    return 0;

}

struct Node
{
    int data;
    struct Node *next;

}

struct Queue
{
    struct Node *head;
    struct Node *tail;

}

struct Queue new_queue() 
{
    struct Queue q;
    q.head = q.tail = NULL;
    return q;
}

int isempty()
{
   return 1; 
}

int peek()
{



    return 0;
}

void enqueue()
{


    return;

}

int dequeue()
{


    return 0;
}


