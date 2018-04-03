/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <dchiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:25:47 by dchiche           #+#    #+#             */
/*   Updated: 2018/02/20 14:51:42 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int			ft_natoi(char *str)
{
	int		i;
	int		n;
	char	*cpy;

	i = 0;
	if (!(cpy = (char *)ft_memalloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (0);
	while (str[i] && ((str[i] >= 48 && str[i] <= 57) || str[i] == 45))
	{
		cpy[i] = str[i];
		i++;
	}
	n = ft_atoi(cpy);
	free(cpy);
	return (n);
}

int			ft_kill_parse(void)
{
	ft_putendl_fd("Fichier invalide /!\\", 2);
	exit(EXIT_FAILURE);
	return (0);
}
