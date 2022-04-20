#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]) {
	int stringIndex,longestStringLenght;
	if(argc<=1) {
		puts("enmpty string");
	}
	else {
		stringIndex=1;
		longestStringLenght=strlen(argv[1]);
		for(int i=2;i<argc;i++) {
			if(strlen(argv[i])>longestStringLenght) {
				stringIndex=i;
				longestStringLenght=strlen(argv[i]);
			}
		}
	}
	printf("%s\n",argv[stringIndex]);
	return EXIT_SUCCESS;
}
