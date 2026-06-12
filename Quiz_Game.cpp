#include <iostream>
using namespace std;
void startquiz()
{
    cout << "====Displaying Questions==== " << endl;
    // 1st Question
    cout << "1. What is the capital of India?" << endl;
    cout << "A. Mumbai" << endl;
    cout << "B. Delhi" << endl;
    cout << "C. Chennai" << endl;
    cout << "D. Kolkata\n"
         << endl;

    char answer1;
    cout << "Enter Your Answer : ";
    cin >> answer1;

    int point = 0;

    if (answer1 == 'b' || answer1 == 'B')
    {
        cout << "Correct Answer\n"
             << endl;
        point++;
    }
    else
    {
        cout << "Wrong Answer"
             << endl;
        cout << "Correct Answer: B. Delhi\n";
    }

    // 2nd Question
    cout << "2. National Animal of India?" << endl;
    cout << "A. Lion" << endl;
    cout << "B. Elephant" << endl;
    cout << "C. Tiger" << endl;
    cout << "D. Deer" << endl;

    char answer2;
    cout << "Enter Your Answer : ";
    cin >> answer2;

    if (answer2 == 'c' || answer2 == 'C')
    {
        cout << "Correct Answer\n"
             << endl;
        point++;
    }
    else
    {
        cout << "Wrong Answer\n"
             << endl;
        cout << "Correct Answer: C. Tiger\n"
             << endl;
    }

    // 3rd Question
    cout << "3. National Bird of India?" << endl;
    cout << "A. Sparrow" << endl;
    cout << "B. Peacock" << endl;
    cout << "C. Parrot" << endl;
    cout << "D. Crow\n"
         << endl;

    char answer3;
    cout << "Enter Your Answer : ";
    cin >> answer3;

    if (answer3 == 'b' || answer3 == 'B')
    {
        cout << "Correct Answer\n"
             << endl;
        point++;
    }
    else
    {
        cout << "Wrong Answer\n"
             << endl;
        cout << "Correct Answer: B. Peacock\n"
             << endl;
    }

    // 4th Question
    cout << "4. Largest Planet in the Solar System?" << endl;
    cout << "A. Earth" << endl;
    cout << "B. Mars" << endl;
    cout << "C. Jupiter" << endl;
    cout << "D. Saturn\n"
         << endl;

    char answer4;
    cout << "Enter Your Answer : ";
    cin >> answer4;

    if (answer4 == 'c' || answer4 == 'C')
    {
        cout << "Correct Answer\n"
             << endl;
        point++;
    }
    else
    {
        cout << "Wrong Answer\n"
             << endl;
        cout << "Correct Answer: C. Jupiter\n"
             << endl;
    }

    // 5th Question
    cout << "5. Which planet is known as the Red Planet?" << endl;
    cout << "A. Venus" << endl;
    cout << "B. Jupiter" << endl;
    cout << "C. Mars" << endl;
    cout << "D. Mercury\n"
         << endl;

    char answer5;
    cout << "Enter Your Answer : ";
    cin >> answer5;

    if (answer5 == 'c' || answer5 == 'C')
    {
        cout << "Correct Answer\n"
             << endl;
        point++;
    }
    else
    {
        cout << "Wrong Answer\n"
             << endl;
        cout << "Correct Answer: C. Mars\n"
             << endl;
    }

    cout << "Your Score is : " << point << "/5" << endl;

    if (point >= 0 && point <= 2)
    {
        cout << "Beginner\n"
             << endl;
    }

    if (point >= 3 && point <= 4)
    {
        cout << "Good\n"
             << endl;
    }

    if (point == 5)
    {
        cout << "Expert\n"
             << endl;
    }
}

int main()
{
    int choice = 0;

    while (choice != 3)
    {
        cout << "====QUIZ GAME====" << endl;
        cout << "1. Start Quiz" << endl;
        cout << "2. Rules" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Starting Quiz...\n"
                 << endl;
            startquiz();
            break;

        case 2:
            cout << "Rules:" << endl;
            cout << "1. Each correct answer = 1 point" << endl;
            cout << "2. No negative marking" << endl;
            cout << "3. Total 5 questions\n"
                 << endl;
            break;

        case 3:
            cout << "Thank You For Playing\n"
                 << endl;
            break;

        default:
            cout << "Invalid Choice!\n"
                 << endl;
            break;
        }
    }
    return 0;
}