// Week 5, Session 2

/* Task 2.2
 * Write a C program that continuosly prompts the user to enter
 * a message and then prints it back to them. The loop should terminate
 * if the user types "quit".
 * - use fgets() + newline removal
 * - use strcmp for string comparison
 */
 
 #include <stdio.h>
 #include <string.h>
 
 int main(void) {
	 char quit[100] = "quit";
	 char buff[100];

	 do {
		printf("Please enter a message: ");
		fgets(buff, 100, stdin);
		sscanf(buff, "%s", &*buff);
		printf("You entered: %s\n", buff);
	 } while (strcmp(quit, buff) != 0);
	 
	 return 0;
 }