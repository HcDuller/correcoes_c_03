/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:35:15 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/13 15:25:05 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ex03/ft_strncat.c"

int	main(void)
{
	char *s1;
	char *s2;
	int n;

	s1 = calloc(26, sizeof(char));
	s2 = calloc(13, sizeof(char));
	

	printf("================================EX03===================================\n");
	printf("=======================================================================\n");
	strcpy(s1, "This is Dest:");
	strcpy(s2, "This is Src.");
	n = 13;
	printf("		src: %s	dest: %s	\n", s2, s1);
    strncat(s1, s2, n);
    printf("		strcat(n=%d):		%s\n", n, s1);	
	strcpy(s1, "This is Dest:");
	strcpy(s2, "This is Src.");	
	ft_strncat(s1, s2, n);
	printf("		ft_strncat(n=%d):	%s\n", n, s1);
	printf("=======================================================================\n");
	strcpy(s1, "This is Dest:");
	strcpy(s2, "This is Src.");
	n = 5;
	printf("		src: %s	dest: %s	\n", s2, s1);
    strncat(s1, s2, n);
    printf("		strcat(n=%d):		%s\n", n, s1);	
	strcpy(s1, "This is Dest:");
	strcpy(s2, "This is Src.");	
	ft_strncat(s1, s2, n);
	printf("		ft_strncat(n=%d):	%s\n", n, s1);
	printf("=======================================================================\n");
	strcpy(s1, "This is Dest:");
	strcpy(s2, "This is Src.");
	n = 0;
	printf("		src: %s	dest: %s	\n", s2, s1);
    strncat(s1, s2, n);
    printf("		strcat(n=%d):		%s\n", n, s1);	
	strcpy(s1, "This is Dest:");
	strcpy(s2, "This is Src.");	
	ft_strncat(s1, s2, n);
	printf("		ft_strncat(n=%d):	%s\n", n, s1);	
	printf("================================FIM====================================\n");

	free(s1);
	free(s2);
	return (0);
}
