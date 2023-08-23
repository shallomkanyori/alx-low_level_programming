## C - Makefiles

### Files
The folowing tasks use the files [main.c](main.c), [school.c](schoo.c) and [m.h](m.h).

#### Task 0: make -f 0-Makefile
[0-Makefile](0-Makefile) is a makefile that creates the executable `school`.
Requirements:
- rules: `all`
	- builds the executable
- variables: none

#### Task 1: make -f 1-Makefile
[1-Makefile](1-Makefile) is a makefile that creates the executable `school` using variables
Requirements:
- rules: `all`
	- builds the executable
- variables: `CC`, `SRC`
	- `CC`: the compiler to be used
	- `SRC`: the `.c` files

##### Task 2: make -f 2-Makefile
[2-Makefile](2-Makefile) is a makefile that creates the executable `school` using more variables
Requirements:
- rules: `all`
	- builds the executable
- variables: `CC`, `SRC`, `OBJ`, `NAME`
	- `CC`: the compiler to be used
	- `SRC`: the `.c` files
	- `OBJ`: the `.o` files (not an explicit list of the `.o` files)
	- `NAME`: the name of the executable
- The `all` rule recompiles only the updated source files
