#include <stdio.h>
#include "math.h"

void input_size(int *row, int *col, const char *prompt);
void input_size(int *row, int *col, const char *prompt)
{
    if (NULL != prompt)
    {
        printf("%s", prompt);
    }
    scanf("%d%d", row, col);
}


void size1 ()
{
    printf("������ ����� ����� ���������� �������, ���������: 4 4\n");
    scanf("%d%d", &m, &n);
}



void matrix1_elements ()
{
    if( n !=m)
      printf("�� ����� �� ��������� �������\n");
      else{
  printf("������ �������� �������:\n");

  for (  c = 0 ; c < m ; c++ )
    for ( d = 0 ; d < n ; d++ )
      scanf("%d", &first[c][d]);
}
}
void size2 ()
{
    printf("������ ����� ����� ��������� �������:\n");
  scanf("%d%d", &p, &q);
}
void matrix2_elements ()
{
    if(p!=q)
  printf("�� ����� �� ��������� �������\n");
      else{

  if ( n != p )
    printf("������� �� ������ ���� �������������\n");
  else
  {
    printf("������ �������� ����� �������:\n");

    for ( c = 0 ; c < p ; c++ )
      for ( d = 0 ; d < q ; d++ )
        scanf("%d", &second[c][d]);
    }
}
}
void multiple ()
{
    multiply[c][d]=0;
    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
      {
        for ( k = 0 ; k < p ; k++ )
        {

sum  +=  first[c][k]*second[k][d];
        }
        multiply[c][d]=sum;
    sum = 0;

}
    }
}
void result ()
{
    printf("���������:-\n");

    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
        printf("%d\t", multiply[c][d]);

      printf("\n");
    }

}
