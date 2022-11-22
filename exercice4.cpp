#include <iostream>
#include <string>
using namespace std;
//Classe MyClass
class MyClass
{
public:
    string phrase;
    MyClass();//constructeur
    ~MyClass();//destructeur
};
MyClass::MyClass()
{
    cout << "c'est constructeur par defaut" << endl;
}
MyClass::~MyClass()
{
    cout << phrase << endl;
}
int main(int argc, char **argv)
{
    char ph[100];
    MyClass c;
    cout << "Entrer une phrase dans le destructeur: ";
    gets(ph);//pour avoir ecrire des espace dans le destructeur 
    c.phrase = ph;
    return 0;
}
