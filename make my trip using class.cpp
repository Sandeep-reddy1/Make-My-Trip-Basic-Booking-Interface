#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class train
{
    char id[10];
    char pass[10];
    public:void getdetail()
    {
        cout<<"*************************************LOGIN PAGE****************************************************"<<endl;
cout<<"ID:";
cin>>id;
cout<<"password:";
cin>>pass;
    }
};
class A
{
    char name1[12],name2[10];
    int age;
    string mono;
    public:void getdata()
    {
        cout<<"*********************************WELCOME TO INDIAN RAILWAY***************************************"<<endl;
        cout<<"enter your name"<<endl;
        //cin.getline(name, 12);
       // cout<<name;
       cin>>name1>>name2;
     cout<<"enter your age"<<endl;
        cin>>age;
        cout<<"ENTER YOUR 10 digit MO NO:"<<endl;

               cin>>mono;
while(mono.length()!=10){
    cout<<"ENTER YOUR 10 digit MO NO:"<<endl;

               cin>>mono;
}

    }
};
int choose()
{
    int x,n,m,k;
    char naop1[10],naop2[10];
    cout<<"CHOOSE YOUR CHOICE FOR TRAIN DETAILS"<<endl;
    cin>>x;
    switch(x)
    {
 case 1:
        cout<<"-----------------MAHABODI EXPRESS-------------------"<<endl;
       cout<<"no of seat in a bogy"<<"="<<"70"<<endl;
       cout<<"cost for AC seat"<<"="<<"2000/1000km"<<endl;
        cout<<"cost for sleeper seat"<<"="<<"500/1000km"<<endl<<endl<<endl;
        break;
 case 2:
        cout<<"-----------------PURSHOTUM EXPRESS-------------------"<<endl;
       cout<<"no of seat in a bogy"<<"="<<"70"<<endl;
       cout<<"cost for AC seat"<<"="<<"2500/1000km"<<endl;
        cout<<"cost for sleeper seat"<<"="<<"549/1000km"<<endl<<endl<<endl;
        break;
 case 3:
        cout<<"-----------------PASHIM EXPRESS-------------------"<<endl;
       cout<<"no of seat in a bogy"<<"="<<"70"<<endl;
       cout<<"cost for AC seat"<<"="<<"1500/1000km"<<endl;
        cout<<"cost for sleeper seat"<<"="<<"449/1000km"<<endl<<endl<<endl;
        break;
 case 4:
        cout<<"-----------------NANDAN KANAN EXPRESS-------------------"<<endl;
       cout<<"no of seat in a bogy"<<"="<<"70"<<endl;
       cout<<"cost for AC seat"<<"="<<"2000/1000km"<<endl;
        cout<<"cost for sleeper seat"<<"="<<"500/1000km"<<endl<<endl<<endl;
        break;
 case 5:
        cout<<"-----------------GAREEB RATH-------------------"<<endl;
       cout<<"no of seat in a bogy"<<"="<<"70"<<endl;
       cout<<"cost for AC seat"<<"="<<"2000/1000km"<<endl;
        cout<<"cost for sleeper seat"<<"="<<"500/1000km"<<endl<<endl<<endl;
        break;
 case 6:
        cout<<"-----------------MUMBAI TO GOA-------------------"<<endl;
       cout<<"no of seat in a bus"<<"="<<"50"<<endl;
       cout<<"cost for AC seat"<<"="<<"2000/1000km"<<endl;
        cout<<"cost for chair seat"<<"="<<"500/1000km"<<endl<<endl<<endl;
        break;
 case 7:
        cout<<"-----------------MUMBAI TO DELHI-------------------"<<endl;
       cout<<"no of seat in a bus"<<"="<<"50"<<endl;
       cout<<"cost for AC seat"<<"="<<"2000/1000km"<<endl;
        cout<<"cost for chair seat"<<"="<<"500/1000km"<<endl<<endl<<endl;
        break;
 case 8:
        cout<<"-----------------DELHI TO PATNA-------------------"<<endl;
       cout<<"no of seat in a bus"<<"="<<"50"<<endl;
       cout<<"cost for AC seat"<<"="<<"2000/1000km"<<endl;
        cout<<"cost for chair seat"<<"="<<"500/1000km"<<endl<<endl<<endl;
        break;
    }
cout<<"DO YOU WANT TO BOOK YOUR TICKET"<<endl;
cout<<"if yes then press '1'"<<"otherwise press any key"<<endl;
cin>>m;
if(m==1)
{
 cout<<"ENTER NO OF PASSENGER"<<endl;
 cin>>n;
 cout<<"enter the names of all"<<" "<<n<<" "<<"passenger"<<endl;
for(k=0;k<=n;k++)
cin>>naop1>>naop2;
}
else
    n=choose();

}
int tlist()
{
    fstream st;
    st.open("name.txt",ios::in);
    if(!st)
    {
        cout<<"No such file";
    }
    else
    {
        string ch,gh,rh;
        while (!st.eof())
        {
            st >>ch;
            cout<<"\n"<<ch;
        }
        cout<<endl;
        st.close();
    }
}
int main()
{
    train t;
    t.getdetail();
    A a;
    a.getdata();
   int c,f;
   f=tlist();
   c=choose();

}

