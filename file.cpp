#include <iostream> 
#include <iomanip>
using namespace std;
//A comment line
void main()
{	 
	int ika; 
	char *etunimi; 
	etunimi = new char[30];
	char *sukunimi; 
	sukunimi = new char[40];	
	cout<<"\nAnna etunimi"<<endl;
 	cin>>etunimi;	
	cout<<"\nNimi: "<<etunimi<<" "<<sukunimi<<","<<ika<<",vuotias"<<endl;
	delete [] etunimi;
	delete [] etunimi;
}
