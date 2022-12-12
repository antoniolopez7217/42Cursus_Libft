# Libft

First project of the 42 Cursus that consists of the creation of a library that will contain existing functions, which I will have to replicate, and others of own creation.

To begin with, some libc functions will have to be replicated. These functions will have the same prototypes and implement the same behaviors as the original functions. They should be just as described in the man. The only difference will be the nomenclature. They will start with the prefix "ft_".

In this second part, a set of functions must be developed that are either not from the libc library, or are but in a different form.

To finish this project it is necessary to provide a .c file for each function created, an .h file containing all the headers and a Makefile that will compile the source files to the required output with the -Wall, -Werror and -Wextra flags.

## Libc functions

- [`ft_isalpha`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_isalpha.c) -> Checks if the character is alphabetic.
- [`ft_isdigit`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_isdigit.c) -> Checks if the character is a digit.
- [`ft_isalnum`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_isalnum.c) -> Checks if the character is alphanumeric.
- [`ft_isascii`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_isascii.c) -> 
- [`ft_isprint`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_isprint.c) -> Checks if the character is printable.
- [`ft_strlen`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strlen.c) -> Displays the number of characters in a string.
- [`ft_memset`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_memset.c) -> 
- [`ft_bzero`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_bzero.c) -> 
- [`ft_memcpy`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_memcpy.c) -> 
- [`ft_memmove`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_memmove.c) -> 
- [`ft_strlcpy`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strlcpy.c) -> Copies a string of characters (including the null character), but no more than n - 1 characters.
- [`ft_strlcat`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strlcat.c) -> Concatenate two strings, but no more than n - 1 characters.
- [`ft_toupper`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_toupper.c) -> Converts the character to uppercase.
- [`ft_tolower`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_tolower.c) -> Converts the character to lowercase.
- [`ft_strchr`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strchr.c) -> 
- [`ft_strrchr`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strrchr.c) -> 
- [`ft_strncmp`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strncmp.c) -> Compares two strings, but no more than the first n characters.
- [`ft_memchr`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_memchr.c) -> 
- [`ft_memcmp`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_memcmp.c) -> 
- [`ft_strnstr`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strnstr.c) -> 
- [`ft_atoi`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_atoi.c) -> Converts the beginning of a string to an integer.
- [`ft_calloc`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_calloc.c) -> 
- [`ft_strdup`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strdup.c) -> 

## Aditional functions

- [`ft_substr`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_substr.c) -> 
- [`ft_strjoin`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strjoin.c) -> 
- [`ft_strtrim`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strtrim.c) -> 
- [`ft_split`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_split.c) -> 
- [`ft_itoa`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_itoa.c) -> 
- [`ft_strmapi`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strmapi.c) -> 
- [`ft_striteri`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_striteri.c) -> 
- [`ft_putchar_fd`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_putchar_fd.c) -> Displays the character used as parameter.
- [`ft_putstr_fd`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_putstr_fd.c) -> Displays the characters of a string one by one.
- [`ft_putendl_fd`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_putendl_fd.c) -> 
- [`ft_putnbr_fd`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_putnbr_fd.c) -> Displays the number used as parameter.

## Bonus functions

- [`ft_lstnew`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstnew.c) -> 
- [`ft_lstadd_front`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstadd_front.c) -> 
- [`ft_lstsize`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstsize.c) -> 
- [`ft_lstlast`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstlast.c) -> 
- [`ft_lstadd_back`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstadd_back.c) -> 
- [`ft_lstdelone`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstdelone.c) -> 
- [`ft_lstclear`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstclear.c) -> 
- [`ft_lstiter`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstiter.c) -> 
- [`ft_lstmap`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstmap.c) -> 

## Useful Links

- [Francinette](https://github.com/xicodomingues/francinette)
