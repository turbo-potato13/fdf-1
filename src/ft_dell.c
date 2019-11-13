/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dell.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwalda-r <dwalda-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:16:01 by dwalda-r          #+#    #+#             */
/*   Updated: 2019/08/07 16:39:30 by dwalda-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_dell(char ***s)
{
	int		i;

	i = 0;
	while ((*s)[i] != NULL)
	{
		free((*s)[i]);
		(*s)[i++] = NULL;
	}
	free((*s)[i]);
	(*s)[i] = NULL;
	free(*s);
	*s = NULL;
}