#ifndef TRIVIA_H
#define TRIVIA_H

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <conio.h>
void trivia()
{
    string ans;
    int count = 0;
    cout << endl << "***Welcome to Trivia***" << endl;
    cout << "If you'd like to leave, please type \"leave\". Otherwise, enjoy the game!" << endl;
    cin >> ans;
    if (ans == "leave" || ans == "Leave")
    {
        cout << "Exiting Trivia";
        Sleep(1000);
        cout << ".";
        Sleep(1000);
        cout << ".";
        Sleep(1000);
        cout << "." << endl << endl;
        return;
    }
    cout << endl << "Questions will pop up on your screen. " << endl;
    cout << "Answer by typing the letter associated with your guess." << endl;	// instructions for game
    cout << "Are you ready?" << endl;
    cin >> ans;
    cout << endl;
    Sleep(3000);

    cout << "Question 1: What is the ONLY U.S. state to grow coffee beans?" << endl;
    cout << "a. Florida" << setw(20) << "b. Hawaii" << endl;
    cout << "c. California" << setw(20) << "        d. Louisianna" << endl;
    cin >> ans;
    Sleep(1000);
    cout << endl;
    if (ans == "b" || ans == "B")
    {
        cout << "You got it right!" << endl << endl;
        count++;
    }
    else
    {
        cout << "It's actually b. Hawaii. Better luck on the next one!" << endl << endl;
    }
    Sleep(2000);

    cout << "Question 2: What was the last movie Walt Disney was able to work on before he died?" << endl;
    cout << "a. Mary Poppins" << setw(20) << "        b. 101 Dalmatians" << endl;
    cout << "c. The Jungle Book" << setw(20) << "     d. The Sword in the Stone" << endl;
    cin >> ans;
    Sleep(1000);
    cout << endl;
    if (ans == "c" || ans == "C")
    {
        cout << "Correct! " << endl << endl;;
        count++;
    }
    else
    {
        cout << "Ooh. Sorry friend. The correct answer was c. The Jungle Book" << endl << endl;
    }
    Sleep(2000);

    cout << "Question 3: What is the only edible food that never expires?" << endl;
    cout << "a. white rice" << setw(20) << "b. rye" << endl;
    cout << "c. barley" << setw(20) << "    d. honey" << endl;
    cin >> ans;
    Sleep(1000);
    cout << endl;
    if (ans == "d" || ans == "D")
    {
        cout << "Honey, you got it right." << endl;
        count++;
        cout << "Imagine bees living as long as their creation. Scary..." << endl << endl;
    }
    else
    {
        cout << "It's actually honey." << endl;
        cout << "Hopefully you're better with TV show: Friends." << endl << endl;
    }
    Sleep(2000);

    cout << "Question 4: What is the middle name of the Friends character Chandler?" << endl;
    cout << "a. Eustace" << setw(20) << "b. Francis" << endl;
    cout << "c. Bing" << setw(20) << "  d. Muriel" << endl;
    cin >> ans;
    Sleep(1000);
    cout << endl;
    if (ans == "d" || ans == "D")
    {
        cout << "Oh. My. God. We got a Friends fanatic over here!" << endl << endl;
        count++;
    }
    else
    {
        cout << "His middle name is Muriel. I know. It's strange" << endl;
        cout << "His last name is Bing, so he was doomed from the start." << endl << endl;
    }
    Sleep(2000);

    cout << "Question 5: Which is NOT an infinity stone?" << endl;
    cout << "a. spirit" << setw(20) << "b. reality" << endl;
    cout << "c. mind" << setw(20) << "d. power" << endl;
    cin >> ans;
    Sleep(1000);
    cout << endl;
    if (ans == "a" || ans == "A")
    {
        cout << "You're too good. I couldn't trick you." << endl << endl;
        count++;
    }
    else
    {
        cout << "Spirit Stone is not an infinity stone. " << endl << endl;
    }

    Sleep(2000);
    cout << "Question 6: What is the most viewed video on Youtube?" << endl;
    cout << "a. Despacito" << setw(20) << "  b. Baby Shark" << endl;
    cout << "c. Gangnam Style" << setw(20) << "d. Uptown Funk" << endl;
    cin >> ans;
    Sleep(1000);
    cout << endl;
    if (ans == "b" || ans == "B")
    {
        cout << "You knew that? You're too good." << endl << endl;
        count++;
    }
    else if (ans == "a" || ans == "A")
    {
        cout << "It was Despacito for a while, but it's actually Baby Shark. Crazy, I know." << endl << endl;
    }
    else
    {
        cout << "Baby Shark do do. You have to admit that it's catchy. " << endl;
        cout << "The views on the Baby Shark video is very close to the world population" << endl << endl;
    }
    Sleep(2000);

    cout << "Question 7: What color is the sunset on Mars?" << endl;
    cout << "a. Green" << setw(20) << "b. Red" << endl;
    cout << "c. Purple" << setw(20) << "d. Blue" << endl;
    cin >> ans;
    Sleep(1000);
    cout << endl;
    if (ans == "d" || ans == "D")
    {
        cout << "You got it. Crazy huh? " << endl << endl;
        count++;
    }
    else
    {
        cout << "A blue sunset. The fine particles from the dust in the Martian atmosphere permits blue";
        cout << "light to penetrate the atmosphere more efficiently colors with longer wavelengths" << endl << endl;
    }
    Sleep(2000);

    cout << "Question 8: What country won the first World Cup?" << endl;
    cout << "a. Uruguay" << setw(20) << "b. Brazil" << endl;
    cout << "c. Argentina" << setw(20) << "   d. Switzerland" << endl;
    cin >> ans;
    Sleep(1000);
    cout << endl;
    if (ans == "a" || ans == "A")
    {
        cout << "GOOOOOOOOOOOOAAAAAAAALLL!!! You got it right." << endl << endl;
        count++;
    }
    else
    {
        cout << "Urguay defeated Argentina 4-2 on July 30, 1930." << endl << endl;
    }
    Sleep(2000);

    cout << "Question 9: What is a group of crows known as?" << endl;
    cout << "a. flock" << setw(20) << "b. swarm" << endl;
    cout << "c. murder" << setw(20) << "d. sleuth" << endl;
    cin >> ans;
    Sleep(1000);
    cout << endl;
    if (ans == "c" || ans == "C")
    {
        cout << "Nicely done. " << endl << endl;
        count++;
    }
    else
    {
        cout << "It's called a murder. Strange. I know. " << endl << endl;
    }
    Sleep(2000);

    cout << "Question 10: What is one way to slow down the spread of COVID 19?" << endl;
    cout << "a. Hug everyone you see to imprpove their immune system and happiness" << endl;
    cout << "b. Cough on people to introduce the virus to their immune system" << endl;
    cout << "c. Light a fire around you to kill the virus" << endl;
    cout << "d. Wear a mask and social distance" << endl;
    cin >> ans;
    Sleep(1000);
    cout << endl;
    if (ans == "d" || ans == "D")
    {
        cout << "Ending on a good note! " << endl << endl;
        count++;
    }

    if (ans == "c" || ans == "C")
    {
        cout << "Please don't light fires. Stay safe." << endl << endl;
    }
    else
    {
        cout << "Slow down the virus by wearing a mask and social distancing! " << endl;
        cout << "Please don't cough on anyone or hug them. " << endl << endl;
    }

    cout << "Your score for trivia is " << count << " out of 10. How did you do?" << endl;	// giving user score
    cin >> ans;
    Sleep(1000);
    cout << "Well, thank you for playing Trivia! Bye for now." << endl;
    Sleep(5000);
}

#endif
