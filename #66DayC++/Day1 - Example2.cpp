/*
  Day1-Ex2:
  Birincisi 3 karakterden oluşan,ikincisi 6 karakterden oluşan iki kelimeyi iki diziye okuyunuz. 
  İlk kelimenin tüm harflerinin ikinci kelimede olup olmadığını ekrana yazdırınız
*/

#include<iostream>
using namespace std;

int main()
{
    char word1[3] ,word2[6];
    int flag=0;

    cout<<"Enter the first word: ";
    for(int i=0;i<3;i++)
        cin>>word1[i];
    
    cout<<"Enter the second word: ";
    for(int i=0;i<6;i++)
        cin>>word2[i];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(word2[j]==word1[i])
            {
                flag++;

            }
        }
    }

    if(flag>=3)
        cout<<"The second word contains the fist word";
    else
        cout<<"The second word does not contain the first word";
    
    return 0;
}
