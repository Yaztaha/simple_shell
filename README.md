# Simple shell :collision: 

is a program that receives computer commands given by a user from his keyboard to send them to the operating system, which will execute them ( our simple shell was build with the C language ) 
using function calls and standard functions like (getline, wait (), fork, perror, malloc, free ..) we created the simple shell (hsh) which looks like the shell (sh) at basic operations . 

### Environement :

developed and tested on ubuntu 14.04 LTS with vagrant in virtualBox.

### Requeriments :

compiled with ubuntu 14.04 LTS on this way  -Wall -Werror -Wextra and -pedantic.

### Files , functions and their descriptions : 

#### Files :  :file_folder:

| Files  	|      Description    	
|----------	|:-------------:
| AUTHORS 	|  information about project authors 
| main.c 	|    the main function  	  	
|holberton.h| the header file  	   	
|freearrays.c| frees all arrays used
|alloc_memory.c| allocates memory for char
|man_1_simple_shell| man page of simple shell
|other_functions.c | Contains end_of_file, getvar, getfullpath, freelines, execute_env functions
|string_functions.c | Contains string manipulation functions
|tokenline.c | Splits a line into tokens

#### Functions :  :chart_with_downwards_trend:

| Function   	|      Description     	
|----------	|:-------------:
| int _strlen(char *s) 	|  give the lenght of a string
| char *_strcpy(char *dest, char *src) 	|   copies the string pointed to by src  
| int _strcmp(char *s1, char *s2) 	| compares two strings
|char *_strcat(char *dest, char *src) | contatenates two strings
|char **tokenline(char *line) | splits a line into tokens and stores them into a string array
|char *alloc_memory(char *ch) | allocates memory for char
| void freearrays(char *line, char *newline, char **tokens) | frees all the arrays
| int end_of_file(char *line) | end of file
| char *getvar(char *var, char **env) | searches for an environment variable and returns its value
| char *getfullpath(char **command, char **env) | search for complete path of a command and returns it
| int freelines(char *ch1, char *ch2) | frees char arrays
| void execute_env(char **env) | prints env




### installataion and usage :question:

- Clone this repository : [https://github.com/Yaztaha/simple_shell](https://github.com/Yaztaha/simple_shell/)
- Go into the repository 
- Compile by this way (using flags wall, werror, wextra and pedantic) : `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`  
- Execute the program using the interactive mode `./hsh`

### exemple :movie_camera:

![Image of Yaktocat](https://s6.gifyu.com/images/SimplisticDeepFieldmouse-mobile.gif)


### Authors :

- [Seif Jelidi](mailto:1609@holbertonschool.com?subject=[GitHub]%20Source%20Han%20Sans)
- [Taha Yazidi](mailto:1393@holbertonschool.com?subject=[GitHub]%20Source%20Han%20Sans)

