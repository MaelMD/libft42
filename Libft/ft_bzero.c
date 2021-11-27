/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:00:03 by mmohamme          #+#    #+#             */
/*   Updated: 2021/11/21 17:40:40 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i++;
	}
}

/*
int main()
{
	int		tab[3] = {1, 2, 3};
	ft_bzero(tab, 3 * sizeof(int));
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
}
*/
