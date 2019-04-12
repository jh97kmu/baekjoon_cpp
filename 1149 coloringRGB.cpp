#include <iostream>
using namespace std;

int searchMin(int*);

int main()
{
  int caseNum;
  cin >> caseNum;
  int house[caseNum][3];

  for(int i=0;i<caseNum;i++)
  {
    for(int j=0;j<3;j++)
    {
      cin >> house[i][j];
    }
  }

  for(int i=1;i<caseNum;i++)
  {
    for(int j=0;j<3;j++)
    {
      if(j==0)
      {
        if(house[i-1][1] > house[i-1][2])
        {
          house[i][j] += house[i-1][2];
        }
        else
        {
          house[i][j] += house[i-1][1];
        }
      }
      else if(j==1)
      {
        if(house[i-1][0] > house[i-1][2])
        {
          house[i][j] += house[i-1][2];
        }
        else
        {
          house[i][j] += house[i-1][0];
        }

      }
      else
      {
        if(house[i-1][0] > house[i-1][1])
        {
          house[i][j] += house[i-1][1];
        }
        else
        {
          house[i][j] += house[i-1][0];
        }

      }
    }
  }

  cout << searchMin(house[caseNum-1]) << endl;
  return 0;
}

int searchMin(int *ary)
{
  int min;
  min = ary[0];
  for(int i=1;i<3;i++)
  {
    if(ary[i] < min)
    {
      min = ary[i];
    }
  }

  return min;
}
