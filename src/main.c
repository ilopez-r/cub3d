/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:15:11 by alirola-          #+#    #+#             */
/*   Updated: 2024/06/19 17:18:13 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

static void	init_struct(t_data *data)
{
	data->fd = 0;
	data->line = NULL;
	data->texture_count = 0;
	data->no = NULL;
	data->we = NULL;
	data->ea = NULL;
	data->so = NULL;
	data->ceiling = NULL;
	data->floor = NULL;
	data->char_pos = 0;
	data->width_map = 0;
	data->height_map = 0;
}

static int	check_extension(char *s)
{
	int	i;

	i = ft_strlen(s);
	if (s[i - 1] != 'b' || s[i - 2] != 'u' || s[i - 3] != 'c'
		|| s[i - 4] != '.')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc != 2)
		return (printf("Error: invalid num of args\n"), 1);
	if (check_extension(argv[1]) == 1)
		return (printf("Error: invalid map extension\n"), 1);
	init_struct(&data);
	if (parser(&data, argv[1]) == 1)
		return (1);
	if (start_game(&data))
		return (free_all(&data), 1);
	return (free_all(&data), 0);
}
