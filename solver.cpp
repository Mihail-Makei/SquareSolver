#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  if (a == 0) {
    if (b == 0) {
      if (c == 0) {
        printf("Infinity roots\n");
      } else {
        printf("No roots\n");
      }
    } else {
      printf("Root is %f\n", -c/b);
    }
  } else {
    // solve square equation
  }
  return 0;
}
