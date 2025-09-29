#ifndef DEVCOL_LINKED_LIST
# define DEVCOL_LINKED_LIST

// Singly node
typedef struct s_snode
{
	void	*data;
	s_snode	*next;
}	t_snode;

// Double node
typedef struct s_dnode
{
	void	*data;
	s_tnode	*next;
	s_tnode	*prev;
}	t_dnode;

// Linear Singly Linked List
typedef struct s_ls_linked_list
{
	t_snode	*head;
	size_t	size;
};

// Rotative Singly Linked List
typedef struct s_rs_linked_list
{
	t_snode	*head;
	t_snode	*tail;
	size_t	size;
};

// Linear Double Linked List
typedef struct s_ld_linked_list
{
	t_dnode	*head;
	size_t	size;
};

// Rotative Double Linked List
typedef struct s_rd_linked_list
{
	t_dnode	*head;
	t_dnode	*tail;
	size_t	size;
};

#endif
