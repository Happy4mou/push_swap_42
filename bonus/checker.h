/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 21:45:40 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/19 16:16:04 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node
{
	int			data;
	struct node	*next;
}				t_node;

typedef struct funstack_a
{
	int			x;
	int			i;
	int			j;
	char		**p;
}				t_funstack_a;

char			*ft_strdup(const char *s1);
char			*get_next_line(int fd, char **tmp);
char			*ft_strchr(char *s, int c);
char			*ft_strjoin(char *s1, char *s2);
char			*get_line_r(char *src);
char			*get_los(char *src);
char			*get_next(int fd, char *bufjoin);
size_t			ft_strlen(const char *s);
int				checkai(int argc, char **argv);
void			add_node(t_node **tmp, t_node **tsv, int x, int c);
t_node			*stack_a(int argc, char **argv);
int				sizell(t_node *lls);
t_node			*new_node(int x);
int				ft_strncmp(const char *s1, const char *s2);
void			swapa(t_node *first);
void			rotatea(t_node **first);
void			rev_rotatea(t_node **first);
void			pusha(t_node **stackb, t_node **stacka);
void			pushb(t_node **stacka, t_node **stackb);
void			rev_rotateb(t_node **first);
void			rotateb(t_node **first);
void			swapb(t_node *first);
void			rr(t_node **stacka, t_node **stackb);
void			rrr(t_node **stacka, t_node **stackb);
void			ss(t_node **stacka, t_node **stackb);
int				ft_chek(char *s);
int				ft_check2(int x, t_node *head);
int				checksort(t_node *llc);
void			ft_putstr(char *s);
int				ft_isdigit(char c);
int				ft_atoi(const char *str);
char			**ft_split(char const *s, char c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			**ft_freeb(char **k);
void			printList(t_node *start);
t_node			*ft_lstlast(t_node *stack);
void			ft_check_minmax(unsigned long rst, int s);
void			f_error(void);
int				ft_cnt(const char *s, char c);
void			f_freestacka(t_node **stack);
void			f_full(t_funstack_a *var, t_node **tmp, t_node **tsv);

#endif