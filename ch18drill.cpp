#include<std_lib_facilities.h>
using namespace std;

int ga[10]={1,2,4,8,16,32,64,128,256,512};
int aa[10];

void fact(int v[],int db)
{
     cout<<endl;
    int factor=1;
    for(int i=0;i<db;i++)
    {
        factor=factor*(i+1);
        aa[i]=factor;
        cout<<i<<".elem="<<aa[i]<<endl;

    }
}
void f(int v[],int db)
{
    int la[10];
    for(int i=0;i<db;i++)
    {
        la[i]=ga[i];
        cout<<i<<".elem:"<<la[i]<<endl;
    }
    cout<<endl;

    int *p=new int[db];
    for(int i=0;i<db;i++)
    {
        p[i]=la[i];
        cout<<i<<".elem:"<<p[i]<<endl;
    }
    delete[]p;



}




int main()
{
  f(ga,10);
  fact(aa,10);
}
