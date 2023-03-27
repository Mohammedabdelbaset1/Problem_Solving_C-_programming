#include<iostream>
/*
    Draw the following shape depanding on the value of n:number of rows.
         *
        ***
       *****
      *******
     *********
    ***********    
   *************
  ***************
 *****************
*******************

*/
using namespace std;

int main()
{
    int n;
    cout<<"Enter Num. of Rows: ";
    cin>> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(2*n-1);j++)
        {
            if((j>= (n-(i-1))) && (j<= (n+(i-1))))
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


    return 0;
}