#include "FootballTeam.h"
#include <iostream>

int main() {
    // Crearea obiectelor de tip FootballTeam
    FootballTeam team1("Real Madrid", "Carlo Ancelotti", 95, 1902);
    FootballTeam team2("FC Barcelona", "Xavi Hernandez", 89, 1899);

    // Afisarea informațiilor despre echipe
    std::cout << "Team 1: " << team1.getName() << ", Coach: " << team1.getCoachName() << ", Trophies: " << team1.getTrophies() << ", Founded: " << team1.getFoundationYear() << std::endl;
    std::cout << "Team 2: " << team2.getName() << ", Coach: " << team2.getCoachName() << ", Trophies: " << team2.getTrophies() << ", Founded: " << team2.getFoundationYear() << std::endl;

    // Testare assignment operator
    FootballTeam team3 = team1;
    std::cout << "Team 3 (copy of Team 1): " << team3.getName() << ", Coach: " << team3.getCoachName() << ", Trophies: " << team3.getTrophies() << ", Founded: " << team3.getFoundationYear() << std::endl;

    team2 = team1; //  operatorul de atribuire 

    
    std::cout << "Team 2 after assignment: " << team2.getName() << ", Coach: " << team2.getCoachName() 
              << ", Trophies: " << team2.getTrophies() << ", Founded: " << team2.getFoundationYear() << std::endl;

    return 0;
}

