#include "FootballPlayer.h"

FootballPlayer::FootballPlayer(const std::string &name, int goalsScored)
    : name(name), goalsScored(goalsScored) {}

void FootballPlayer::addGoals() {
    goalsScored++;
}

void FootballPlayer::displayInfo() const {
    std::cout << "Player: " << name << ", Goals Scored: " << goalsScored << std::endl;
}
