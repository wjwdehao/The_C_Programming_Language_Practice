#include <stdio.h>
#include <float.h>
#include <limits.h>

void testChar();
void testShort();
void testInt();
void testLong();
int main() {
  testChar();
  testShort();
  testInt();
  testLong();

  return 0;
}

void testChar() {
  printf("Testing your machine's char range...\n");
  char previous = 0;
  char current = 1;
  while (current > previous) {
    previous = current;
    current++;
  }
  printf("The upper limit of char should be: %d and our test is: %d\n", CHAR_MAX, previous);

  previous = 0;
  current = -1;
  while (current < previous) {
    previous = current;
    current--;
  }
  printf("The lower limit of char should be: %d and our test is: %d\n", CHAR_MIN, previous);
}


void testShort() {
  printf("Testing your machine's short range...\n");
  short previous = 0;
  short current = 1;
  while (current > previous) {
    previous = current;
    current++;
  }
  printf("The upper limit of short should be: %d and our test is: %d\n", SHRT_MAX, previous);

  previous = 0;
  current = -1;
  while (current < previous) {
    previous = current;
    current--;
  }
  printf("The lower limit of short should be: %d and our test is: %d\n", SHRT_MIN, previous);
}


void testInt() {
  printf("Testing your machine's int range...\n");
  int previous = 0;
  int current = 1;
  while (current > previous) {
    previous = current;
    current++;
  }
  printf("The upper limit of int should be: %d and our test is: %d\n", INT_MAX, previous);

  previous = 0;
  current = -1;
  while (current < previous) {
    previous = current;
    current--;
  }
  printf("The lower limit of int should be: %d and our test is: %d\n", INT_MIN, previous);
}


void testLong() {
  printf("The upper limit of long should be: %d\n", LONG_MAX);
  printf("The lower limit of long should be: %d\n", LONG_MIN);
}