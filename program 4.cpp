#include <iostream>
#include <list>
#include <cstring>
#include <iterator>
using namespace std;

//définition de la classe personne
class Personne {
public :
string nom;
string prenom;
string age ;
public :
Personne(string nom , string prenom ,string age ){
this->nom = nom ;
this->prenom = prenom;
this->age = age;
}
};

int main()
{
	string age , nom, prenom ;
	int n;
	
list<Personne> pers;
cout<<"veuillez entrer le nombre des personnes inclus dans cette liste  :  ",
cin>>n;
for (int i = 0; i < n; ++i)
{
     cout<<"donnez le nom de la personne numero "<<i+1<<" : " ;
	 cin>>nom;
	 cout<<"donnez le prenom de la personne numero "<<i+1<<" : " ;
	 cin>>prenom;
	 cout<<"donnez l'age de la personne numero "<<i+1<<" : " ;
	 cin>>age;
	 cout<<endl;	 	
	pers.push_back(Personne(nom,prenom,age));
}
list<Personne>::iterator it;

for (it = pers.begin(); it != pers.end(); ++it){
cout << it->nom <<"\t";
cout << it->prenom<<"\t";
cout << it->age<<endl;
}

return 0;
}
