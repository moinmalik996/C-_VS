#include <iostream>
#include<iomanip>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    // Arrays
    char correct[20], studentans[20];

    // File Declarations
    ifstream correct_ans, student_ans;
    correct_ans.open("CorrectAnswers.txt");
    student_ans.open("StudentAnswers.txt");

    //Vector Declarations
    vector<char> right_answers;
    vector<char> wrong_answers;
    vector<int> wrong_numbers;

    // Right or Wrong Answers Counters
    double right = 0, wrong = 0, correct_ans_perc = 0;
    string pass_fail;

    // Assigning Data From File To Arrays
    for (int i = 0; i < 20; i++)
    {
        correct_ans >> correct[i];
        student_ans >> studentans[i];
    }
    correct_ans.close();
    student_ans.close();

    // Comparing Correct and User Answers
    for (int i = 0; i < 20; i++) 
    {
        if (correct[i] == studentans[i]){

            right++;

        } else {

            wrong_numbers.push_back(i);
            right_answers.push_back(correct[i]);
            wrong_answers.push_back(studentans[i]);
            wrong++;

        }
    }

    correct_ans_perc = ( right / 20 ) * 100;

    if(correct_ans_perc > 70)
        pass_fail = "Passed";
    else
        pass_fail = "Failed";



    // Showing Data
    cout<<endl<<endl<<"\tStatistics";
    cout<<endl<<"\t----------"<<endl;


    cout<<"Numbers\t | Right Answers\t | Wrong Answers"<<endl;
    for(int i = 0; i < wrong; i++)
    {
        cout<<wrong_numbers[i]+1<<"\t     "<<right_answers[i]<<"\t\t\t\t     "<<wrong_answers[i]<<endl;
    }
    cout<<endl<<endl<<"Total Questions Missed  :  "<<wrong<<endl;
    cout<<"Students has "<<pass_fail<<" the Exam"<<endl<<endl<<endl;




    return 0;

}