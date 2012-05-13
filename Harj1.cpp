#include <iostream>
#include <iomanip>
using namespace std;
//Veijo Väisänen
//XXXXXXXXXXXXXXX
void main()
{
    float klampo[12] = {0};
    float ksadem[12] = {0};
    for(int i=0;i < 12;i++)
   {
        cout<<"\n\n\nAnna kuukauden %d. lämpötila"<<i+1;
        cin>>klampo[i];
        cout<<"\nAnna kuukauden %d. sademäärä"<<i+1;
        cin>>ksadem[i];
    }
  cout<<"\nKuukausi	Keskilämpötila	Sademäärä\n\n";
  for(i=0;i < 12;i++)
  {
     cout.width(5);
	 cout<<"\n"<<i+1;
     if(i >= 9)
		 cout.width(19);
	 else
	     cout.width(20);
     cout.flags(ios_base::showpos);
	 cout<<klampo[i];
     cout.unsetf(ios_base::showpos);
     cout.width(15);
	 cout<<ksadem[i];
  }
  cout<<"\n\n";
}


