/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:47:18 by fpektas           #+#    #+#             */
/*   Updated: 2022/01/17 15:00:08 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include	<stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	dll;

	dll = 0;
	while (s[dll] != '\0')
		dll++;
	return (dll);
}
/*
int	main()
{
	printf("%zu",ft_strlen("agshdhsajk"));
}
*/
