/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:32:51 by iwozniak          #+#    #+#             */
/*   Updated: 2023/10/18 12:44:37 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>
# include <stddef.h>
# include <limits.h>
# include <fcntl.h>

/* ************************************************************************** */
/*	CHECK                                                                     */
/* ************************************************************************** */

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

/* ************************************************************************** */
/*	GET NEXT LINE                                                             */
/* ************************************************************************** */

# define MAX_FD 1024
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_strchr_gnl(const char *str, int c);
char	*ft_strcpy_gnl(char *dest, const char *src);
char	*ft_strdup_gnl(const char *src);
char	*ft_strjoin_gnl(char *s1, char *s2);
size_t	ft_strlen_gnl(const char *str);
char	*get_next_line(int fd);

/* ************************************************************************** */
/*	LIST                                                                      */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

/* ************************************************************************** */
/*	MEMORY                                                                    */
/* ************************************************************************** */

void	ft_bzero(void *start, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *buf, int c, size_t n);
int		ft_memcmp(const void *buf1, const void *buf2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *dest, int c, size_t n);

/* ************************************************************************** */
/*	PRINT                                                                     */
/* ************************************************************************** */

size_t	ft_base_nbrlen(long long int n, size_t base);
void	ft_putchar_fd(char c, int fd);
int		ft_putchar(char c);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(long long int n, int fd);
int		ft_putnbr(long long int n);
void	ft_putstr_fd(char *s, int fd);
int		ft_putstr(char *s);
size_t	ft_u_base_nbrlen(unsigned long long int n, size_t base);
int		ft_u_base_putnbr(unsigned long long int n, const char *base);
int		ft_u_puthexa(unsigned long long int n, char format);

/* ************************************************************************** */
/*	PRINTF                                                                    */
/* ************************************************************************** */

size_t	ft_base_nbrlen_pf(long long int n, size_t base);
int		ft_printf(const char *str, ...);
int		ft_putchar_pf(char c);
int		ft_putnbr_pf(long long int n);
int		ft_putstr_pf(char *s);
char	*ft_strchr_pf(const char *str, int c);
size_t	ft_strlen_pf(const char *str);
size_t	ft_u_base_nbrlen_pf(unsigned long long int n, size_t base);
int		ft_u_base_putnbr_pf(unsigned long long int n, const char *base);
int		ft_u_puthexa_pf(unsigned long long int n, char format);

/* ************************************************************************** */
/* 	STRING                                                                    */
/* ************************************************************************** */

long	ft_atoi(const char *str);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *src);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
