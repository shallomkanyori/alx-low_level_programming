/**
 * rand - overrides rand() to return numbers in custom sequence
 *
 * Return: next number in sequence.
 */
int rand(void)
{
	static int numbers[] = {8, 8, 7, 9, 23, 74};
	static int ind;

	int num = numbers[ind];

	ind = (ind + 1) % 6;
	return (num);
}
