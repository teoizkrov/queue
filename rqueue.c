#include <stdlib.h>
#include "hqueue.h"

struct Node
{
    int data;
    struct Node *next;

};

struct Queue
{
    struct Node *head;
    struct Node *tail;

};

struct Queue new_queue() 
{
    struct Queue q;
    q.head = q.tail = NULL;
    return q;
}

int isempty( struct Queue *q )
{
   return q->head == NULL; 
}

void enqueue( struct Queue *q, int data )
{
    struct Node *temp = malloc( sizeof( struct Node ));
    temp->data = data;
    if( q->head == NULL )
        q->head = q->tail = temp;
    else
    {
        q->tail-> next = temp;
        q->tail = q->tail->next;
    }    


}

int dequeue( struct Queue *q )
{
    

    return 0;
}

int peek( struct Queue *q )
{

    return 0;
}


int main( int argc, char* argv[] )
{

    return 0;

}
