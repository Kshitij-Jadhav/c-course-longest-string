#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]) {
	int longestStringIndex;
	if(argc<=1) {
		puts("enmpty string");
	}
	else {
		longestStringIndex=1;
		for(int i=2;i<argc;i++) {
			if(strlen(argv[i])>strlen(argv[longestStringIndex])) {
				longestStringIndex=i;
			}
		}
	}
	printf("%s\n",argv[longestStringIndex]);
	return EXIT_SUCCESS;
}
