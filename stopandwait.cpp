#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of frames:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\nSender:Sending frames"<<i;
        cout<<"\nReciever:Frame"<<i<<"recieved";
        cout<<"\nReciever: Sending ACK"<<i;
        cout<<"\nSender:ACK"<<i<<"recieved";
    }
    cout<<"\n\n All Frames Transmitted Successfully.";
    return 0;
}       