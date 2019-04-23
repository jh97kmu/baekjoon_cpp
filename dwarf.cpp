// Fibonacci

#include <iostream>

using namespace std;

void sort(int *);

int main()
{
  int dwarf[9];
  int total = 0, i, j;
  for(int i=0;i<9;i++)
  {
    cin >> dwarf[i];
    total += dwarf[i];
  }

  total -= 100;
  for(i=0; i < 9; i++)
  {
    total -= dwarf[i];
    for(j = i+1; j < 9; j++)
    {
      if(total == dwarf[j])
      {
        total = 100;
        break;
      }
    }
    if(total == 100)
    {
      dwarf[i] = 100;
      dwarf[j] = 100;
      break;
    }
    else
    {
      total += dwarf[i];
    }
  }
  sort(dwarf);
  for(i=0;i<7;i++)
  {
    cout << dwarf[i] << endl;
  }
  return 0;
}

void sort(int *dwarf)
{
  int temp;
  for(int i=0; i<9;i++)
  {
    for(int j=i+1; j<9; j++)
    {
      if(dwarf[i] > dwarf[j])
      {
        temp = dwarf[i]; dwarf[i] = dwarf[j]; dwarf[j] = temp;
      }
    }
  }

  return;
}
