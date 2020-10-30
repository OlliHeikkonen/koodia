#include <iostream>
using namespace std;

void KontrollinSiirtoEsimerkki(){
cout<<"Kävin täällä"<<endl;
}

void KontrollinSiirtoParametrilla (string etunimi){
cout<<etunimi;
}


int main()
{
  int rad1;
  float volsp;
  cout << "\n\n Laske pallon tilavuus :\n";
  cout << "--------------------------------\n";
  cout<<" Syötä pallon säde : ";
  cin>>rad1;
  volsp=(4*3.14*rad1*rad1*rad1)/3;
  cout<<" Pallon tilavuus on : "<< volsp << endl; 

cout <<"--------------------------------"<< endl;

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

cout <<"--------------------------------"<< endl;

string autoja[10]={"Hyundai", "Mersu", "Toyota", "Lamborghini", "Volkswaken"};


cout << autoja[3]<< endl;

autoja[0]="Saab";
autoja[6]="Honda";
cout << autoja[6]<< endl;
cout << autoja[0]<< endl;

cout <<"--------------------------------"<< endl;

int ika = 15;

if (ika==15)
{
cout<<"Olet 15 vuotias"<< endl;
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
cout << "olet yli 15"<< endl;
}
cout <<"--------------------------------"<< endl;

int i=0;
while(i<5){
i=i+1;
cout<<"while loopin kierros nro: "<<i<<endl;

}
cout <<"--------------------------------"<< endl;
for(int i=1; i<5; i++){
  cout << "for loopin kierros nro: " << i << endl;
}
cout <<"--------------------------------"<< endl;
KontrollinSiirtoEsimerkki();

KontrollinSiirtoParametrilla("Olli");







}