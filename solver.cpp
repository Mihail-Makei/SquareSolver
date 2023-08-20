#include <stdio.h>
#include <math.h>

int main() {
  double a = 0, b = 0, c = 0;
  int res = scanf("%f", &a);
  if (res != 1) {
    printf("Enter FLOATS next time, you a faggot!\n");
    return 0;
  }
  res = scanf("%f", &b);
  if (res != 1) {
    printf("Enter FLOATS next time, you a faggot!\n");
    return 0;
  }
  res = scanf("%f", &c);
  if (res != 1) {
    printf("Enter FLOATS next time, you a faggot!\n");
    return 0;
  }
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
