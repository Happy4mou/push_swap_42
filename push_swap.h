/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:41:30 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/01/19 16:16:14 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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

typedef struct f_pushina
{
	int			down;
	int			a_size;
	int			size;
	int			index;
}				t_pushina;

typedef struct pushsrtinb
{
	int			start;
	int			end;
	int			len;
	int			mid;
	int			offset;
	int			pos;

}				t_pushsrtinb;

int				ft_chek(char *s);
int				ft_check2(int x, t_node *head);
int				checksort(t_node *llc);
int				checkifup(t_node *llu, int tofinde);
int				ft_isdigit(char c);
int				ft_atoi(const char *str);
char			**ft_split(char const *s, char c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strdup(const char *s1);
size_t			ft_strlen(const char *s);
t_node			*new_node(int x);
int				sizell(t_node *lls);
int				get_min(t_node *lle);
int				get_max(t_node *lle);
int				get_index(t_node *lli, int tofinde);
void			sort_3(t_node **stack);
void			sort_5(t_node **stacka, t_node **stackb);
void			swapa(t_node *first);
void			rotatea(t_node **first);
void			rev_rotatea(t_node **first);
char			**ft_free(char **k);
int				checkai(int argc, char **argv);
t_node			*stack_a(int argc, char **argv);
void			add_node(t_node **tmp, t_node **tsv, int x, int c);
void			pushb(t_node **stacka, t_node **stackb);
void			pusha(t_node **stackb, t_node **stacka);
void			pushsinb(t_node **stacka, t_node **stackb);
void			pushsina(t_node **stackb, t_node **stacka, int *s);
void			rev_rotateb(t_node **first);
void			rotateb(t_node **first);
void			swapb(t_node *first);
void			rr(t_node **stacka, t_node **stackb);
void			ft_putnbr(int n);
void			ft_putchar(char c);
void			ft_putstr(char *s);
void			staray(t_node *stacka, int *s);
void			sortarray(t_node *stacka, int *s);
int				ft_cmpstck(t_node **stacka, int elm);
void			ft_check_minmax(unsigned long rst, int s);
void			f_error(void);
void			gete_elm_in_top(t_node **stack, t_pushina *var, int *s);
int				max_exists(t_node *stack, int max);
void			ft_gepelm(t_node **stacka, t_node **stackb, t_pushina *var,
					int *s);
t_node			*ft_lstlast(t_node *stack);
void			sara(t_node **stack);
void			rrasa(t_node **stack);
void			sort_2(t_node **stack);
int				checkindex(int *s, int elm, int len);
int				check_first(t_node *stack, int min, int max);
void			get_elem_to_top(t_node **stack, int pos);
int				check_nbr_exist(t_node **stack, int *s, t_pushsrtinb *var,
					int *index);
void			ft_rang(t_pushsrtinb *var);
void			pushsrtinb(t_node **stacka, t_node **stackb, int *s, int dvs);
void			sort_big(t_node **stacka, t_node **stackb, int dvs);
int				ft_cnt(const char *s, char c);
void			f_freestacka(t_node **stack);
void			f_full(t_funstack_a *var, t_node **tmp, t_node **tsv);
#endif