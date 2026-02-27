//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
     char password[50];
	 
	 // compare using strcmp(str1,str2) from week 4
     char wantedPassword[50] = "secure123";
	 do {
        printf("Please enter the password: ");
        scanf("%s", &*password);
     } while (strcmp(password, wantedPassword) != 0);
	
    return 0;
}