#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

bool in_asc_order(const int *arr, size_t arr_size)
{
  /* code here */
  int i;
  int max = arr[0];
  for(i = 1 ; i < arr_size ; i++) {
	  if(arr[i] > max){
		  max = arr[i];
	  }
	  else break;
  }
  if(i == arr_size)
	  return true;
  return false;
}

int main(int argc, char const *argv[])
{
  int arr0[] = {1,2,4,7,19};
  printf("%s\n", in_asc_order(arr0, 5)?"true":"false");
  return 0;
}
