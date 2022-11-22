#include<iostream>
using namespace std;
class mere
{
private:
    /* data */
public:
    mere();
    void display();
};
mere::mere()
{
}
void mere::display(){
    cout<<"Cette methode de classe mere";
}
class fille: public mere
{
private:
    /* data */
public:
    fille();
    void display();

};
fille::fille(){}
void fille::display(){
    cout<<"Cette methode de classe fille";
}
int main(int argc, char const *argv[])
{
    fille f;
    f.display();
    return 0;
}



