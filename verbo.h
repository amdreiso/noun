
#ifndef VERBO_H
#define VERBO_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "global.h"
#include "commands.h"

typedef struct {
	char* name;
	char* description;
	void (*fn)(void);
} Command;

Command commands[] = {
	{ "exit", "exits verbo", vExit },
	{ "help", "helps you", vHelp },
	{ "add", "helps you", vAdd },
	{ "open", "helps you", vOpen }
};

void runCommand(char* input) {
	int found = 0;

	for (int i = 0; i < sizeof(commands) / sizeof(Command); i++) {
		if (strcmp(commands[i].name, input) == 0) {
			commands[i].fn();
			found = 1;
		}
	}

	if (found == 0) {
		printf("Invalid command!\n");
	}
}


#endif

