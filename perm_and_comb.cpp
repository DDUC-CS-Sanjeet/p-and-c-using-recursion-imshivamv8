#include<iostream>
#include<cstdlib>
using namespace std;

int permutation(int n, int r)
{
  if(n < 0 || r < 0)
    throw "Invalid Arguments!!!";
  if(r == 0)
    return 1;
  else
  {
    return n*permutation(n-1, r-1);
  }
}

int combination(int n, int r)
{
  if(n < 0 || r < 0)
    throw "Invalid Arguments!!!";
  if(r == 0)
    return 1;
  else
  {
    return (n*combination(n-1, r-1))/r;
  }
}

int main()
{
  int n = 0, r = 0, choice1 = 0, result = 0;
  char choice2 = 'N';
  do
  {
    cout<<"Enter the value of n and r for P(n, r) or C(n, r): ";
    cin>>n>>r;
    system("cls");
    cout<<"\t Menu \n";
    cout<<"1. Permutation\n";
    cout<<"2. Combination\n";
    cout<<"Choose your option: ";
    cin>>choice1;
    switch(choice1)
    {
      case 1: try
              {
                result = permutation(n, r);
                cout<<"The total number of permutation for n = "<<n<<" and r = "<<r<<" is: "<<result;
              }
              catch(const char* exception1)
              {
                cerr << exception1 << '\n';
              }
              break;
      case 2: try
              {
                result = combination(n, r);
                cout<<"The total number of combination for n = "<<n<<" and r = "<<r<<" is: "<<result;
              }
              catch(const char* exception1)
              {
                cerr << exception1 << '\n';
              }
              break;
      default: cout<<"Wrong choice of option!!!";    
    }
    cout<<"\nDo you want to operate more (Y/N): ";
    cin>>choice2;
    system("cls");
  } while (choice2 == 'Y' || choice2 == 'y');
  return 0;
}
