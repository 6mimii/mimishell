/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokens.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed-doudi-baltit <mohamed-doudi-bal    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:19:43 by mohamed-dou       #+#    #+#             */
/*   Updated: 2024/10/22 15:26:49 by mohamed-dou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void    set_lower_token(char *line, int *i, t_token **tokens)
{
    if (line[*i])
    {
        if (line[*i + 1] == '<')
        {
            create_token_lst(tokens, T_DL, ft_strdup("<<"), 0);
            *i += 2;
        }
        else
        {
            create_token_lst(tokens, T_DL, ft_strdup("<"), 0);
            *i += 1;
        }
    }
}