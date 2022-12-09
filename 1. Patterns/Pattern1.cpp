/*
-------------------------
* 
* * 
* * * 
* * * * 
* * * * * 
-------------------------
*/

#include<iostream>
using namespace std;
int main()
{
    int numberOfStars = 5 ;
    for(int i = 0; i < numberOfStars; i ++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
