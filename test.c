#include "push_swap.h"

static void	index_stack(t_node *stack);
static int	find_cheapest(t_node *stack_a, int limit);

static int	find_cheapest(t_node *stack_a, int limit)
{
	int		index_top;
	int		index_bot;
	t_node	*current;

	index_top = 0;
	index_bot = 0;
	current = stack_a;
	while (current && current->index > limit)
	{
		current = current->next;
		index_top++;
	}
	current = stack_a;
	while (current)
	{
		if (current->index <= limit)
			index_bot = node_len(current);
		current = current->next;
	}
	if (index_top <= index_bot)
		return (index_top);
	return (index_bot * -1);
}
static void	index_stack(t_node *stack)
{
	t_node	*current;
	t_node	*head;
	int		index;

	current = stack;
	index = 0;
	while (current)
	{
		head = stack;
		while (head)
		{
			if (current->value > head->value)
				index++;
			head = head->next;
		}
		current->index = index;
		index = 0;
		current = current->next;
	}
}

int	main(int args, char **argv)
{
    t_node *stack_a;
    t_node *head;
    t_node *stack_b;

    stack_a = NULL;
    stack_b = NULL;

    parse_argv(argv, &stack_a);
    index_stack(stack_a);
    move_a(&stack_a, &stack_b);
	head = stack_b;
    while (head)
    {
        printf("%d\n", head->index);
        head = head->next;
    }
    
    return (0);
}