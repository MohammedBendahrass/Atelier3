#include<iostream>
using namespace std;
class personne
{
private:
    string nom;
    string prenom;
    string date;
public:
    personne(string,string,string);
    void afficher();
};
personne::personne(string n,string p,string d)
{
    nom = n;
    prenom = p;
    date = d;
}
void personne::afficher(){
    cout<<"Nom: "<<nom<<endl;
    cout<<"Prenom: "<<prenom<<endl;
    cout<<"Date de naissance: "<<date<<endl;
}
class Employe: public personne
{
private:
    int salaire;
public:
    Employe(string,string,string,int);
    void afficher();
};
Employe::Employe(string n,string p,string d,int s): personne(n,p,d)
{
    salaire = s;
}
void Employe::afficher(){
    personne::afficher();
    cout<<"Le salaire est "<<salaire<<"dh"<<endl;
}
class Chef: public Employe
{
private:
    string service;
public:
    Chef(string,string,string,int,string);
    void afficher();
};
Chef::Chef(string n,string p,string d,int s,string ser): Employe(n,p,d,s)
{
    service = ser;
}
void Chef::afficher(){
    Employe::afficher();
    cout<<"Le service est "<<service<<endl;
}
class Directeur: public Chef
{
private:
    string societe;
public:
    Directeur(string,string,string,int,string,string);
    void afficher();
};
Directeur::Directeur(string n,string p,string d,int s,string ser,string soc):Chef(n,p,d,s,ser)
{
    societe = soc;
}
void Directeur::afficher(){
    Chef::afficher();
    cout<<"La societe est "<<societe<<endl;
}
int main(int argc, char const *argv[])
{
    string nom,prenom,date,service,societe;
    int salaire;
    cout<<"Entrer votre nom: ";
    cin>>nom;
    cout<<"Entrer votre prenom: ";
    cin>>prenom;
    cout<<"Entrer votre date de naissance (jj/mm/aaaa): ";
    cin>>date;
    cout<<"Entrer votre salaire: ";
    cin>>salaire;
    cin.ignore();
    cout<<"Entrer votre service: ";
    getline(cin,service);//pour faire entrer tout les caractere dans un ligne sans afficher un erreur de l'espace
    cout<<"Entrer votre societe: ";
    getline(cin,societe);
    cout<<"AFFICHER"<<endl;
    cout<<"---------------------Personne--------------------------"<<endl;
    personne e(nom,prenom,date);
    e.afficher();
    cout<<"---------------------Employe--------------------------"<<endl;
    Employe e1(nom,prenom,date,salaire);
    e1.afficher();
    cout<<"---------------------Chef--------------------------"<<endl;
    Chef e2(nom,prenom,date,salaire,service);
    e2.afficher();
    cout<<"---------------------Directeur--------------------------"<<endl;
    Directeur e3(nom,prenom,date,salaire,service,societe);
    e3.afficher();
    return 0;
}


