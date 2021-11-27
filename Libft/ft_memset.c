/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:19:29 by mmohamme          #+#    #+#             */
/*   Updated: 2021/11/10 20:42:11 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n)
	{
		*p++ = (unsigned char)c;
		n--;
	}
	return (s);
}

/*
int main () {
    int i = 0;
    char str[50] = "Hada string";

    ft_memset(str,'$',7);
    while (str[i])
    {
        printf("%c",str[i]);
        i++;
    }
    return(0);
}
*/
