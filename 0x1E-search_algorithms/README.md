## C - Search algorithms

#### Task 0
[0-linear.c](0-linear.c) contains a function that searches for a value in an array of integers using the Linear search algorithm
- Prototype : `int linear_search(int *array, size_t size, int value);`
	- Where `array` is a pointer to the first element of the array to search in
	- `size` is the number of elements in array
	- And `value` is the value to search for
- Returns the first index where `value` is located
- If `value` is not present in `array` or if `array` is `NULL`, returns `-1`
- Prints the value being compared every time a comparison is made to `value`

#### Task 1
[1-binary.c](1-binary.c) contains a function that searches for a value in a sorted array of integers using the Binary search algorithm
- Prototype : `int binary_search(int *array, size_t size, int value);`
	- Where `array` is a pointer to the first element of the array to search in
	- `size` is the number of elements in array
	- And `value` is the value to search for
- Returns the first index where `value` is located
- Assumes that `array` will be sorted in ascending order
- Assumes that `value` won’t appear more than once in `array`
- If `value` is not present in `array` or if `array` is `NULL`, returns `-1`
- Prints the array being searched every time it changes

#### Task 2
What is the time complexity (worst case) of a linear search in an array of size `n`?

#### Task 3
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size `n`?

#### Task 4
What is the time complexity (worst case) of a binary search in an array of size `n`?

#### Task 5
What is the space complexity (worst case) of a binary search in an array of size `n`?

#### Task 6
What is the space complexity of this function / algorithm?
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
