/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:42:04 by fpektas           #+#    #+#             */
/*   Updated: 2022/02/09 15:55:22 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include	<stdio.h>

void	*ft_calloc(size_t size, size_t count)
{
	void	*num;

	num = malloc(count * size);
	if (num == NULL)
		return (num);
	ft_bzero(num, size * count);
	return (num);
}
/*
int	main()
{
	int	*a = ft_calloc(10, sizeof(int));
	printf("%d", *a);
}
*/
