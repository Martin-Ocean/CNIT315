#include <stdio.h>

/* Function prototypes */
int factorial(int);
int fibonacci(int);
void hanoi(int, char, char, char);

int main() {
  int sel;
	bool br = true;
  do {
        printf("# Menu\n");
    		printf("1. Factorial\n");
    		printf("2. Fibonacci\n");
    		printf("3. Tower of Hanoi\n");
    		printf("4. Exit\n");
    		printf("Make a choice:");

        if (1 == sel) { /* Part 1: Factorial */
            int fac_n;

            /* Write your code for getting user input here */

            printf("\n%d! = %d\n", fac_n, factorial(fac_n));
        }

        else if (2 == sel) { /* Part 2: Fibonacci */
            int fib_m;

            /* Write code for getting user input here */

            printf("\nF_%d = %d\n", fib_m, fibonacci(fib_m));
        }

        else if (3 == sel) { /* Part 3: Tower of Hanoi */
            int han_l;

            /* Write your code for getting user input here */

            hanoi(han_l, 'A', 'B', 'C');
        }

        else if (4 == sel) {
            printf("Goodbye!\n");
            break;
        }

        else {
            printf("Invalid choice. Try again.\n");
        }
     } while (br); //end do


  /* Return the product of all positive integers less than or equal to input */
  int factorial(int n) {

      if (1 >= n) {
          return 1;
      }

      else {
          return n*factorial(n-1);
      }
  }

  /* Return the n-th term of Fibonacci sequence */
  int fibonacci(int n) {

      if (0 >= n) {
          return 1;
      }

      else {
          return /*Write code here*/;
      }
  }

  /* Move n discs from peg_a to peg_c. */
  void hanoi(int n, char peg_a, char peg_b, char peg_c) {

      if (1 == n) {
          printf("Move the top disk: peg %c -> peg %c\n", peg_a, peg_c);
      }

      else {
          hanoi(/* Write code for recursion here */);
          hanoi(/* Write code for recursion here */);
          hanoi(/* Write code for recursion here */);
      }
}
}
