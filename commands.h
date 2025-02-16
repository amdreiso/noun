
#ifndef COMMANDS_H
#define COMMANDS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global.h"


void vExit() {
	programDestroy = 1;
}

void vHelp() {
	printf("Verbo !!!\n");
}

void vAdd() {
	char input[50];

	printf("Language: ");
	scanf("%49s", input);

	strcat(input, ".txt");

	FILE *file = fopen(input, "w");
	fclose(file);
}

#endif

