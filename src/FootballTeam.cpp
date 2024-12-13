#include "FootballTeam.h"

FootballTeam::FootballTeam(const std::string &playerName, int goals)
    : player(std::make_unique<FootballPlayer>(playerName, goals)) {}

void FootballTeam::usePlayer() {
    std::lock_guard<std::mutex> lock(teamMutex);
    player->displayInfo();
}

void FootballTeam::addPlayerGoals() {
    std::lock_guard<std::mutex> lock(teamMutex);
    player->addGoals();
}
