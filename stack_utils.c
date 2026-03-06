#include "push_swap.h"

void add(int value, t_stack_node **a)
{
    t_stack_node *new_node;
   
    new_node = malloc(sizeof(t_stack_node));
    new_node->value = value;
    new_node->next = *a;
    *a = new_node;
}

void print_stack(t_stack_node *stack)
{
    t_stack_node *print_ptr;

    print_ptr = stack;
    while (print_ptr != NULL)
    {
        printf("%d\n", print_ptr->value);
        print_ptr = print_ptr->next;
    }
}
