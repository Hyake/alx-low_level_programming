#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), p, tep;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tep = (len ^ 59) & 63;
	password[0] = codex[tep];

	tep = 0;
	for (p = 0; p < len; p++)
		tep += argv[1][p];
	password[1] = codex[(tep ^ 79) & 63];

	tep = 1;
	for (p = 0; p < len; p++)
		tep *= argv[1][p];
	password[2] = codex[(tep ^ 85) & 63];

	tep = 0;
	for (p = 0; p < len; p++)
	{
		if (argv[1][p] > tep)
			tep = argv[1][p];
	}
	srand(tep ^ 14);
	password[3] = codex[rand() & 63];

	tep = 0;
	for (p = 0; p < len; p++)
		tep += (argv[1][p] * argv[1][p]);
	password[4] = codex[(tep ^ 239) & 63];

	for (p = 0; p < argv[1][0]; p++)
		tep = rand();
	password[5] = codex[(tep ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}

