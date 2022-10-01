/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:56:48 by fpektas           #+#    #+#             */
/*   Updated: 2022/01/26 12:53:07 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include	<stdio.h>

char	*ft_strdup(const char *s)
{
	size_t	a;
	char	*b;

	a = ft_strlen(s);
	b = (char *)malloc(sizeof(char) * (a + 1));
	if (b == NULL)
		return (NULL);
	b[a] = 0;
	while (a--)
		b[a] = s[a];
	return (b);
}
/*
int	main()
{
	printf("%s", ft_strdup("ninja kaplumbağalar"));
}
*/
