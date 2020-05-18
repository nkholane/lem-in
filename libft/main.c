/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 15:30:08 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/06/21 16:23:09 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	str1[15];
	char	str2[15];
	char	*ret;

	ft_strcpy(str1, "Hello");
	ft_strcpy(str2, "World");
	ret = ft_strcat(str1, str2);
	ft_putstr(ret);
	return (0);
}
