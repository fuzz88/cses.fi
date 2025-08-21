#include <stdio.h>
#include <stdlib.h>

#define uint unsigned long

int comp(const void *a, const void *b) { return (*(uint *)a - *(uint *)b); }

int main(void) {
  uint n;
  if (scanf("%lu", &n) == EOF)
    return 1;

  uint *nums = malloc((n - 1) * sizeof(uint));
  if (nums == NULL)
    return 1;

  for (uint i = 0; i < n - 1; i++) {
    if (scanf("%lu", &nums[i]) == EOF)
      return 1;
  }

  qsort(nums, n - 1, sizeof(uint), comp);

  for (uint i = 1; i <= n; i++) {
    if (nums[i - 1] != i) {
      printf("%lu\n", i);
      return 0;
    }
  }

  return 0;
}
