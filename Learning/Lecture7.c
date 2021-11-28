
#include <stdio.h>

int main() {
	
	int choice;

	makeChoice:

	printf("New game : 1\n");
	printf("Save : 2\n");
	printf("Option : 3\n");
	printf("Credit : 4\n");

	scanf_s("%d", &choice);
	
	switch (choice) {
	case 1:
		printf("This is New game!\n");
		break;
	case 2:
		printf("This is Save!\n");
		break;
	case 3:
		printf("This is Option!\n");
		break;
	case 4:
		printf("This is Credit!\n");
		break;
	default:
		printf("Please re-enter your message.\n");
		goto makeChoice;
		break;
	}
}

// option
