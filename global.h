
#ifndef GLOBAL_C
#define GLOBAL_C

extern int programDestroy;
int programDestroy = 0;

typedef struct {
	char* word;
	char* translation;
} Token;

extern Token languageTokens[];
Token languageTokens[] = {
};

#endif

