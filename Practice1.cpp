#include<iostream>

using namespace std;

int main()
{
    int yas,dogumYili;

    cout<<"Dogum yilinizi giriniz: ";
    cin>>dogumYili;

    yas = 2021-dogumYili;
    cout<<"Yasiniz: "<<yas<<endl;

    if(dogumYili>=1946 && dogumYili<=1964)
    {
        cout<<"Bebek patlamasi kusaginda yer aliyorsunuz.";
    }
    else if(dogumYili>=1965 && dogumYili<=1980)
    {
        cout<<"X kusaginda yer aliyorsunuz.";
    }
    else if(dogumYili>=1981 && dogumYili<=1999)
    {
        cout<<"Y kusaginda yer aliyorsunuz";
    }
    else if(dogumYili>=2000 && dogumYili<=2021)
    {
        cout<<"Z kusaginda yer aliyorsunuz";
    }
    else
    {
        cout<<"Lutfen gecerli bir yil giriniz.";
    }


    return 0;
}