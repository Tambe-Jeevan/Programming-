#include<iostream>
using namespace std;
int main()
{
    int tot, arr[50], i, j, temp, small, chk, index;
    cout<<"Enter the Size of Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    for(i=0; i<(tot-1); i++)
    {
        chk=0;
        small = arr[i];
        for(j=(i+1); j<tot; j++)
        {
            if(small>arr[j])
            {
                small = arr[j];
                chk++;
                index = j;
            }
        }
        if(chk!=0)
        {
        temp = arr[i];
        arr[i] = small;
        arr[index] = temp;
        }
    }
    cout<<"Step "<<i+1<<": ";
for(j=0; j<tot; j++)
    cout<<arr[j]<<" ";
cout<<endl;
    return 0;
}