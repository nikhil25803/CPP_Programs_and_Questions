#include <iostream>
using namespace std;


int main()
{
  int n;
  cin>>n;
  int arr[n];
  int max=arr[0];

  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  for(int i=0;i<n;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
    else
    {
      continue;
    }
  }

  cout<<"Maximum element is: "<<max<<endl;

  return 0;
}
