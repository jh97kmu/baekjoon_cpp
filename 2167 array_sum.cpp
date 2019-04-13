#include <iostream>
using namespace std;

int main()
{
  int row, col, caseNum, a, b, c, d, output;
  cin >> row >> col;
  int ary[row][col];
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cin >> ary[i][j];
    }
  }


  cin >> caseNum;
  for(int i=0;i<caseNum;i++)
  {
    output = 0;
    cin >> a >> b >> c >> d;

    if(d == b)
    {
      for(int j=a-1;j<c;j++)
      {
        output += ary[j][b-1];
      }
    }
    else
    {
      for(int j=a-1;j<row;j++)
      {
        output += ary[j][b-1];
      }
      for(int j=c-1;j>=0;j--)
      {
        output += ary[j][d-1];
      }
      if(d - b > 1)
      {
        for(int j=b;j<d-1;j++)
        {
          for(int k=0;k<row;k++)
          {
            output += ary[k][j];
          }
        }
      }
    }



    cout << output << endl;
  }

  return 0;
}
