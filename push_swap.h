#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

typedef struct s_stack_node
{
    int                 value;
    int                 index;
    struct s_stack_node *next;
} t_stack_node;


//Stack Handling
void add(int value, t_stack_node **a);
void print_stack(t_stack_node *stack);

//Utilities
int	ft_atoi(const char *nptr);
int	ft_isdigit(int d);

//Error checks
void check_duplicates(t_stack_node **stack);
void check_overflow(long number);
void check_numeric(char *argument);