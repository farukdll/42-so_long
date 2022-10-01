/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:24:37 by fpektas           #+#    #+#             */
/*   Updated: 2022/01/21 15:54:18 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include	<stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*wq;
	size_t			dll;

	dll = 0;
	wq = (unsigned char *)b;
	while (dll < len)
	{
		wq[dll++] = c;
	}
	return (wq);
}
/*
int	main()
{
	char str[] = "leonardo";
	printf("%s",ft_memset(str, 'b', 3));
}
*/
