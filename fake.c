#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void fake()
{
	int logined = 0;
	char cmd[10] = "pause", username[10], password[10];
	scanf("%s%s", username, password);
	if (strcmp(username, "admin")==0&&strcmp(password, "password")==0)
	{
		logined = 1;
	}
	if (logined)
	{
		puts("logined succeed");
		system(cmd);
	}
	return ;
}

int main()
{
	fake();
	return 0;
}
