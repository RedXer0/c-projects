#include <stdio.h>
#include <stdbool.h>

int main() {
	int cat = 9;
	int lives = 8;

	if (cat == lives) {
		printf("the cat does have 9 lives\n");
	} else {
		printf("no the cat has %d lives\n", lives);
	}

	return 0;
}
