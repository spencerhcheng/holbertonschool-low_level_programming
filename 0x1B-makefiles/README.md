### 0x1B. C - Makefiles

#### Synopsis
The objective of this project is to understand Makefiles and when, why and how to use them. What the rules of Makefiles are and how to set them. What are explicit and implicit rules and which are the most common/useful.

#### About Makefiles
Makefiles are a simple way to organize code compilation. Most often, the makefile directs make on how to compile and link a program. Using C/C++ as an example, when a C/C++ source file is changed, it must be recompiled. If a header file has changed, each C/C++ source file that includes the header file must be recompiled to be safe. Each compilation produces an object file corresponding to the source file. Finally, if any source file has been recompiled, all the object files, whether newly made or saved from previous compilations, must be linked together to produce the new executable program.[1] These instructions with their dependencies are specified in a makefile. If none of the files that are prerequisites have been changed since the last time the program was compiled, no actions take place. For large software projects, using Makefiles can substantially reduce build times if only a few source files have changed.

#### Author
Spencer Cheng: [github account](https://github.com/spencerhcheng), [twitter](https://twitter.com/spencerhcheng)

#### FILE SETUP
All files are written and compiled on `Ubuntu 14.04 LTS`. Programs will be compiled using `gcc 4.8.4` (C90) using the flags -Wall -Werror -Wextra and -pedantic as well as `GNU Make 3.81`. All files will end with a new line.

Code will use Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`.

<a href="https://github.com/holbertonschool/Betty">Betty Style</a>

For the tasks in this project, I used the following files to compile:

<a href ="https://github.com/holbertonschool/0x1B.c">MakeFiles</a>

#### 0. make -f 0-Makefile
Makefile using the `all` rule to build an executable.

Expected output:

```
spencer@ubuntu:~/0x1B. Makefiles$ make -f 0-Makefile 
gcc main.c holberton.c -o holberton
spencer@ubuntu:~/0x1B. Makefiles$ ./holberton 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
spencer@ubuntu:~/0x1B. Makefiles$ 
```
File: `0-Makefile`

#### 1. make -f 1-Makefile
Makefile using the `all` rule to build an executable.

Variables:
* `CC` - compiler to be used
* `SRC` - the `.c` files

Expected output:
```
spencer@ubuntu:~/0x1B. Makefiles$ make -f 1-Makefile
gcc main.c holberton.c -o holberton
spencer@ubuntu:~/0x1B. Makefiles$ make -f 1-Makefile
gcc main.c holberton.c -o holberton
spencer@ubuntu:~/0x1B. Makefiles$
```

File: `1-Makefile`

#### 2. make -f 2-Makefile
Makefile using the `all` rule to build an executable.

Variables:
* `CC` - compiler to be used
* `SRC` - the `.c` files
* `OBJ` - the `.o` files
* `NAME`: name of the executable

Expected output:
```
spencer@ubuntu:~/0x1B. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
spencer@ubuntu:~/0x1B. Makefiles$ make -f 2-Makefile
gcc main.o holberton.o -o holberton
spencer@ubuntu:~/0x1B. Makefiles$ echo "/* Holberton */" >> main.c
spencer@ubuntu:~/0x1B. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o holberton.o -o holberton
spencer@ubuntu:~/0x1B. Makefiles$ 
```

File: `2-Makefile`

#### 3. make -f 3-Makefile
Makefile using the following rules to build an executable:
* `all` - builds executable
* `clean` - deletes the Emacs temporary files and the executable
* `oclean` - deletes the object files
* `fclean` - deletes the Emacs temporary files, the executable, and the object files
* `re` - forces recompilation of all source files

Variables:
* `CC` - compiler to be used
* `SRC` - the `.c` files
* `OBJ` - the `.o` files
* `NAME` - the name of the executable
* `RM` - program to delete files

Expected output:

```
spencerubuntu:~/holberton/curriculum_by_julien/holbertonschool-low_level_programming/0x1B. Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
holberton.c
main.c
main.c~
m.h
spencer@ubuntu:~/0x1B. Makefiles$ make -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
spencer@ubuntu:~/0x1B. Makefiles$ make all -f 3-Makefile
gcc main.o holberton.o -o holberton
spencer@ubuntu:~/0x1B. Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
holberton
holberton.c
holberton.o
main.c
main.c~
main.o
m.h
spencer@ubuntu:~/0x1B. Makefiles$ make clean -f 3-Makefile 
rm -f *~ holberton
spencer@ubuntu:~/0x1B. Makefiles$ make oclean -f 3-Makefile 
rm -f main.o holberton.o
spencer@ubuntu:~/0x1B. Makefiles$ make fclean -f 3-Makefile 
rm -f *~ holberton
rm -f main.o holberton.o
spencer@ubuntu:~/0x1B. Makefiles$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
spencer@ubuntu:~/0x1B. Makefiles$ make all -f 3-Makefile
gcc main.o holberton.o -o holberton
spencer@ubuntu:~/0x1B. Makefiles$ make re -f 3-Makefile
rm -f main.o holberton.o
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
spencer@ubuntu:~/0x1B. Makefiles$ 
```

File: `3-Makefile`

#### 4. A complete Makefile

Makefile using the following rules to build an executable:
* `all` - builds executable
* `clean` - deletes the Emacs temporary files and the executable
* `oclean` - deletes the object files
* `fclean` - deletes the Emacs temporary files, the executable, and the object files
* `re` - forces recompilation of all source files

Variables:
* `CC` - compiler to be used
* `SRC` - the `.c` files
* `OBJ` - the `.o` files
* `NAME` - the name of the executable
* `RM` - program to delete files
* `CFLAGS` - compiler flags: `-Wall` `-Werror` `-Wextra` `-pedantic`

Expected output:

```

spencer@ubuntu:~/0x1B. Makefiles$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
spencer@ubuntu:~/0x1B. Makefiles$ 
```

File: `4-Makefile`
