
#include <stdio.h>
#include <stdlib.h>

#include "global.h"
#include "verbo.h"

int getInput() {
	if (programDestroy == 1) {
		return 1;
	}

	char input[100];

	printf("> ");
	scanf("%99s", input);

	runCommand(input);

	getInput();

	return 0;
}

int main(void) {
	getInput();

	return 0;
}

