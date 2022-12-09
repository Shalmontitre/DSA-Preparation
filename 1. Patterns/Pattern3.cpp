/*
-------------------------
*****
 ****
  ***
   **
    *
-------------------------
*/

#include<iostream>
using namespace std;
int main()
{
    int numberOfStars = 5;
    for(int row = 0; row < numberOfStars; row++)
    {
        for(int col = 0; col < numberOfStars; col++)
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
