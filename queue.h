typedef struct Queue_ Queue;

Queue *queue_init();
void queue_enqueue(Queue *q, int elem);
int *queue_dequeue(Queue *q);
void queue_free(Queue *q);
int queue_isemtpty(Queue *q);

void queue_print(Queue *q);