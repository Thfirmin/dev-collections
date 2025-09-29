#include <stdlib.h>

// Linear Singly Linked List
t_ls_linked_list	*lsll_new(void)
{
	t_ls_linked_list	*lsll;

	lsll = (t_ls_linked_list *)malloc(sizeof(t_ls_linked_list));
	return (lsll);
}

// Linear Singly Linked List
t_rs_linked_list	*rsll_new(void)
{
	t_rs_linked_list	*rsll;

	rsll = (t_rs_linked_list *)malloc(sizeof(t_rs_linked_list));
	return (rsll);
}

// Linear Singly Linked List
t_ld_linked_list	*ldll_new(void)
{
	t_ld_linked_list	*ldll;

	ldll = (t_ld_linked_list *)malloc(sizeof(t_ld_linked_list));
	return (ldll);
}

// Linear Singly Linked List
t_rd_linked_list	*rdll_new(void)
{
	t_rd_linked_list	*rdll;

	rdll = (t_rd_linked_list *)malloc(sizeof(t_rd_linked_list));
	return (rdll);
}
