#include <token.h>

void	push_back_token_list(t_token *token, t_token **tk_list)
{
	t_token		*tmp;

	tmp = *tk_list;
	while (tmp && tmp->next)
		tmp = tmp->next;
	if (tmp)
		tmp->next = token;
	else
		*tk_list = token;
}
