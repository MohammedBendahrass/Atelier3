#include <iostream>
using namespace std;
class shape
{
protected:
    float l;//longueur
    float h;//hauteur
public:
    shape(float,float);//constructeur
};
shape::shape(float l,float h)
{
    this->l=l;
    this->h=h;
}
class rectangle: public shape //classe fille de shape
{
public:
rectangle(float,float);//constructeur
    float area();//methode pour calculer l'aire de rectangle
};
rectangle::rectangle(float l,float h): shape(l,h){
}
float rectangle::area(){
    return l*h;
} 
class triangle: public shape
{
public:
triangle(float,float);//constructeur
    float area();//methode pour calculer l'aire de triangle
};
triangle::triangle(float l,float h): shape(l,h){
}
float triangle::area(){
    return (l*h)/2;
} 
int main(int argc, char const *argv[])
{
    rectangle r(3.5,6.3);
    triangle t(3.5,6.3);
    cout<<"L'aire de rectangle est: "<<r.area()<<endl;
    cout<<"L'aire de triangle est: "<<t.area();
    return 0;
}

