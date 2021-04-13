/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:50:06 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/13 03:27:56 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ex05/ft_strlcat.c"

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	int o;
	int n;

	s1 = calloc(28, sizeof(char));
	s2 = calloc(19, sizeof(char));
	s3 = calloc(28, sizeof(char));
	s4 = calloc(19, sizeof(char));
	
	printf("================================EX05===================================\n");
	printf("=======================================================================\n\n");
	printf("Original values:\n");
	strcpy(s1, "This is the dest.");
	strcpy(s2, "This is the source");
	strcpy(s3, "This is the dest.");
	strcpy(s4, "This is the source");
	printf("Dest:	%s	Src:	%s\n\n", s1, s2);
	o = strlcat(s1, s2, 28);
    n = ft_strlcat(s3, s4, 28);
    printf("strlcat:	%s	strlcat(retorno):	%d\n", s1, o);		
    printf("ft_strlcat:	%s	ft_strlcat(retorno):	%d\n", s3, n);
	printf("================================FIM====================================\n");
	printf("=======================================================================\n");
	free(s1);
	free(s2);
	return (0);
}
