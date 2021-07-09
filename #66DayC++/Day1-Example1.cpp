#include<iostream>
using namespace std;

int main()
{
    int points[3]={0};
    char studentAnswers[3][10],answerKey[10];

    int trueAnswers, falseAnswers;

    //Create the answer key
    cout<<"Enter the answer key: ";
    for(int i=0;i<10;i++)
        cin>>answerKey[i];

    //Take the answers of the students
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the answers of student "<<i+1;
        for(int j=0;j<10;j++)
        {
            cin>>studentAnswers[i][j];
        }
        cout<<endl;
    }

    //Compare the answers of the students to answer key
    for(int i=0;i<3;i++)
    {
        trueAnswers=falseAnswers=0;
        for(int j=0;j<10;j++)
        {
            if(studentAnswers[i][j]==answerKey[j])
                trueAnswers++;
            else
                falseAnswers++;
        }
        points[i] = trueAnswers - (falseAnswers/2);
    }

    //Show the points of the students 
    for(int k=0;k<3;k++)
    {
        cout<<"The point of student "<<k+1<<" "<<points[k]<<endl;
    }
  
    return 0;
}
