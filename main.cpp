#include <iostream>
using namespace std;

int main()
{
  int rad1;
  float volsp;
  cout << "\n\n Laske pallon tilavuus :\n";
  cout << "----------------------------\n";
  cout<<" Syötä pallon säde : ";
  cin>>rad1;
  volsp=(4*3.14*rad1*rad1*rad1)/3;
  cout<<" Pallon tilavuus on : "<< volsp << endl;
  cout << endl;
  



int alueen_leveys = 15;
int alueen_pituus = 35;

int laatta_leveys = 5;
int laatta_pituus = 8;
 
cout <<"Laatta menee kokonaisena piha-alueelle: "<< (alueen_leveys/laatta_leveys)*
(alueen_pituus/laatta_pituus)<<" kertaa"
<<endl;

cout << "Leveyden jakojäännös="<<alueen_leveys%laatta_leveys<<endl;

cout << "Pituuden jakojäännös="<<alueen_pituus%laatta_pituus<<endl;

cout << "valmis " << endl;

string autoja[]={"Hyundai", "Mersu", "Toyota", "Lamborghini", "Volkswaken"};

cout << endl;
cout << autoja[3]<< endl;

autoja[0]="Saab";

cout << autoja[0]<< endl
<< endl;
int ika = 15;

if (ika==15)
{
cout<<"Olet 15 vuotias";
}

if (ika<15)
{
cout << "Olet nuorempi kuin 15";
}

if(ika>15){
  cout << "olet vanhempi kuin 15";
}
if(ika != 15){
  cout << "et ole 15 vuotias";
}

else if (ika < 15){
  cout << "olet alle 15";
}
else{
cout << "olet yli 15";
}




}