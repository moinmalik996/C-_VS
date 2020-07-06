#include <iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main()
{
    char correct[20] = {'A', 'D', 'B', 'B', 'C',
                        'B', 'A', 'B', 'C', 'D',
                        'A', 'C', 'D', 'B', 'D',
                        'C', 'C', 'A', 'D', 'B'};

    char answers[20];

    vector<int> wrong_locatons;

    int wrong = 0,
        right = 0;

    cout<<"Choose between A, B, C or D."<<endl<<endl;
    for (int i = 0; i < 20; i++)
    {
        cout<<"Enter Answer-"<<i+1<<"  :  ";
        cin>>answers[i];
        
        // do {
        //     cout<<endl<<"You Entered Invalid Character."<<endl;
        //     cout<<"Enter Answer-"<<i+1<<"  :  ";
        //     cin>>answers[i];
        // }
        // while(answers[i] != 'A' || answers[i] != 'B' || answers[i] != 'C' || answers[i] != 'D');

        if (answers[i] == correct[i]){

            right++;

        } else {

            wrong++;
            wrong_locatons.push_back(i+1);

        }

    }


    cout<<endl<<"\tStatistics";
    cout<<endl<<"\t----------"<<endl;

    cout<<endl<<"Total No. Of Correct Answers  =  "<<right;
    cout<<endl<<"Total No. Of  Wrong  Answers  =  "<<wrong;

    cout<<endl<<"These Question Numbers are Given Wrong Answers : "<<endl;

    for(int val : wrong_locatons){
        cout<<endl<<val;
    }

}