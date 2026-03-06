#include "push_swap.h"

void sa(t_stack_node **a)
{
    t_stack_node *tmp;

    tmp = (*a)->next;
    (*a)->next = *a;
    *a = tmp;
}


void sb(t_stack_node **b)
{
    t_stack_node *tmp;

    tmp = (*b)->next;
    (*b)->next = *b;
    *b = tmp;
}

void ss(t_stack_node **a, t_stack_node **b)
{
    sa(a);
    sb(b);
}