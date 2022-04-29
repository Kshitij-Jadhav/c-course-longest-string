#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int longestStringIndex = 1;
	if (argc <= 1) {
		puts("empty string");
	}else {
		int longestStringLength,currentStringLength;
		for (int i = 2; i < argc; i++) {
			longestStringLength = strlen(argv[longestStringIndex]);
			currentStringLength = strlen(argv[i]);
			if (currentStringLength > longestStringLength) {
				longestStringIndex = i;
			}
		}
	}
	puts(argv[longestStringIndex]);
	return EXIT_SUCCESS;
}
