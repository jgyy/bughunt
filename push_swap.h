#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_stack
{
	int	*data;
	int	size;
	int	capacity;
}	t_stack;

t_stack	init_stack(int capacity);
void	push(t_stack *s, int value);
int	pop(t_stack *s);
int	is_sorted(t_stack *s);
void	swap(t_stack *s);

#endif
