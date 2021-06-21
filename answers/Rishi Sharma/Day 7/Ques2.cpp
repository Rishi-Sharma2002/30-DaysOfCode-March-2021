#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {3, 0, 1, 1, 9, 7};
    int a=7, b=2, c=3;

    for(int i=0,j=i+1,k=j+1; i<4,j<5,k<6; i++, j++, k++)
    {
                        if (arr[i] - arr[j] <= a  && arr[j] - arr[k] <=b && arr[i]-arr[k]<=c)
                            {
                                cout << arr[i] << "," << arr[j] << "," << arr[k] <<endl;                  
                            }


    }

    return 0;
}

