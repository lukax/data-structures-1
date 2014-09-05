typedef struct Stack_ Stack;

Stack *stack_init();
void stack_push(Stack *s, int elem);
int stack_pop(Stack *s);
void stack_free(Stack *s);
int stack_isemtpty(Stack *s);
