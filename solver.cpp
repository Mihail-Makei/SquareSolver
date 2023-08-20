#include <stdio.h>
#include <math.h>

const double EPS = 1e-9;

bool cmp_doubles(double a, double b) {
  return fabs(a - b) < EPS;
}

bool input_vars(double* a, double* b, double* c) {
  int res = scanf("%lf", a);
  if (res != 1) {
    printf("Enter FLOATS next time, you a faggot!\n");
    return false;
  }
  res = scanf("%lf", b);
  if (res != 1) {
    printf("Enter FLOATS next time, you a faggot!\n");
    return false;
  }
  res = scanf("%lf", c);
  if (res != 1) {
    printf("Enter FLOATS next time, you a faggot!\n");
    return false;
  }
  return true;
}

int main() {
  double a = 0, b = 0, c = 0;
  if (!input_vars(&a, &b, &c)) {
    printf("Are you stupid? You couldn't enter 3 floats! I am closing the program for you!\n");
    return 1;
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
