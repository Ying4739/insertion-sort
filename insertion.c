#include <stdio.h>

int a[7]={26, 74, 53, 22, 49, 59, 36};
int b[7];
int main()
{
  int temp;
  b[0]=a[0];
  for( int i = 1 ; i < 7 ; i++)
  {
    b[i] = a[i];
      for( int j = i ; j > 0 ; j--)
      {
        if(b[j] < b[j-1])
        {
          temp = b[j];
          b[j] = b[j-1];
          b[j-1] = temp;
        }
      }
    printf("PROCESSING = %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6]);
    }
    printf("COMPLETED = %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6]);
    return 0;
  }
