#include<iostream>
using namespace std;
class Media
{
protected:
    char *titre;
public:
    char *id(char* i){
        titre = i;
    }
    virtual void imprimer(){
        cout<<"id: "<<titre;
    }
};
class Audio: public Media
{
protected:
   int volume;
public:
    int get_volume(int v){
        volume = v;
        return volume;
    }
    void imprimer()
    {
        Media::imprimer();
        cout << endl;
        cout << "le duration de audio est " << volume << "seconde" << endl;
    }
};
class CD : public Audio
{
protected:
    string type;
public:
    string get_type(string t)
    {
        type = t;
        return type;
    }

    void imprimer()
    {

        Audio::imprimer();
        cout << endl;
        cout << "le type de cd est  : " << type << endl;
    }
};
class Cassette : public Audio
{
protected:
    float poid;
public:
    float get_poid(float p)
    {
        poid = p;
        return p;
    }
    void imprimer()
    {
        Audio::imprimer();
        cout << endl;
        cout << "le poid de casette est  : " << poid << "g" << endl;
    }
};
class Disque : public Audio
{
protected:
    int capacite;
public:
    int get_capacite(int c)
    {
        capacite = c;
        return capacite;
    }

    void imprimer()
    {

        Audio::imprimer();
        cout << endl;
        cout << "la capacite de disque est  : " << capacite << "gega" << endl;
    }
};
class Livre: public Media
{
protected:
    string auteur;
public:

    string get_auteur(string n)
    {
        auteur = n;
        return auteur;
    }
    void imprimer()
    {
        Media::imprimer();
        cout << endl;
        cout << "le nom du livre  est " << auteur << endl;
    }
};
class Presse: public Media
{
public:
    string name1;
    string get_name1(string np)
    {
        name1 = np;
        return np;
    }
    void imprimer()
    {
        Media::imprimer();
        cout << endl;
        cout << "le nom du press  est " << name1 << endl;
    }
};
class Magasine : public Presse
{
public:
    string name_m;
    string get_namem(string nm)
    {
        name_m = nm;
        return nm;
    }
    void imprimer()
    {
        Presse::imprimer();
        cout << endl;
        cout << "le nom du magasine est " << name_m << endl;
    }
};
class Journal : public Presse
{
public:
    string name_j;
    string get_namej(string nj)
    {
        name_j = nj;
        return nj;
    }
    void imprimer()
    {
        Presse::imprimer();
        cout << endl;
        cout << "le nom du journal est " << name_j << endl;
    }
};
class Revenue : public Presse
{
public:
     int temp;
    int get_temp(int t)
    {
        temp = t;
        return t;
    }
    void imprimer()
    {
        Presse::imprimer();
        cout << endl;
        cout << "le temps de la revue est : " << temp << endl;
    }
};
int main(int argc, char const *argv[])
{
    Media m1;
    m1.id("MD");
    m1.imprimer();
    cout <<endl;
    Audio o1;
    o1.id("AD");
    o1.get_volume(50);
    o1.imprimer();
    cout << endl;
    Livre l1;
    l1.id("LV");
    l1.get_auteur("Paulo Coelho");
    l1.imprimer();
    cout << endl;
    Presse p1;
    p1.id("PS");
    p1.get_name1("Hespress");
    p1.imprimer();
    cout << endl;
    CD c1;
    c1.id("CD");
    c1.get_type("DVD");
    c1.get_volume(30);
    c1.imprimer();
    cout << endl;
    Cassette cc1;
    cc1.id("CST");
    cc1.get_poid(12.6);
    cc1.get_volume(20);
    cc1.imprimer();
    cout <<endl;
    return 0;
}
