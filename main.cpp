#include <iostream>
using namespace std ;
int main() {
    int x;
    cin>>x;
    int compt=0;
    int tab[]={5,4,3,2,1};
    for(int i=0; i<5; i++)
    {
        compt+=x/tab[i];
        x=x%tab[i];

    }
    cout<<compt;

    return 0;
}