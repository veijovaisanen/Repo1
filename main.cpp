#include <iostream> 
#include <iomanip>
//Comment here
//A new line
using namespace std;
void main()
{	 
	int ika; 
	char *etunimi; 
	etunimi = new char[20];
	char *sukunimi; 
	sukunimi = new char[40];	
	cout<<"\nAnna etunimi"<<endl;
	cin>>etunimi;
	cout<<"\nAnna sukunimi;"<<endl;
	cin>>sukunimi;		
	cout<<"\nNimi: "<<etunimi<<" "<<sukunimi<<","<<ika<<",vuotias"<<endl;
	delete [] etunimi;
	delete [] etunimi;
}
