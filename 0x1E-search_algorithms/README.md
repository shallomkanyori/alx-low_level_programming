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

#### Task 7
[100-jump.c](100-jump.c) contains a function that searches for a value in a sorted array of integers using the Jump search algorithm
- Prototype : `int jump_search(int *array, size_t size, int value);`
	- Where `array` is a pointer to the first element of the array to search in
	- `size` is the number of elements in array
	- And `value` is the value to search for
- Returns the first index where `value` is located
- Assumes that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, returns `-1`
- Uses the square root of the size of the array as the jump step
- Uses the `sqrt()` function included int `<math.h>`
- Prints the value being compared every time a comparison is made to `value`


#### Task 8
What is the time complexity (average case) of a jump search in an array of size `n`, using `step = sqrt(n)`?

#### Task 9
[102-interpolation.c](102-interpolation.c) contains a function that searches for a value in a sorted array of integers using the Interpolation search algorithm
- Prototype : `int interpolation_search(int *array, size_t size, int value);`
	- Where `array` is a pointer to the first element of the array to search in
	- `size` is the number of elements in array
	- And `value` is the value to search for
- Returns the first index where `value` is located
- Assumes that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, returns `-1`
- Uses : `size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))` to determine the probe position
- Prints the value being compared every time a comparison is made to `value`

#### Task 10
[103-exponential.c](103-exponential.c) contains a function that searches for a value in a sorted array of integers using the Exponential search algorithm
- Prototype : `int exponential_search(int *array, size_t size, int value);`
	- Where `array` is a pointer to the first element of the array to search in
	- `size` is the number of elements in array
	- And `value` is the value to search for
- Returns the first index where `value` is located
- Assumes that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, returns `-1`
- Uses powers of 2 as exponential ranges to search in the array
- Prints the value being compared every time a comparison is made to `value`
- Uses binary search once a good range has been found:
	- Prints the array being searched every time it changes

#### Task 11
[104-advanced_binary.c](104-advanced_binary.c) contains a function that searches for a value in a sorted array of integers using the Binary search algorithm and returns the index of the first occurrence of that value.
- Prototype : `int advanced_binary(int *array, size_t size, int value);`
	- Where `array` is a pointer to the first element of the array to search in
	- `size` is the number of elements in array
	- And `value` is the value to search for
- Returns the first index where `value` is located
- Assumes that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, returns `-1`
- Prints the array being searched every time it changes
- Uses recursion and only one loop that prints the array.
