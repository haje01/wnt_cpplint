// Copyright Webzen
#include <stdio.h>

void func1()  // TODO(haje01): raise error
{
}

void Func2()
{
}

class myClass  // TODO(haje01): raise error
{
}

int main() {  // brace error
	printf("hello, world\n");
	printf("he      ld\n");  // no space error

	char* a;
	char * b;  // TODO(haje01): raise error
	char *c;
    return 0;  // spaces error
}
