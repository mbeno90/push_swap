#include "../push_swap.h"

void sort_three_low(t_stack_node **a, t_stack_node **b, int second, int third)
{
    if (second < third) //012
        return ;
    else if (second > third) //021
    {
        pb(a, b);
        ra(a);
        pa(a, b);
    }
}
void sort_three_mid(t_stack_node **a, t_stack_node **b, int first, int second)
{
    if (first > second) //102
    {
    pb(a, b);
    pb(a, b);
    rb(b);
    pa(a, b);
    pa(a, b);
    }
    else if (first < second) //120
    rra(a);
}
void sort_three_high(t_stack_node **a, t_stack_node **b, int first, int second)
{
    if (first > second) // 210
    {
        pb(a, b);
        ra(a);
        pa(a, b);
        ra(a);
    }
    else if (first < second) // 201
        ra(a);
}

void sort_three(t_stack_node **a, t_stack_node **b)
{
    int first;
    int second;
    int third;

    first = (*a)->index;
    second = (*a)->next->index;
    third = (*a)->next->next->index;
     
    if (first < second && first < third)
        sort_three_low(a, b, second, third);
    else if (first > second && first > third)    
        sort_three_high(a, b, first, second);
    else
        sort_three_mid(a, b, first, second);
}