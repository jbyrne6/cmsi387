#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char username[25];
  gets(username);
  printf("Hello, %s\n", username);
  return 0;
}
