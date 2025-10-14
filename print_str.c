/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgumienn <mgumienn@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:54:13 by mgumienn          #+#    #+#             */
/*   Updated: 2025/10/14 18:15:32 by mgumienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_str(char *str)
{
	int i;

	i = -1;
	if(!str)
		return(write(1, "(null)", 6));
	while (str[++i] != '\0')
		write(1, &str[i], 1);
	return (i);
}

int free_str(char *str)
{
	int len;

	len = print_str(str);
	free(str);
	return (len);
}
