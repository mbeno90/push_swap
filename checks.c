#include "push_swap.h"

void check_numeric(char *argument)
{
    int i;

    i = 0;
    if (argument[0] == '-' || argument[0] == '+')
        i = 1;
    while(argument[i])
    {
        if (!ft_isdigit(argument[i]))
            return (0);
        i++;
    }
    return (1);
}
void check_overflow(long number)
{
    printf("checking: %ld\n", number);
	if (INT_MIN > number || number > INT_MAX)
    	return (0);
    return (1);
}

void check_duplicates(t_stack_node **stack)
{
    t_stack_node *current;
    t_stack_node *checker;

current = *stack;

while(current)
{
checker = current->next;
    while(checker)
    {
    if(checker-> value == current->value)
        return (0);
    checker = checker->next;
    }
current =  current->next;
}
return (1);
}