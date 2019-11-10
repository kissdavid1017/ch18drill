#include<std_lib_facilities.h>
using namespace std;

vector<int> gv={1,2,4,8,16,32,64,128,256,512};
vector<int> vv(10);

void f(vector<int>v)
{
    vector<int>lv(10);
    lv=gv;
    cout<<"lv vector elemei:"<<endl;
    for(int i=0;i<10;i++)
    {

    cout<<i<<".elem:"<<lv[i]<<endl;
    }
    cout<<endl;

    vector<int>lv2=v;
    cout<<"lv2 vector elemei:"<<endl;
    for(int i=0;i<10;i++)
    {

    cout<<i<<".elem:"<<lv2[i]<<endl;
    }



}
void fact(vector<int>v)
{
    cout<<endl;
    int factor=1;
    for(int i=0;i<vv.size();i++)
    {
        factor=factor*(i+1);
        vv[i]=factor;
        cout<<i<<".elem="<<vv[i]<<endl;

    }
}



int main()
{
 f(gv);
 fact(vv);
}

