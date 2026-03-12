#include "../push_swap.h"



void ra(t_stack_node **a)
{
    t_stack_node *tmp;
    t_stack_node *first;


    first = *a;
    tmp = *a;
    (*a) = tmp->next;
     while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    first->next = NULL;
    tmp->next = first;
    write(1, "ra\n", 3);
}

void rb(t_stack_node **b)
{
    t_stack_node *tmp;
    t_stack_node *first;


    first = *b;
    tmp = *b;
    (*b) = tmp->next;
     while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    first->next = NULL;
    tmp->next = first;
    write(1, "rb\n", 3);
}
void rr(t_stack_node **a, t_stack_node **b)
{
    ra(a);
    rb(b);
    write(1, "rr\n", 3);
}
void rra(t_stack_node **a)
{
    t_stack_node *tmp;
    t_stack_node *last;

    tmp = *a;

    while(tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    last = tmp->next;
    tmp->next = NULL;
    last->next = *a;
    *a = last;
    write(1, "rra\n", 4);
}

void rrb(t_stack_node **b)
{
    t_stack_node *tmp;
    t_stack_node *last;

    tmp = *b;
    while(tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    last = tmp->next;
    tmp->next = NULL;
    last->next = *b;
    *b = last;
    write(1, "rrb\n", 4);
}

void rrr(t_stack_node **a, t_stack_node **b)
{
  rra(a);
  rrb(b);
  write(1, "rrr\n", 4);
}


// int main(void)
// {
//     t_stack_node *a;
//     t_stack_node *b;
    
//     a = NULL;
//     b = NULL; 

//     add(6, &a);
//     add(5, &a);
//     add(4, &a);
//     add(3, &a);
//     add(2, &a);
//     add(1, &a);
//     printf("Stack A before Ra: \n");
//     print_stack(a);

//     ra(&a);
//     printf("Stack A after RA:\n");
//     while(a != NULL)
//     {
//         printf("%d\n", a->value);
//         a = a->next;
//     }

//     add(50, &b);
//     add(40, &b);
//     add(30, &b);
//     add(20, &b);
//     add(10, &b);
//     add(0, &b);

//     printf("Stack B before RRB: \n");
//     print_stack(b);

//     rrb(&b);

   

//     printf("Stack B after RRB:\n");
//      while(b != NULL)
//     {
//         printf("%d\n", b->value);
//         b = b->next;
//     }
// }
   