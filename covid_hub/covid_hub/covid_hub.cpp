// covid_hub.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <stdio.h>
//#include <WS2tcpip.h>
//#include <ws2def.h>
//#include <winsock2.h>
#include <stdlib.h>
#include "snake.h"
#include "tictactoe.h"
#include "covid.h"
#include "trivia.h"

//#pragma comment (lib, "ws2_32.lib")

void Covid19_Quiz();
void chat();
void option(int);
void games(); 
void triviaINIT();
int snake();
int tictactoeINIT();
using namespace std;

int main()
{
    system("cls");
    cout <<"   **********       *************      ************* "<< endl;
    cout <<"  *************     ***************    ***************  "<< endl;
    cout <<" *****     ****     *****      ****    *****      ****  "<< endl;
    cout <<" *****              ***************    ***************  "<< endl;
    cout <<" *****              *************      *************  "<< endl;
    cout <<" *****     ****     *****              ***** "<< endl;
    cout <<"  *************     *****              ***** "<< endl;
    cout <<"   **********       *****              ***** "<< endl;
    

    for (int i = 0; i < 3; i++)
    {
        system("Color 02");
        Sleep(1000);
        system("Color 06");
        Sleep(1000);
        system("Color 01");
        Sleep(1000);
    }
        
    system("cls");
    system("Color 07");

    int help;
    cout << "Hello. Welcome to the CPP Covid HUB, a connection that brings us closer than ever" << endl;
    cout << "How may I help you?" << endl << endl;
    cout << "Please choose one of the following options by number: " << endl;
    cout << "------------------------------------------" << endl;
    cout << "1. COVID Diagnostic." << endl;
    cout << "2. Join the chatroom." << endl;
    cout << "3. Play some games." << endl;
    cin >> help;
    option(help);
}

void option(int h)
{
    switch (h)
    {
    case 1:
        Covid19_Quiz();
        break;
    case 2: 
        chat();
        break;
    case 3: 
        games(); 
        break;
    }
}

void Covid19_Quiz()
{
    system("cls");
    double temp;

    string Covid_contact;
    string no_symptom;
    string free;
    char CustomerName;
    char whatever;
    char MusclePain;
    char Loss;
    char fatigue;
    char headache;

    cout << "Coronavirus Self-Checker " << endl;
    Sleep(1000);

    cout << "Your body temperature is :" << endl;
    cin >> temp;
    if (temp < 97 || temp > 113)
    {
        cout << "This is not human temperature " << endl;
        Sleep(1000);
        cout << "Please enter your body temperature" << endl;
        cin >> temp;
    }


    if (temp > 98.6 || temp < 113)
    {
        cout << "Did you have close contact with person who has Covid-19? (Y/N) " << endl;
        cin >> Covid_contact;
        Sleep(1000);

    }


    if (Covid_contact == "Y" || Covid_contact == "y")
    {
        cout << "Are you experiencing fever, dry cough, or shortness of breath? (Y/N)" << endl;
        cin >> whatever;
        Sleep(1000);
        cout << "Are you experiencing fatigue ? (Y/N) " << endl;
        cin >> fatigue;
        Sleep(1000);
        cout << "Are you experiencing Headache ? (Y/N) " << endl;
        cin >> headache;
        Sleep(1000);
        cout << "Are you experiencing Muscle Pain? (Y/N)" << endl;
        cin >> MusclePain;
        Sleep(1000);
        cout << "Are you experiencing new loss of taste or smell? (Y/N)" << endl;
        cin >> Loss;
        Sleep(1000);
        system("cls");
        cout << "You have close contact with person who has Covid-19" << endl;
        cout << endl;
        cout << "You should proceed as soon as possible to the closest Emergency Room " << endl;
        cout << "to take the Covid-19 Test." << endl;
        cout << endl;
        cout << "Enter \"Free\" for \" Free Covid-19 Testing locations. " << endl;
        cin >> free;
        Sleep(1000);

        cout << endl;

        system("cls");
        wheretoTest();
    }
    else
    {

        cout << "Are you experiencing fever, dry cough, or shortness of breath? (Y/N)" << endl;
        cin >> no_symptom;
        Sleep(1000);

    }


    if (no_symptom == "Y" || no_symptom == "y")
    {
        cout << "Are you experiencing fatigue ? (Y/N) " << endl;
        cin >> fatigue;
        Sleep(1000);
        cout << "Are you experiencing Headache ? (Y/N) " << endl;
        cin >> headache;
        Sleep(1000);
        cout << "Are you experiencing Muscle Pain? (Y/N)" << endl;
        cin >> MusclePain;
        Sleep(1000);
        cout << "Are you experiencing new loss of taste or smell? (Y/N)" << endl;
        cin >> Loss;
        Sleep(3000);
        system("cls");

        if (fatigue)
        cout << "You are experiencing Covid-19 Symptoms!!! " << endl;
        Sleep(1000);
        cout << "You should proceed as soon as possible to the closest Emergency Room " << endl;
        cout << endl;
        cout << "to take the Covid-19 Test." << endl;
        cout << endl;
        Sleep(3000);
        cout << "Enter \"Free\" for \" Free Covid-19 Testing locations in South California. " << endl;
        cin >> free;
        cout << endl;
        Sleep(1000);

        cout << endl;
        system("cls");

        wheretoTest();

    }
    else if (no_symptom == "N" || no_symptom == "n")
    {
        cout << "Are you experiencing fatigue ? (Y/N) " << endl;
        cin >> fatigue;
        Sleep(1000);
        cout << "Are you experiencing Headache ? (Y/N) " << endl;
        cin >> headache;
        Sleep(1000);
        cout << "Are you experiencing Muscle Pain? (Y/N)" << endl;
        cin >> MusclePain;
        Sleep(1000);
        cout << "Are you experiencing new loss of taste or smell? (Y/N)" << endl;
        cin >> Loss;
        Sleep(3000);
        system("cls");
        system("cls");

        Sleep(1000);
        cout << "If you have any symptom like fever, cough, or shortness of breath " << endl;
        Sleep(1000);
        Advice();
    }
    cout << "Press enter to go back to home screen" << endl;
    cin.ignore();
    cin.get();
    main();
}






void chat()
{
    system("cls");
    int people;
    string chatbot;
    cout << endl << "loading chatroom";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << "." << endl << endl;
    Sleep(1000);
    system("cls");
    cout << "Welcome to the chatroom!" << endl;
    cout << "How many people? " << endl;
    cin >> people;


    if (people == 1)
    {
        system("cls");
        cout << "loading";
        int i = (rand() % 5) + 1;
        while (i >= 1)
        {
            Sleep(1000);
            cout << "." << flush;
            Sleep(1000);
            cout << "." << flush;
            Sleep(1000);
            cout << "." << flush;
            Sleep(1000);
            cout << '\b' << '\b' << '\b' << "   ";
            cout << '\b' << '\b' << '\b';
            i--;
        }
        cout << '\b' << '\b' << '\b' << '\b' << '\b' << '\b' << '\b' << "Hey there, I'm the chatbot. What's your name?" << endl;
        cin >> chatbot;
        Sleep(1000);
        cout << "Nice to meet you " << chatbot << ". How are you feeling today?" << endl;
        cin >> chatbot;
        Sleep(1000);
        cout << "I'm doing well. Do you want to hear a joke? " << endl;
        cin >> chatbot;
        Sleep(1000);
        if (chatbot == "yes" || chatbot == "sure" || chatbot == "ok")
        {
            cout << "How do you make a tissue dance? " << endl;
            cin >> chatbot;
            Sleep(1000);
            cout << "You put a little boogie in it! " << endl;
            Sleep(1000);
            cout << "Do you know what the best types of jokes are about? " << endl;
            cin >> chatbot;
            Sleep(1000);
            cout << "Communism, because everybody gets it!" << endl;
        }
        else
            cout << "Awww. I had a really good one too. Maybe another time. " << endl;
        Sleep(2000);
        cout << "What are your plans for today? " << endl;
        cin >> chatbot;
        Sleep(1000);
        cout << "Well I'll let you get to it. I'll see you later. Remember to stay 6 feet from others and wear a mask!" << endl << endl;
        cout << "If you wish to stay, type \"stay\". Otherwise this message will self-destruct in 60 sec." << endl;
        cin >> chatbot;
        Sleep(1000);
        cout << endl;
        if (chatbot == "stay")
        {
            cout << "Hi again. How is your day going?" << endl;
            cin >> chatbot;
            Sleep(1000);
            cout << "What would make it better? " << endl;
            cin >> chatbot;
            Sleep(1000);
            cout << "yeah I hear you. What was your favorite thing to do prior to COVID?" << endl;
            cin >> chatbot;
            Sleep(1000);
            cout << "That sounds fun. What is something on your bucket list?" << endl;
            cin >> chatbot;
            Sleep(1000);
            cout << "Sounds exciting! Do you have any phobias? " << endl;
            cin >> chatbot;
            Sleep(1000);
            if (chatbot == "yes")
            {
                cout << "What's one of them?" << endl;
                cin >> chatbot;
                Sleep(1000);
                cout << "Interesting phobia. Now I'm scared! I have to go." << endl;
            }
            else
                cout << "Your fearlessness scares me. So long!" << endl;
        }
        else
            cout << "Self destruct in T-5 seconds.";
        int counter = 5; //amount of seconds
        Sleep(1000);
        while (counter >= 1)
        {
            cout << "\rTime remaining: " << counter << flush << endl;
            Sleep(1000);
            counter--;
        }
        system("cls");      // clear screen
        main();
    }
    
    if (people >= 2)
    {
        system("cls");
        cout << "loading";
        int i = (rand() % 5) + 1;
        while (i >= 1)
        {
            Sleep(1000);
            cout << "." << flush;
            Sleep(1000);
            cout << "." << flush;
            Sleep(1000);
            cout << "." << flush;
            Sleep(1000);
            cout << '\b' << '\b' << '\b' << "   ";
            cout << '\b' << '\b' << '\b';
            i--;
        }
        system("cls");
        string person;
        string safe;
        cout << "What's your safe word to get out of chatroom?";
        cin >> safe;
        cout << "Alright, remember your safe word to exit the chat" << endl;
        Sleep(2000);
        system("cls");
        while (true)
        {
            cin >> person;
            if (person.compare(safe) == 0)
            {
                system("cls");
                chat();
            }
        }
        //TCP server (echos message from the client; incdues networking)

//initialize winsock
//       WSADATA wsData; //startup requires some initialization of data
//       WORD ver = MAKEWORD(2, 2); //version type

//       int wsOk = WSAStartup(ver, &wsData); //points 

//       if (wsOk != 0) //if we can't initialize winsock
//       {
//           cerr << "Error: Failure to initialize ---- exiting";
//           int j = (rand() % 5) + 1;
//           while (j >= 1)
//           {
//               Sleep(1000);
//               cout << "." << flush;
//               Sleep(1000);
//               cout << "." << flush;
//               Sleep(1000);
//               cout << "." << flush;
//               Sleep(1000);
//               cout << '\b' << '\b' << '\b' << "   ";
//               cout << '\b' << '\b' << '\b';
//               j--;
//           }
//           system("cls");
//           main();
//       }
//       //create a socket, basically a endpoint, represented by number, in windows its given an actual type
//       SOCKET listening = socket(AF_INET, SOCK_STREAM, 0);    //(address family, open TCP socket, 0)
//       if (listening == INVALID_SOCKET)
//       {
//           cerr << "Error: Failure to create socket ---- exiting";
//           int j = (rand() % 5) + 1;
//           while (j >= 1)
//           {
//               Sleep(1000);
//               cout << "." << flush;
//               Sleep(1000);
//               cout << "." << flush;
//               Sleep(1000);
//               cout << "." << flush;
//               Sleep(1000);
//               cout << '\b' << '\b' << '\b' << "   ";
//               cout << '\b' << '\b' << '\b';
//               j--;
//           }
//           system("cls");
//           main();
//       }


//       //bind the ip address and port to a socket

//       sockaddr_in hint; //hint structure
//       hint.sin_family = AF_INET; //we are using version 4
//       hint.sin_port = htons(54000); //host to network short
//       hint.sin_addr.S_un.S_addr = INADDR_ANY; //we want the socket to bind to any address

//       bind(listening, (sockaddr*)&hint, sizeof(hint)); //bind function

//       
//       //tell winsock that the socket is for listening
//       listen(listening, SOMAXCONN);
//       char buffer[1024]{ 0 };

//       recv(listening, buffer, sizeof(buffer), 0);

//       cout << buffer << std::endl;
//       //wait for a connection
//       sockaddr_in client;
//       int clientSize = sizeof(client);

//       SOCKET clientSocket = accept(listening, (sockaddr*)&client, &clientSize);

//       char host[NI_MAXHOST];      //client's remote name
//       char service[NI_MAXHOST]; //service (or port) the client is connected to

//       ZeroMemory(host, NI_MAXHOST);  // same as memset(host, 0, NI_MAXHOST);
//       ZeroMemory(service, NI_MAXHOST);

//       if (getnameinfo((sockaddr*)&client, sizeof(client), host, NI_MAXHOST, service, NI_MAXSERV, 0) == 0)
//       {
//           cout << host << "Connected to port " << service << endl;
//       }
//       else 
//       {
//           inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
//           cout << host << "Connected to port " << ntohs(client.sin_port) << endl;
//       }

//       //close listening socket
//       closesocket(listening);
//       //while loop: accept and echo messages back to person in chatroom
//       char buf[4096];

//       while (true)
//       {
//           ZeroMemory(buf, 4096);

//           //wait for client to send data
//           int bytesReceived = recv(clientSocket, buf, 4096, 0);
//           if (bytesReceived == SOCKET_ERROR)
//           {
//               cerr << "Error: Unable to receive. ---- exiting";
//               int j = (rand() % 5) + 1;
//               while (j >= 1)
//               {
//                   Sleep(1000);
//                   cout << "." << flush;
//                   Sleep(1000);
//                   cout << "." << flush;
//                   Sleep(1000);
//                   cout << "." << flush;
//                   Sleep(1000);
//                   cout << '\b' << '\b' << '\b' << "   ";
//                   cout << '\b' << '\b' << '\b';
//                   j--;
//               }
//               system("cls");
//               main();
//           }
//           if (bytesReceived == 0)
//           {
//               cout << "Client Disconnected" << endl;
//               break;
//           }

//           //Echo message back to client
//           send(clientSocket, buf, bytesReceived + 1, 0);
//       }
//       //close down the socket
//       closesocket(clientSocket);
//       //clean winsock
//       WSACleanup();

//       //go back to main screen
//       system("cls");
//       main();
   //}
    }
}

void games()
{
    system("cls");
    cout << "loading games";
    int i = (rand() % 5) + 1;
    while (i >= 1)
    {
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << '\b' << '\b' << '\b' << "   ";
        cout << '\b' << '\b' << '\b';
        i--;
    }
    system("cls");
    system("Color 07");
    int gameOp;
    cout << "Welcome to the COVID Mini Game Arena" << endl;
    Sleep(500);
    cout << "Select a game to begin by number" << endl;
    cout << "------------------------------------------" << endl;
    cout << "1. Snake" << endl;
    cout << "2. Tic Tac Toe" << endl;
    cout << "3. Trivia" << endl;
    cout << "To go back to main menu, press 4" << endl;
    cin >> gameOp;
    switch (gameOp)
    {
        case 1:
            snake();
            break;
        case 2:
            tictactoeINIT();
            break;
        case 3:
            triviaINIT();
            break;
        case 4:
            cout << "returning to Welcome page";
            Sleep(1000);
            cout << ".";
            Sleep(1000);
            cout << ".";
            Sleep(1000);
            cout << "." << endl << endl;
            Sleep(1000);
            system("cls");      // clear screen
            main();
            break;
        default:
            cout << "Sorry. I couldn't understand you. Please select a game or type \"leave\" to leave" << endl << endl;
            Sleep(3000);
            system("cls");
            games();
    }
}

int tictactoeINIT()
{
    system("cls");
    cout << "loading TIC TAC TOE";
    int a = (rand() % 5) + 1;
    while (a >= 1)
    {
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << '\b' << '\b' << '\b' << "   ";
        cout << '\b' << '\b' << '\b';
        a--;
    }
    system("cls");
    cout << "Let play the Tictactoe game." << endl;
    Sleep(1000);
    system("cls");
    cout << "loading";
    int k = (rand() % 5) + 1;
    while (k >= 1)
    {
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << '\b' << '\b' << '\b' << "   ";
        cout << '\b' << '\b' << '\b';
        k--;
    }
    system("cls");
    for (int i = 5; i >= 1; --i)
    {
        for (int k = 0; k < 5 - i; k++)
            cout << "  ";

        for (int j = i; j <= 2 * i - 1; j++)
            cout << "* ";

        for (int j = 0; j < i - 1; j++)
            cout << "* ";
        system("Color 0B");
        Sleep(200);
        Sleep(200);
        system("Color 0C");
        Sleep(200);
        system("Color 0D");
        Sleep(200);
        system("Color 0E");
        Sleep(200);
        system("Color 0F");
        cout << endl;
    }
    while (true)
    {
        tictactoe();
        system("cls");
        string again;
        cout << "To play again, press 1, otherwise, press any character to go back to the arena";
        cin >> again;

        if (again != "1")
        {
            break;
        }
        else
        {
            system("cls");
            resetboard();
        }
    }
    system("cls");
    games();
    return 0;
}

int snake()
{
    system("cls");
    Setup();

    while (!gameover)
    {
        Draw();

        Input();

        algorithm();
    }

    string again;
    cout << "To play again, press 1, otherwise, press any character to go back to the arena" << endl;
    cin >> again;

    if (again != "1")
    {
        system("cls");
        games();
    }
    else
    {
        gameover = false;
        snake();
    }
    
    return 0;
}

void triviaINIT()
{
    system("cls");
    cout << "loading Trivia";
    int a = (rand() % 5) + 1;
    while (a >= 1)
    {
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << '\b' << '\b' << '\b' << "   ";
        cout << '\b' << '\b' << '\b';
        a--;
    }
    system("cls");
    trivia();
    system("cls");      // clear screen
    games();
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
