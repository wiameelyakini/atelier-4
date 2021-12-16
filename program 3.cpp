#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
int e,n,i;
list <int> list1;
cout<<"entrez le nombre des entiers :  " ;
cin>>n;
for (i = 0; i < n; ++i)
{
  cout<<endl<<"donnez la valeur de entier numero "<<i+1<<" : " ;
	 cin>>e;	
	 list1.push_back(e);
}
list1.sort();
cout<<endl<<"la liste triee est :  ";
list <int> :: iterator it;
for(it = list1.begin(); it != list1.end(); ++it)
cout << '\t' << *it;


return 0;
}
