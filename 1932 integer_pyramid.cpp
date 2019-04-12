#include <iostream>
using namespace std;

int searchMax(int*, int);

int main()
{
  int caseNum, max;
  cin >> caseNum;
  int ary[caseNum][caseNum] = {0};
  for(int i=0;i<caseNum;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cin >> ary[i][j];
    }
  }

  for(int i=1;i<caseNum;i++)
  {
    for(int j=0;j<=i;j++)
    {
      if(j==0)
      {
        ary[i][j] += ary[i-1][j];
      }
      else if(j==i)
      {
        ary[i][j] += ary[i-1][i-1];
      }
      else
      {
        if(ary[i-1][j-1] > ary[i-1][j])
        {
          ary[i][j] += ary[i-1][j-1];
        }
        else
        {
          ary[i][j] += ary[i-1][j];
        }
      }
    }
  }
  cout << searchMax(ary[caseNum-1], caseNum) << endl;

  return 0;
}
int searchMax(int *ary, int n)
{
  int max;
  max = ary[0];
  for(int i=1;i<n;i++)
  {
    if(max < ary[i])
    {
      max = ary[i];
    }
  }
  return max;
}
