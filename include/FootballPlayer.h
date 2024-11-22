#ifndef FOOTBALLPLAYER_H
#define FOOTBALLPLAYER_H

#include "FootballTeam.h"

class FootballPlayer : public FootballTeam {
private:
    std::string playerName;
    std::string position;
    int age;

public:
    FootballPlayer();
    FootballPlayer(const std::string& teamName, const std::string& coachName, int trophies,
                   int foundationYear, const std::string& playerName, const std::string& position, int age);

    // Copy constructor
    FootballPlayer(const FootballPlayer& other);

    // Move constructor
    FootballPlayer(FootballPlayer&& other) noexcept;

    ~FootballPlayer(); // Destructor propriu

    void displayInfo() const override; // Suprascriere metoda afisare
};

#endif // FOOTBALLPLAYER_H
