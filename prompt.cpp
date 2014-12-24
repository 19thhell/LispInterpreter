#include<cstdio>

static const int MAX_INPUT_LEN = 2048;
static char input[MAX_INPUT_LEN];

int main(int argc, char** argv) {
	puts("Lispy Version 0.0.0.0.1");
	puts("Press Ctrl/Command + c to exit");

	while (true) {
		fputs("Lispy>", stdout);
		fgets(input, MAX_INPUT_LEN, stdin);
		printf("%s", input);
	}
	return 0;
}
