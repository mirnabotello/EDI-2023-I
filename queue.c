#include <stdio.h>

#define QUEUE_CAPACITY 10

struct queue {

    int data[QUEUE_CAPACITY + 1];
    int start;
    int end;
    int count;
};

void setupQueue(struct queue *q);
int isQueueEmpty(struct queue q);
int isQueueFull(struct queue q);
int enqueue(struct queue *q, int value);

int main()
{
    struct queue studentQueue;

    setupQueue(&studentQueue);

    // 1.  Función que nos regrese un 1 si la cola está vacía y un 0 si no
    // 2.  Función que nos regrese un 1 si la cola está llena y un 0 si no
    // 3.  Insertar valores en la cola - enqueue
    //      Recibe la cola y el dato a insertar
    //      Regresa si pudo o no (1 pudo y 0 si no)
    // 4.  Sacar valores de la cola - dequeue
    // 5.  Función que imprima el contenido de la cola

    int empty = isQueueEmpty(studentQueue);
    int full = isQueueFull(studentQueue);

    int done;

    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);
    done = enqueue(&studentQueue, 10);


    printf("Hola Mundo!");

    return 0;
}

int enqueue(struct queue *q, int value)
{
    int r = 0;

    if(isQueueFull(*q) == 0) {

        // insertar
        q->data[q->end] = value;
        q->end++;  // Hay que checar

        if(q->end > QUEUE_CAPACITY)
            q->end = 0;

        // q->end = (q->end + 1) % (QUEUE_CAPACITY + 1);
        r = 1;
    }

    return r;
}

int isQueueFull(struct queue q)
{
    if((q.end + 1) % (QUEUE_CAPACITY + 1) == q.start) // llena
        return 1;
    return 0;
}

int isQueueEmpty(struct queue q)
{
    if(q.start == q.end) // Están en el mismo lugar
        return 1;
    return 0;

//    int r;
//
//    if(q.start == q.end)
//        r = 1;
//    else
//        r = 0;
//
//    return r;
}

void setupQueue(struct queue *q)
{
    q->start = 0;
    q->end = 0;

    q->count = 0;
}