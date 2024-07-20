/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:47:42 by busseven          #+#    #+#             */
/*   Updated: 2024/07/19 19:58:21 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	c;
	unsigned int	sum;

	j = 0;
	i = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	while (src[c] != '\0')
		c++;
	sum = i + c;
	while (src[j] != '\0' && i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (sum);
}
