#include<iostream>
using namespace std;
class test
{
public:
    static int count;
    int call();
};
int test::count=0;
int test::call(){
    return count++;
}
int main(int argc, char const *argv[])
{
    test t;
    t.call();
    t.call();
    t.call();
    t.call();
    cout<<t.count;
    return 0;
}
