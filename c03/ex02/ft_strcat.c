/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:20:26 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/17 17:47:25 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (dest[length])
	{
		length++;
	}
	while (src[i])
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
