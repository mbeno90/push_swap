#include "../push_swap.h"

void sa(t_stack_node **a)
{
    t_stack_node *tmp;

    tmp = (*a)->next;
    (*a)->next = *a;
    *a = tmp;
    write(1, "sa\n", 3);
}
void sb(t_stack_node **b)
{
    t_stack_node *tmp;

    tmp = (*b)->next;
    (*b)->next = *b;
    *b = tmp;
    write(1, "sb\n", 3);
}
void ss(t_stack_node **a, t_stack_node **b)
{
    sa(a);
    sb(b);
    write(1, "ss\n", 3);
}