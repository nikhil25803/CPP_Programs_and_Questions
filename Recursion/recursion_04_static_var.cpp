#include <iostream>
using namespace std;

int fun(int n)
{
  int x=0;
  if(n>0)
  {
    x++;
    return fun(n-1)+x;
  }
  return 0;
}

int main()
{
  int n=5;
  cout<<fun(5)<<endl;

  return 0;
}
