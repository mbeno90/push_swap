#include "../push_swap.h"

int is_sorted(t_stack_node **a)
{
    t_stack_node *current;
    int          current_value;

    current = *a;
    while(current->next != 0)
    {
        current_value = current->value;
        current = current->next;
        if (current_value > current->value)
            return (0);
    }
    return (1);
}