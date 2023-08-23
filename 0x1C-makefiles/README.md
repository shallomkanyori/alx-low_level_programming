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

#### Task 2: make -f 2-Makefile
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

#### Task 3: make -f 3-Makefile
[3-Makefile](3-Makefile) is a makefile that creates the executable `school` with cleanup rules.
Requirements:
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
	- `all`: builds the executable
	- `clean`: deletes all Emacs and Vim temporary files along with the executable
	- `oclean`: deletes the object files
	- `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
	- `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
	- `CC`: the compiler to be used
	- `SRC`: the `.c` files
	- `OBJ`: the `.o` files (not an explicit list of the `.o` files)
	- `NAME`: the name of the executable
	- `RM`: the program to delete files
- The `all` rule recompiles only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules never fail

#### Task 4: A complete Makefile
[4-Makefile](4-Makefile) is a makefile that creates the executable `school` with compile flags.
Requirements:
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
	- `all`: builds the executable
	- `clean`: deletes all Emacs and Vim temporary files along with the executable
	- `oclean`: deletes the object files
	- `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
	- `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
	- `CC`: the compiler to be used
	- `SRC`: the `.c` files
	- `OBJ`: the `.o` files (not an explicit list of the `.o` files)
	- `NAME`: the name of the executable
	- `RM`: the program to delete files
	- `CFLAGS`: compile flags: `-Wall -Werror -Wextra -pedantic`
- The `all` rule recompiles only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules never fail
