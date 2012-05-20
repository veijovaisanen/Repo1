#include <iostream> 
#include <iomanip>
//Comment here
//A new line
using namespace std;
void main()
{	 
	int ika; 
	char *etunimi; 
	etunimi = new char[30];
	char *sukunimi; 
	sukunimi = new char[40];	
	cout<<"\nAnna etunimi"<<endl;
 	cin>>etunimi;	
 	cin>>etunimi;
	cout<<"\nAnna sukunimi;"<<endl;
	cin>>sukunimi;		
 	cout<<"\nAnna ikä;"<<endl;
	cin>>ika;
	cout<<"\nNimi: "<<etunimi<<" "<<sukunimi<<","<<ika<<",vuotias"<<endl;
	delete [] etunimi;
	delete [] etunimi;
}
