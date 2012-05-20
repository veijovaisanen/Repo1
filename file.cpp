#include <iostream> 
#include <iomanip>
using namespace std;
//A comment line
//B new line
void main()
{	 
	int ika; 
	char *etunimi; 
	etunimi = new char[40];
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
