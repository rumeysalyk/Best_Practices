/*
  12/07/2021
  Word Game
*/

#include<iostream>
using namespace std;

int main()
{
    string words[5] = {"cam","kum","buz","toz","yaz"};
    char letter,board[3]={'_','_','_'};           
    int position,checkSum[3]={0};

    cout<<"Enter a number from 1 to 5: ";
    cin>>position;

    cout<<"Guess the three digit word"<<endl;


    while(1)
    {
      //print the board (_ _ _)
        for(int i=0;i<3;i++)
            cout<<board[i];
        
      //Get the letter from user
        cout<<endl<<"Enter a letter: ";
        cin>>letter;

      // find the letters matched at chosen position
        for(int i=0;i<3;i++)
        {
            if(letter == words[position-1][i])
            {
                board[i]=letter;
                checkSum[i]+=1;
            }     
        }

        int j=0;
        if(checkSum[j]>=1 && checkSum[j+1]>=1 && checkSum[j+2]>=1)
        {
            cout<<"******* congrats ********";
            break;
        }
            
    }

    return 0;
}
