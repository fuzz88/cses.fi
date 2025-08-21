#include <stdio.h>

int main(void) {
  unsigned long long n;
  if (scanf("%llu", &n) == EOF) return 1;

  while (n != 1) {
    printf("%llu ", n);

    if (n % 2 == 0) {
      n /= 2;
    } else {
      n *= 3;
      n++;
    }
  }

  printf("1\n");

  return 0;
}
