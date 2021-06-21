#include<iostream>
using namespace std;

int main()
{
    int num[5] = {0, 1, 2, 3, 4};
    int index[5] = {0, 1, 2, 2, 1};
    int newarray[5];
    int i=0;
    while(i<5)
    {
        for(int j=5; j>index[i]; j--)
        {
            newarray[j] = newarray[j-1];
        }
        newarray[index[i]] = num[i];
        i++;
    }
    for(int j=0; j<5; j++)
        cout<<newarray[j]<<" ";
}