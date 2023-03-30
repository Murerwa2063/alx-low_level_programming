##################################START########################################################################### 
0x12. C - SINGLY LINKED LISTS

. In this project, I'm learning introduction to data structures.
. Data structures are classified into the following:
1. LINEAR DATA STRUCTURES
. In LDS, data elements are arranged sequentially or lineraly.
. Linear data structures can be further subdivided into STATIC & DYNAMIC structures.
. STATIC DS
. A static DS has a fixed memory size.
. It is easier to access elements in a static ds.
. An example of a linear static data structure would be an ARRAY.
DYNAMIC DS
. Memory size is not fixed. It can be randomly updated or changed during runtime hence enhanced efficiency when dealing   with complex code.
. Examples of Linear dynamic data structures are: LINKED LISTS, QUE & STACK.

2. NON-LINEAR DATA STRUCTURE
. In NLDS, data elements are not sequentially arranged.
. Non-linear data structures include TREES & GRAPHS.

#################SPECS######################################################################################
. ENVIRONMENT: VIM
. COMPILING: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
. All files will end with a new line.
. A README file at the root of directory.
. STYLE: Betty
. No use of global variables.
. No more than 5 functions per file.
. The only C standard library functions allowed are malloc, free and exit unless otherwise guided in a task.
. All function prototypes to be included in one header file, lists.h.
. All header files should be include guarded.
##############MORE INFO######################################################################################
. Please use this data structure for this project:
 /**
  * struct list_s - singly linked list
  * @str: string - (malloc'ed string)
  * @len: length of the string
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  */
 typedef struct list_s
 {
     char *str;
     unsigned int len;
     struct list_s *next;
 } list_t;

#####################TASKS####################################################################################
 0. Print list
 mandatory
 Write a function that prints all the elements of a list_t list.

 . Prototype: size_t print_list(const list_t *h);
 . Return: the number of nodes
 . Format: see example
 . If str is NULL, print [0] (nil)
 . You are allowed to use printf

 1. List length
 mandatory
 Write a function that returns the number of elements in a linked list_t list.

 . Prototype: size_t list_len(const list_t *h);

 2. Add node
 mandatory
 Write a function that adds a new node at the beginning of a list_t list.

 . Prototype: list_t *add_node(list_t **head, const char *str);
 . Return: the address of the new element, or NULL if it failed
 . str needs to be duplicated
 . You are allowed to use strdup

3. Add node at the end
mandatory
Write a function that adds a new node at the end of a list_t list.

 . Prototype: list_t *add_node_end(list_t **head, const char *str);
 . Return: the address of the new element, or NULL if it failed
 . str needs to be duplicated
 . You are allowed to use strdup

4. Free list
mandatory
Write a function that frees a list_t list.

 . Prototype: void free_list(list_t *head);

5. The Hare and the Tortoise
#advanced

Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

 . You are allowed to use the printf function

6. Real programmers can write assembly code in any language
#advanced
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

 . You are only allowed to use the printf function
 . You are not allowed to use interrupts
 . Your program will be compiled using nasm and gcc:
####################END##########################################################################################
