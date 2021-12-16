#include <iostream>
#include <set>
#include <iterator>
using namespace std;

 bool recherche(int v , set<int, greater<int > > set2){
	 set<int, greater<int> >::iterator it;
   for(it = set2.begin(); it != set2.end(); ++it){
    if (*it == v) { return true ; }
  
 }
}
int main (){
	int v ,n;	
set<int, greater<int> > entier;	
for (int i=1 ; i<=100 ; ++i)
{      
	entier.insert(i);
}
cout<<"Entrez la valeur que vous cherchez :";
cin>> v;
if ( recherche(v,entier)== true) cout<<"la valeur existe";
else cout<< "la valeur n'exixte pas";
   return 0;
}






