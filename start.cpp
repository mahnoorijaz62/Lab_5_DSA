#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{   //srand to generate different random sequence of numbers each time the dice is rolled
    srand(time(0));
    int t;
    cout << "how many times you want to throw the dice?" << endl;
    cin>>t;
    cout<<"sequence of numbers are"<<endl;
    //loop to generate the sequence for the number of times user asked
    for(int i=0;i<t;i++){
        cout<<1+rand()%6<<endl;
    }
}