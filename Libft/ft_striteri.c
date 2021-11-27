/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:11:06 by mmohamme          #+#    #+#             */
/*   Updated: 2021/11/23 00:27:15 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void    f(unsigned int a, char *b)
{
    (*b)++;
    (void)a;
}

int main()
{
    int i = 0;
    // char *out_str;
    // out_str = ;
    char s[20] = "abcd";
    ft_striteri(s,&f);
    printf("%s",s);
}

*/
