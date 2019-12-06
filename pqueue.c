#include <stdlib.h>
#include <stdio.h>
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
    if( q->head != NULL )
    {
        int temp = q->head->data;
        if( q->head == q->tail )
        {
            free( q->head );
            q->head = NULL;
            q->tail = NULL;
        }
        else
        {
            struct Node *temp = q->head;
            q->head = q->head->next;
            free( temp );
        }

        return temp;
    }
    exit( 1 );
}

int peek( struct Queue *q )
{

    return q->head->data;
}


int main( int argc, char *argv[] )
{

    
    struct Queue q = new_queue();
    int i;
    for( i = 0; i < 10; i++ )
        enqueue( &q, i );
    while( !isempty( &q ) )
    {
        printf( "%d\n", dequeue( &q ) );
    }    
}
