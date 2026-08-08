#include <iostream>
using namespace std;
struct Question{
    string question;
    string options[3];
    int correctAnswer;
};
void printCorrectOrNot(Question q){
    int choose;
    cout<<q.question<<endl;
    for(int i =0; i<3; i++)
    cout<<q.options[i] <<endl;
    cout<<"Choose 1-3: ";
    cin>>choose;
    if (choose == q.correctAnswer){
        cout<<"Correct! " <<endl;
    }
    else
       cout<<"Incorrect! " <<endl;

    cout<<" " <<endl;
}
int main(){
    Question Q1, Q2, Q3, Q4, Q5;
    Q1.question = "What is the smallest country? ";
    Q1.options[0]= "1. USA";
    Q1.options[1]= "2. India";
    Q1.options[2]= "3. Vatican City";
    Q1.correctAnswer = 3;
    printCorrectOrNot(Q1);

    Q2.question = "Which planet is Known as the Red Planet? ";
    Q2.options[0]= "1. Mars";
    Q2.options[1]= "2. Venus";
    Q2.options[2]= "3. Jupiter";
    Q2.correctAnswer = 1;
    printCorrectOrNot(Q2);

    Q3.question = "How many continents are there? ";
    Q3.options[0]= "1. 5";
    Q3.options[1]= "2. 6";
    Q3.options[2]= "3. 7";
    Q3.correctAnswer = 3;
    printCorrectOrNot(Q3);

    Q4.question = "What is the capital of Malaysia? ";
    Q4.options[0]= "1. Johor Bahru";
    Q4.options[1]= "2. Kuala Lumpur";
    Q4.options[2]= "3. Penang";
    Q4.correctAnswer = 2;
    printCorrectOrNot(Q4);

    Q5.question = "which programing language are you learning? ";
    Q5.options[0]= "1. Java";
    Q5.options[1]= "2. C++";
    Q5.options[2]= "3. Python";
    Q5.correctAnswer = 2;
    printCorrectOrNot(Q5);




}
