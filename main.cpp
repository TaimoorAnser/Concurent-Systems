
#include <iostream>
#include <string>
#include <thread>
#include "Competitor.h"
#include "ThreadMap.h"
#include <ctime>        // Additional for the random number generation
#include <cstdlib>


const int NO_TEAMS = 4; 	// number of teams in the race
const int NO_MEMBERS = 4;	// number of athletes in the team

void place_in_competitors();

void run(Competitor& c) {
    // store thread id and competitor in a map.

    // delay for random period using the srand function.
    srand(time(0));
    cout<<"Random numbers generated between 9 and 15:"<<endl;
    cout << (rand() % 15) + 9<<" ";
    // print message stating which competitor has just finished. Using the print competitor command.
}

int main() {
    thread test;
    thread theThreads[NO_TEAMS][NO_MEMBERS];
    Competitor teamsAndMembers[NO_TEAMS][NO_MEMBERS];

    // define elements of teamsAndMembers
    Competitor b1("Blue", "Bob");
    Competitor b2("Blue", "Tim");
    Competitor b3("Blue", "John");
    Competitor b4("Blue", "Guy");

    Competitor r1("Red", "Aang");
    Competitor r2("Red", "Iroh");
    Competitor r3("Red", "Zuko");
    Competitor r4("Red", "Kora");

    Competitor g1("Green", "Ruko");
    Competitor g2("Green", "Pakku");
    Competitor g3("Green", "Teo");
    Competitor g4("Green", "Chey");

    Competitor y1("Yellow", "Jet");
    Competitor y2("Yellow", "Feng");
    Competitor y3("Yellow", "Appa");
    Competitor y4("Yellow", "Lee");

// create threads (elements of theThreads)
    teamsAndMembers[0][0] = b1;  // The first row of the array is all team blue
    teamsAndMembers[0][1] = b2;
    teamsAndMembers[0][2] = b3;
    teamsAndMembers[0][3] = b4;

    teamsAndMembers[1][0] = r1; // The second row of the array is all team red
    teamsAndMembers[1][1] = r2;
    teamsAndMembers[1][2] = r3;
    teamsAndMembers[1][3] = r4;

    teamsAndMembers[2][0] = g1; // The third row of the array is all team green
    teamsAndMembers[2][1] = g2;
    teamsAndMembers[2][2] = g3;
    teamsAndMembers[2][3] = g4;

    teamsAndMembers[3][0] = y1;// The fourth row of the array is all team yellow
    teamsAndMembers[3][1] = y2;
    teamsAndMembers[3][2] = y3;
    teamsAndMembers[3][3] = y4;



    // This for loop is going to place all of the competitors into the threads array
  /*  for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            theThreads[i][j] = std::thread(run, 42, std::ref(teamsAndMembers[i][j]));
        }
    }*/

    // Join threads
    std::thread test1(run, ref(b1));

 /*   ThreadMap tm;
    b1.printCompetitor();
    tm.insertThreadPair(b1);
    tm.insertThreadPair(b2);
    tm.insertThreadPair(b3);
    tm.insertThreadPair(b4);
    tm.printMapContents();
*/

}

// This function places the teams and members inside the threads
 //
