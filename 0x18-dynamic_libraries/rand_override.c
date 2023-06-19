/**
 * rand - overrides rand() to return numbers in custom sequence
 *
 * Return: next number in sequence.
 */
int rand(void)
{
	static int numbers[] = {9, 8, 10, 24, 75, 9};
	static int ind;

	int num = numbers[ind];

	ind = (ind + 1) % 6;

	return (num);
}
