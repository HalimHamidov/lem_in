/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimelda <aimelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 22:19:44 by aimelda           #+#    #+#             */
/*   Updated: 2019/09/09 16:28:41 by aimelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	char	*dest;

	dest = dst;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dst);
}
