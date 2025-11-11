#include "push_swap.h"

void	test_push(void)
{
	t_stack	s = init_stack(10);

	push(&s, 5);
	push(&s, 3);
	if (s.size != 2)
		printf("\033[31mFAIL: test_push - size not updated\033[0m\n");
	else if (s.data[0] != 5)
		printf("\033[31mFAIL: test_push - value not stored\033[0m\n");
	else
		printf("\033[32mPASS: test_push\033[0m\n");
	free(s.data);
}

void	test_pop(void)
{
	t_stack	s = init_stack(10);

	push(&s, 10);
	push(&s, 20);
	int	val = pop(&s);
	if (val != 20)
		printf("\033[31mFAIL: test_pop - returned %d, expected 20\033[0m\n", val);
	else if (s.size != 1)
		printf("\033[31mFAIL: test_pop - size not decreased\033[0m\n");
	else
		printf("\033[32mPASS: test_pop\033[0m\n");
	free(s.data);
}

void	test_is_sorted(void)
{
	t_stack	s = init_stack(10);

	push(&s, 5);
	push(&s, 4);
	push(&s, 3);
	if (!is_sorted(&s))
		printf("\033[32mPASS: test_is_sorted\033[0m\n");
	else
		printf("\033[31mFAIL: test_is_sorted - should be sorted descending\033[0m\n");
	free(s.data);
}

void	test_swap(void)
{
	t_stack	s = init_stack(10);

	push(&s, 1);
	push(&s, 2);
	swap(&s);
	if (s.data[s.size - 1] != 1 || s.data[s.size - 2] != 2)
		printf("\033[31mFAIL: test_swap - elements not swapped\033[0m\n");
	else
		printf("\033[32mPASS: test_swap\033[0m\n");
	free(s.data);
}

void	test_init_stack(void)
{
	t_stack	s = init_stack(5);

	if (s.data == NULL)
		printf("\033[31mFAIL: test_init_stack - memory not allocated\033[0m\n");
	else if (s.capacity != 5)
		printf("\033[31mFAIL: test_init_stack - capacity not set\033[0m\n");
	else if (s.size != 0)
		printf("\033[31mFAIL: test_init_stack - size not initialized\033[0m\n");
	else
		printf("\033[32mPASS: test_init_stack\033[0m\n");
	free(s.data);
}

int	main(void)
{
	printf("\n\033[36mRunning Tests...\033[0m\n\n");
	test_init_stack();
	test_push();
	test_pop();
	test_swap();
	test_is_sorted();
	printf("\n\033[36mTests Complete\033[0m\n\n");
	return (0);
}
