/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_token.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihermell <ihermell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 01:26:22 by ihermell          #+#    #+#             */
/*   Updated: 2015/05/11 23:22:27 by ihermell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"

void			clear_token(t_lexer *lexer)
{
	lexer->token_length = 0;
}
