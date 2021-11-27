/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 01:12:57 by mmohamme          #+#    #+#             */
/*   Updated: 2021/11/23 00:26:08 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*str;

	i = 0;
	str = (char *) haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (str);
	while (str[i] != '\0' && i < len)
	{
		c = 0 ;
		while (str[i + c] != '\0' && needle[c] != '\0'
			&& str[i + c] == needle[c] && i + c < len)
			c ++;
		if (c == n_len)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char *searchingFor = "Hada String";
	const char *in = "Hada Tahowa String kn9lbo 3la Hada String west mn had string";
    printf("found: %s\n", ft_strnstr(in, searchingFor, ft_strlen(in)));
    return 0;
}
*/
