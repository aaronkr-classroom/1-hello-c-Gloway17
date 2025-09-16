// cypher.c
#include <stdio.h>

void cypher(char* msg, int sft) {
	char ch;
	int i;

	for (i = 0; msg[i] != '\0'; ++i) {
		ch = msg[i];

		// Upper character
		if (ch > 'A' && ch <= 'Z') {
			ch = ch + sft;

			if (ch > 'Z') {
				ch = ch - 'Z' + 'A' - 1;
			}
			else if (ch < 'A') {
				ch = ch + 'Z' - 'A' + 1;
			}
		}

		// Lower character
		if (ch > 'a' && ch <= 'z') {
			ch = ch + sft;

			if (ch > 'z') {
				ch = ch - 'z' + 'a' - 1;
			}
			else if (ch < 'a') {
				ch = ch + 'z' - 'a' + 1;
			}
		}

		msg[i] = ch;
	}
}

int main() {
	// get message from user
	char message[100];
	printf("Enter a message: ");
	fgets(message, sizeof(message), stdin);

	// set shift value
	int shift;
	printf("Enter shift value: ");
	scanf_s("%d", &shift);

	// make cypher
	cypher(message, shift);

	// print cypher
	printf("Encrypted! %s", message);

	return 0;
}