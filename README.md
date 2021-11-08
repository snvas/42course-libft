# 42course-libft

## Desenvolvimento do projeto Libft da 42 São Paulo

### Introduction
The aim of this project is to code a C library regrouping usual functions.

- First part: re-code a set of the libc functions, as defined in their man, with the same prototype and behaviors as the originals.
- Second part: code a set of functions that are either not included in the libc, or included in a different form.
- Bonus part: code functions to manipulate lists.
- Extras: add any function to the libft as I see fit.

[Notion de Estudo da Libft](https://soraianovaes.notion.site/Libft-5630a25909e9468cb688d83523fbfb96)

### Part 1

#### ctype.h

##### Function	Description
- ft_isalpha	checks for an alphabetic character.
- ft_isdigit	checks for a digit (0 through 9).
- ft_isalnum	checks for an alphanumeric character; it is equivalent to (isalpha(c)
- ft_isascii	checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
- ft_isprint	checks for any printable character including space.
- ft_isupper	checks if character is uppercase.
- ft_toupper	convert lowercase letters to uppercase
- ft_tolower	convert uppercase letters to lowercase.

#### string.h

##### Function	Description
- ft_memset	fills the first n bytes of the memory area pointed to by s with the constant byte c
- ft_bzero	erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.
- ft_memcpy	copies n bytes from memory area src to memory area dest. The memory areas must not overlap. Use memmove(3) if the memory areas do overlap.
- ft_memccpy	copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found. If the memory areas overlap, the results are undefined.
- ft_memmove	copies n bytes from memory area src to memory area dest. The two strings may overlap; the copy is always done in a non-destructive manner.
- ft_memchr	scans the initial n bytes of the memory area pointed to by s for the first instance of c.
- ft_memcmp	function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.
- ft_strlen	The ft_strlen() function computes and returns the length of the string s.
- ft_strlcpy	copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
- ft_strlcat	appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
- ft_strchr	returns a pointer to the first occurrence of the character c in the string s.
- ft_strrchr	returns a pointer to the last occurrence of the character c in the string s.
- ft_strnstr	locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.
- ft_strncmp	lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2. Compares not more than n characters. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.
- ft_strdup	returns a pointer to a new string which is a duplicate of the string s.

#### stdlib.h

##### Function	Description
- ft_atoi	converts the initial portion of the string pointed to by str to int representation and returns the int.
- ft_calloc	allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero.


### Part_2

#### string's functions

##### Function	Description
- ft_substr	Allocates and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
- ft_strjoin	Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
- ft_strtrim	Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
- ft_split	Allocates and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.
- ft_strmapi	Applies the function ’f’ to each character of the string ’s’ to create a new string resulting from successive applications of ’f’.

#### string to int

##### Function	Description
- ft_itoa	Allocates and returns a string representing the integer received as an argument. Negative numbers must be handled.
file-descriptor's functions

##### Function	Description
- ft_putchar_fd	Outputs the character ’c’ to the given file descriptor.
- ft_putstr_fd	Outputs the string ’s’ to the given file descriptor.
- ft_putendl_fd	Outputs the string ’s’ to the given file descriptor, followed by a newline.
- ft_putnbr_fd	Outputs the integer ’n’ to the given file descriptor.


### Bonus

#### Linked Lists

##### Function	Description
- ft_lstnew	Allocates and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
- ft_lstadd_front	Adds the element ’new’ at the beginning of the list.
- ft_lstsize	Counts the number of elements in a list.
- ft_lstlast	Returns the last element of the list.
- ft_lstadd_back	Adds the element ’new’ at the end of the list.
- ft_lstdelone	Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element.
- ft_lstclear	Deletes and frees the given element and every successor of that element, using the function ’del’ and free. Finally, the pointer to the list is set to NULL.
- ft_lstiter	Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
- ft_lstmap	Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.

#### Double Linked Lists

##### Function	Description
- ft_dlstnew  Allocates and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
- ft_dlstadd_front  Adds the element ’new’ at the beginning of the double linked list.
- ft_dlstsize Counts the number of elements in a double linked list.
- ft_dlstlast	Returns the last element of the double linked list.
- ft_dlstadd_back	Adds the element ’new’ at the end of the double linked list.
- ft_dlstdelone	Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element.
- ft_dlstclear	Deletes and frees the given element and every successor of that element, using the function ’del’ and free. Finally, the pointer to the double linked list is set to NULL.
- ft_dlstiter	Iterates the double linked list ’lst’ and applies the function ’f’ to the content of each element.
- ft_dlstmap	Iterates the double linked list ’lst’ and applies the function ’f’ to the content of each element. Creates a new double linked list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.

### Extras

##### Function	Description
- ft_putchar	outputs the character c to the standard output.
- ft_putstr	outputs a string to the standard output.
- ft_putendl	outputs a string to the standard output, followed by a newline.
- ft_putnbr	outputs the integer n to the standard output
- ft_isspace	tests for the white-space characters. For any locale, this includes the following standard characters: \v \n \t \r \f. Returns zero if the character tests false and returns non-zero if the character tests true.

### Makefile

Command	Usage
- make	creates .o files for each function as well as the main library file, libft.a
- make clean	removes the .o files used to create the library
- make fclean	removes the .o & .a files used to create the library
- make re	removes all .o & .a files then remakes them
