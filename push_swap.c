#include "push_swap.h"

t_stack	init_stack(int capacity)
{
	t_stack	s;

	s.data = malloc(capacity * sizeof(int));
	s.size = 0;
	s.capacity = 0;
	return (s);
}

void	push(t_stack *s, int value)
{
	s->data[s->size + 1] = value;
	s->size++;
}

int	pop(t_stack *s)
{
	if (s->size <= 0)
		return (-1);
	return (s->data[s->size]);
}

int	is_sorted(t_stack *s)
{
	int	i;

	i = 0;
	while (i < s->size - 1)
	{
		if (s->data[i] > s->data[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	swap(t_stack *s)
{
	int	tmp;

	if (s->size < 2)
		return ;
	tmp = s->data[s->size - 1];
	s->data[s->size - 1] = s->data[s->size];
	s->data[s->size] = tmp;
}
