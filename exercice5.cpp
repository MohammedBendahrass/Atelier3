#include<iostream>
#include<string.h>
using namespace std;

class Animal//classe mere 
{
protected:
    string nom;
    int age;
public:
    void set_values(string,int);
};
void Animal::set_values(string nom,int age) //methode pour faire entrer les informations
{
    this->nom=nom;
    this->age=age;
}
class zebra: public Animal//classe fille de animal
{
public:
    void message_zebra();//afficher les attribut de zebra
};
void zebra::message_zebra(){
    cout<<"Zebra s'appelle "<<nom<<", il a "<<age<<" ans,ses origine vient d'Afrique.";
}
class dolphin: public Animal
{
public:
    void message_dolphin();//afficher les attribut de dolphin
};
void dolphin::message_dolphin(){
    cout<<"dolphin s'appelle "<<nom<<", il a "<<age<<" ans,ses origine vient de New Zeeland.";
}
int main(int argc, char const *argv[])
{
    zebra z;
    dolphin d;
    z.set_values("zebrax",5);
    d.set_values("dodo",13);
    z.message_zebra();
    cout<<endl;
    d.message_dolphin();
    return 0;
}





