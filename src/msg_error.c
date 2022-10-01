/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:52:21 by fpektas           #+#    #+#             */
/*   Updated: 2022/09/10 20:52:51 by fpektas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_parent_error(t_data *data, int i)
{
	free(data->buffer);
	ft_map_free(data);
	if (i == 2)
		map_line_boundry_error();
	else if (i == 3)
		map_left_right_wall_error();
	else if (i == 4)
		map_bottom_or_top_error();
	else
		ft_printf("Error\nSomething is missing on the map, error!!\n");
	exit(1);
}

void	map_line_boundry_error(void)
{
	ft_printf("Error\nMap line too toooo long!!\n");
	exit(1);
}

void	map_bottom_or_top_error(void)
{
	ft_printf("Error\nMap top or bottom wall error!!\n");
	exit(1);
}

void	map_left_right_wall_error(void)
{
	ft_printf("Error\nMap left or right wall error!!\n");
	exit(1);
}

void	map_type_error(void)
{
	ft_printf("Error\n(.ber File Extension Error)\n");
	exit(1);
}
