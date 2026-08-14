#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word1 = "Banana";
    string word2 = "Apple";
    string word3 = "Banana";

    int result1 = word1.compare(word2); //Positive: word1 comes after word2
    int result2 = word2.compare(word1); // Negative: word2 comes before word1
    int result3 = word1.compare(word3); // 0: Both strings are equal

    cout << "Comparison result: " << result1 << endl; 
    cout << "Comparison result: " << result2 << endl; 
    cout << "Comparison result: " << result3 << endl; 

    return 0;
}