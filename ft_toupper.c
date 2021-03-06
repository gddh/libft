/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 20:14:02 by delin             #+#    #+#             */
/*   Updated: 2018/04/19 20:20:49 by delin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	int diff;

	if ('a' <= c && c <= 'z')
	{
		diff = 'A' - 'a';
		return (diff + c);
	}
	return (c);
}
