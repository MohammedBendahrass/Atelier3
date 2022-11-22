#include<iostream>
#include<math.h>
using namespace std;

class vecteur3d
{
protected:
    float x;
    float y;
    float z;
public:
    vecteur3d(float,float,float);
    void affichage();
    vecteur3d somme(vecteur3d,vecteur3d);
    float produit_scalaire(vecteur3d,vecteur3d);
    int coincide(vecteur3d,vecteur3d);
    float norme(vecteur3d);
    vecteur3d normax1(vecteur3d,vecteur3d); // passage par valeur 
    vecteur3d* normax2(vecteur3d *,vecteur3d *); // passage par valeur 
    vecteur3d& normax3(vecteur3d&,vecteur3d&);
};
vecteur3d::vecteur3d(float a=0,float b=0,float c=0)
{
    x=a;
    y=b;
    z=c;
}
void vecteur3d::affichage(){
    cout<<"("<<x<<","<<y<<","<<z<<")";
    cout<<endl;
}
vecteur3d vecteur3d::somme(vecteur3d a,vecteur3d b){
    vecteur3d vs(a.x+b.x,a.y+b.y,a.z+b.z);
    return vs;
}
float vecteur3d::produit_scalaire(vecteur3d a,vecteur3d b){
    vecteur3d ps(a.x*b.x,a.y*b.y,a.z*b.z);
    return ps.x+ps.y+ps.z;
}
int vecteur3d::coincide(vecteur3d a,vecteur3d b){
   return a.x==b.x && a.y==b.y && a.z==b.z ;
}
float vecteur3d::norme(vecteur3d a){
    return sqrt(pow(a.x,2)+pow(a.y,2)+pow(a.z,2));
}
// norm_max
// 1) cas: passage par valeur 
vecteur3d vecteur3d::normax1(vecteur3d v1, vecteur3d v2){
    return norme(v1)>norme(v2)? v1:v2;
}
// 2) cas passage par address
vecteur3d* vecteur3d::normax2(vecteur3d* v1, vecteur3d* v2){
    return norme(*v1)>norme(*v2)? v1:v2;
}
// 3) cas passage par refrence 
vecteur3d& vecteur3d::normax3(vecteur3d& v1, vecteur3d& v2){
    return norme(v1)>norme(v2)? v1:v2;
}

int main(int argc, char const *argv[])
{
    vecteur3d v1(1,2,4),v2(3,1,2);
    v1.affichage();
    v1.coincide(v1,v2);
    cout<<"la norme est: "<<v1.norme(v1)<<endl;
    cout<<"Le produit scalaire est"<<v1.produit_scalaire(v1,v2)<<endl;
    v1.somme(v1,v2).affichage();
    //-------------------------------test pas par valeur-----------------------------//
     vecteur3d hel1 ;
    hel1=v1.normax1(v1,v2);
    if(v1.coincide(v1,hel1)) cout<<"la norme de v1 est  plus grand que v2"<<endl;
    else cout<<"la norme de v2 est  plus grand que v1"<<endl;
     //-------------------------------test pas par adress-----------------------------//
     vecteur3d*hel2;
     hel2=v1.normax2(&v1,&v2);
     if(v1.coincide(v1,hel1)) cout<<"la norme de v1 est  plus grand que v2"<<endl;
    else cout<<"la norme de v2 est  plus grand que v1"<<endl;
     //-------------------------------test pas par reffe-----------------------------//
     vecteur3d hel3;
     hel3=v1.normax3(v1,v2);
     if(v1.coincide(v1,hel1)) cout<<"la norme de v1 est  plus grand que v2"<<endl;
    else cout<<"la norme de v2 est  plus grand que v1"<<endl;
    return 0;
}
