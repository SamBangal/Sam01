#include<iostream>
using namespace std;
class Time
{
    public:
    int hr,min,sec,add;
    int add_Time(int x,int y)
    {
        add=0;
        add=x+y;
        return 0;
    }
};
int main()
{
    Time a,b,c,d,g;
    int quo,rem,quo1,rem1;
    cout<<"Enter first hours:minutes:seconds";
    cin>>a.hr>>a.min>>a.sec;
    cout<<"\nEnter second hours:minutes:seconds";
    cin>>b.hr>>b.min>>b.sec;
    c.add_Time(a.hr,b.hr);
    d.add_Time(a.min,b.min);
    g.add_Time(a.sec,b.sec);
    if(g.add>=60)
    {
        quo=g.add/60;
        rem=g.add%60;
        d.add=d.add+quo;
        if(d.add>=60)
        {
            quo1=d.add/60;
            rem1=d.add%60;
            c.add=c.add+quo1;
            cout<<"\n"<<c.add<<":"<<rem1<<":"<<rem;
        }
    }
    else if(d.add>=60)
    {
        quo=d.add/60;
        rem=d.add%60;
        c.add=c.add+quo;
        cout<<"\n"<<c.add<<":"<<rem<<":"<<g.add;  
    } 
    else
    {
        cout<<"\n"<<c.add<<":"<<d.add<<":"<<g.add;
    }
    
}