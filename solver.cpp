#include <stdio.h>
#include <math.h>

const double EPS = 1e-9;
bool cmp_doubles(double a, double b) {
  return fabs(a - b) < EPS;
}

int main() {
  float a = 0, b = 0, c = 0;
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
  if (cmp_doubles(a, 0)) {
    if (cmp_doubles(b, 0)) {
      if (cmp_doubles(c, 0)) {
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
