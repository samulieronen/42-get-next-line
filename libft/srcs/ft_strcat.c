/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:45:08 by seronen           #+#    #+#             */
/*   Updated: 2019/10/29 16:56:42 by seronen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int k;

	i = 0;
	k = 0;
	if (!s1 && !s2)
		return (0);
	if (s2[0] == '\0')
		return (s1);
	while (s1[i] != '\0')
		i++;
	while (s2[k] != '\0')
	{
		s1[i + k] = s2[k];
		k++;
	}
	s1[i + k] = '\0';
	return (s1);
}
