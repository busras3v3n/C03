/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:25:18 by busseven          #+#    #+#             */
/*   Updated: 2024/07/18 10:44:39 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strsize(char *c)
{
	int	count;

	count = 0;
	while (c[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	destlength;
	int	i;

	destlength = ft_strsize(dest);
	i = 0;
	while (src[i] != 0)
	{
		dest[destlength + i] = src[i];
		i++;
	}
	dest[destlength + i] = '\0';
	return (dest);
}
