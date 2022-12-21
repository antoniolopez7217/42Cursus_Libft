# Libft

First project of the 42 Cursus that consists of the creation of a library that will contain existing functions, which I will have to replicate, and others of own creation.

To begin with, some libc functions will have to be replicated. These functions will have the same prototypes and implement the same behaviors as the original functions. They should be just as described in the man. The only difference will be the nomenclature. They will start with the prefix "ft_".

In this second part, a set of functions must be developed that are either not from the libc library, or are but in a different form.

To finish this project it is necessary to provide a .c file for each function created, an .h file containing all the headers and a Makefile that will compile the source files to the required output with the -Wall, -Werror and -Wextra flags.

## Libc functions

SEPARAR EN LIBRERIAS A LAS QUE PERTENECE CADA FUNCION CON ###

- [`ft_isalpha`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_isalpha.c) -> Checks if the character is alphabetic.
- [`ft_isdigit`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_isdigit.c) -> Checks if the character is a digit.
- [`ft_isalnum`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_isalnum.c) -> Checks if the character is alphanumeric.
- [`ft_isascii`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_isascii.c) -> Checks if the character is ASCII.
- [`ft_isprint`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_isprint.c) -> Checks if the character is printable.
- [`ft_strlen`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strlen.c) -> Displays the number of characters in a string.
- [`ft_memset`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_memset.c) -> Fills the first n bytes of the memory area with the constant byte c.
- [`ft_bzero`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_bzero.c) -> Places n zero-valued bytes in the area pointed to by s.
- [`ft_memcpy`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_memcpy.c) -> Copies n bytes from a memory area. The memory areas must not overlap.
- [`ft_memmove`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_memmove.c) -> Copies n bytes from a memory area. The memory areas may overlap.
- [`ft_strlcpy`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strlcpy.c) -> Copies a string of characters (including the null character), but no more than n - 1 characters.
- [`ft_strlcat`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strlcat.c) -> Concatenate two strings, but no more than n - 1 characters.
- [`ft_toupper`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_toupper.c) -> Converts the character to uppercase.
- [`ft_tolower`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_tolower.c) -> Converts the character to lowercase.
- [`ft_strchr`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strchr.c) -> Locates the first occurrence of c in a string.
- [`ft_strrchr`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strrchr.c) -> Locates the last occurrence of c in a string.
- [`ft_strncmp`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strncmp.c) -> Compares two strings, but no more than the first n characters.
- [`ft_memchr`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_memchr.c) -> Locates the first occurrence of c in the initial n bytes of an object.
- [`ft_memcmp`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_memcmp.c) -> Compares the first n bytes of two objects.
- [`ft_strnstr`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strnstr.c) -> Locate the first occurrence of a substring in a string.
- [`ft_atoi`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_atoi.c) -> Converts the beginning of a string to an integer.
- [`ft_calloc`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_calloc.c) -> Allocates memory with `malloc` for an array and returns a pointer to the allocated memory. The memory is set to zero.
- [`ft_strdup`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strdup.c) -> Returns a pointer to a new string which is a duplicate of the string. The memory is reserved with `malloc`.

## Aditional functions

- [`ft_substr`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_substr.c) -> Reserves memory with `malloc` and returns a substring whose start and maximum length are given parameters.
- [`ft_strjoin`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strjoin.c) -> Reserves memory with `malloc` and returns the concatenation of two strings.
- [`ft_strtrim`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strtrim.c) -> Removes all characters contained in the string 'set' from the beginning and from the end of the string 's1', until a character not belonging to 'set' is found. The resulting string is returned with a `malloc` reservation.
- [`ft_split`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_split.c) -> Reserves memory with `malloc` for an array of strings resulting from separating the string 's' into substrings using the character 'c' as delimiter. The array must end with a NULL pointer.
- [`ft_itoa`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_itoa.c) -> Reserves memory with `malloc` and returns a string representing the integer received as argument.
- [`ft_strmapi`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_strmapi.c) -> To each character of the string 's', apply the function `f` giving as parameters the index within 's' and the character itself. It generates a new string (using `malloc`) with the result of the successive use of `f`.
- [`ft_striteri`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_striteri.c) -> To each character in the string 's', apply the function `f` giving as parameters the index within 's' and the address of the character itself, which may be modified if necessary.
- [`ft_putchar_fd`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_putchar_fd.c) -> Displays the character used as parameter.
- [`ft_putstr_fd`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_putstr_fd.c) -> Displays the characters of a string.
- [`ft_putendl_fd`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_putendl_fd.c) -> Displays the characters of a string with a line break at the end.
- [`ft_putnbr_fd`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_putnbr_fd.c) -> Displays the number used as parameter.

## Bonus functions
PONER _BONUS.c Y MODIFICAR EL HEADER DE CADA UNA DE LAS FUNCIONES Y SU MAKEFILE
TAMBIEN MODIFICAR LOS LINK DE AQUI


The structure to represent a list node will be:

```C
typedef struct  s_list
{
  void          *content;
  struct s_list *next;
}             t_list;
```

- [`ft_lstnew`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstnew_bonus.c) -> Create a new node using `malloc`. The variable 'content' is initialized with the content of the parameter. The variable 'next', with NULL.
- [`ft_lstadd_front`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstadd_front_bonus.c) -> Adds the node 'new' to the beginning of the list.
- [`ft_lstsize`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstsize_bonus.c) -> Counts the number of nodes in a list.
- [`ft_lstlast`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstlast_bonus.c) -> Returns the last node in the list.
- [`ft_lstadd_back`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstadd_back_bonus.c) -> Adds the node 'new' to the end of the list.
- [`ft_lstdelone`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstdelone_bonus.c) -> Takes as parameter a node and frees the memory of the content using the function `del` given as parameter, in addition to freeing the node. The memory of 'next' must not be freed.
- [`ft_lstclear`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstclear_bonus.c) -> Removes and frees the given node and all consecutive nodes, using the `del` and `free` function. At the end, the pointer to the list must be NULL.
- [`ft_lstiter`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstiter_bonus.c) -> Iterates the list and apply the `f` function on the content of each node.
- [`ft_lstmap`](https://github.com/antoniolopez7217/42Cursus_Libft/blob/main/libft/ft_lstmap_bonus.c) -> Iterates the list and applies the function `f` to the content of each node. It creates a list resulting from the correct and successive application of the function `f` on each node. The `del` function is used to remove the contents of a node.

## Useful Links

- How to test the project? -> [Francinette](https://github.com/xicodomingues/francinette)


[![Linkedin Badge](https://img.shields.io/badge/-Linkedin-blue?style=flat&logo=Linkedin&logoColor=white)](https://www.linkedin.com/in/antoniolopezchamorro)
