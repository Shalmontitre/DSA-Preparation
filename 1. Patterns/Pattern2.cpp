/*
-------------------------
     *
    **
   ***
  ****
 *****
-------------------------
*/

#include<iostream>
using namespace std;
int main()
{
    int numberOfStars = 5;
    for(int row = numberOfStars; row > 0; row--)
    {
        for(int col = 0; col <= numberOfStars; col++)
        {
            if(col >= row)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
