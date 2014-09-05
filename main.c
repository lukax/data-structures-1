#include <stdio.h>
#include "stack.h"
#include "queue.h"

int main()
{
    /*Stack *s = stack_init();
    stack_push(s, 5);
    stack_push(s, 1);
    stack_push(s, 6);
    stack_print(s);
	*/

	Queue *q = queue_init();
	queue_enqueue(q, 5);
	queue_enqueue(q, 1);
	queue_enqueue(q, 9);

	queue_print(q);

	getchar();
    return 0;
}
