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

#### Task 5: Island perimeter
**Technical interview preparation**
[5-island_perimeter.py](5-island_perimeter.py) contains a function `def island_perimeter(grid):`, that returns the perimeter of the islan described in `grid`:
- `grid` is a list of list of integers:
	- 0 represents a water zone
	- 1 represents a land zone
	- One cell is a square with side length 1
	- Grid cells are connected horizontally/vertically (not diagonally).
	- Grid is rectangular, width and height don’t exceed 100
- Grid is completely surrounded by water, and there is one island (or nothing).
- The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).


#### Task 6: make -f 100-Makefile
[100-Makefile](100-Makefile) is a makefile that creates the executable `school` using defaults.
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
- Uses `$(RM)` for the cleaning up rules, but doesn't set the `RM` variable
- Does not use the string `$(CC)` more than once
- Uses the string `$(RM)` twice only
- Does not use the string `$(CFLAGS)` (but the compiler still uses the flags set in this variable)
- Does not have an `$(OBJ)` rule
- Does not use the `%.o: %.c` rule
- Works even if there is a file in the folder that has the same name as one of the rules
- Does not compile if the header file `m.h` is missing
