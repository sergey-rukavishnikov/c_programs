#include <stdio.h>
#include <string.h>
char* fun(char* str, char* substr) {
	int i, j;
	char* p;
	int n = 0;
	p = strstr(str, substr);
	if (p){
      for (i=0; i<strlen(substr);i++)
        for(j=0; j<strlen(str);j++)
          p[j]=p[j+1];
    }
	p=strstr(p, substr);
	return p;
}
int main()
{
	char str[20];
	char substr[20];
	int n;
	char* p;
	printf("Input str: ");
	gets(str);
	printf("Input substr: ");
	gets(substr);
	p = fun(str, substr);
	printf("%s", p);
	return 0;
}
