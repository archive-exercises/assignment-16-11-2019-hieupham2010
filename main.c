#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

bool in_asc_order(const int *arr, size_t arr_size)
{
  /* code here */
  return false;
}

int main(int argc, char const *argv[])
{
  int arr0[] = {1,2,4,7,19};
  printf("%s\n", in_asc_order(arr0, 5)?"true":"false");
  return 0;
}
