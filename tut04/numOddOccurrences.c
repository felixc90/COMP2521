#include <stdio.h>

int numOddOccurrences(int arr[], int size) {

    Set s = SetNew();
    s->values;
    for (int i = 0; i < size; i++) {
      if (SetContains(s, arr[i])) {
          SetDelete(s, arr[i]);
      } else {
          SetInsert(s, arr[i]);
      }
    }
    int result = SetSize(s);
    SetFree(s);
    return result;
}

int main(void)
{
  printf("Number of Odd Occurrences: %d\n", numOddOccurrences(a, 6));
  return 0;
}


