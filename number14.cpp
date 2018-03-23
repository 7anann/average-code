#include <iostream>

using namespace std;

int main()
{
    int N;
    float score;
    int total;
    int counter;
    float average;
    float sum1 = 0;
    float sum2 = 0;
    cout << "How many exercise to input?"<<endl;
    cin >> N;
    for (counter = 1; counter <=N; counter++){
        cout << "Score received for exercise"<<" "<< counter<<":"<< endl;
        cin>>score;
        sum1 += score;
        cout << "Total points possible for exercise"<<" "<<counter<<":"<<endl;
        cin>>total;
        sum2 += total;

    }
    cout<<"Your total is" << " "<< sum1<<" "<<"out of"<<" "<<sum2<<endl;
    average = (sum1/sum2) * 100;
    cout<<"The average is"<<"  "<<average<<"%"<<endl;
}
