#include <iostream>
using namespace std;

int main() 
{
  int n, sum=0;
  cout<<"Enter a positive integer :"<<endl;
  cin>>n;
  
  for(int i=1;i<n;i++)
  {
    sum+=i;
  }
  cout<<"The sum of natural  numbers "<<n<<" is : "<<sum<<endl;
  return 0;
}