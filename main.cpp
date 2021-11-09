
#include <iostream>
#include <string>
#include <thread>
#include "Competitor.h"
#include "ThreadMap.h"


const int NO_TEAMS = 4; 	// number of teams in the race
const int NO_MEMBERS = 4;	// number of athletes in the team

void run(Competitor& c) {
    // store thread id and competitor in a map
    // delay for random period
    // print message stating which competitor has just finished
}

int main() {
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
    std::thread runner(run, ref(b1));// Thread created for the first runner

    ThreadMap tm;
    b1.printCompetitor();
    tm.insertThreadPair(b1);
    tm.insertThreadPair(b2);
    tm.insertThreadPair(b3);
    tm.insertThreadPair(b4);
    tm.printMapContents();
    // join threads

}


// for (int i = 0; i < 4; i++)
//        for (int j = 0; j < 4; j++)
//            theThreads[i][j] = std::thread(run, 42, std::ref(teamsAndMembers[i][j]));

