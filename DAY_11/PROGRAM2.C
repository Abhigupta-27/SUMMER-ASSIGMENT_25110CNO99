// Write a program to Write function to find  MAXIMUM 
#include <stdio.h>
int max(int a, int b) {
    if (a > b)
        return a;
  else
      return b;
}
int main() {
    int p, q;
    printf("Enter two numbers: ");
    scanf("%d %d", &p, &q);
    printf("Maximum = %d\n", max(p, q));
    return 0;
}