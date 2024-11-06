#include "FootballTeam.h"
#include <iostream>

// Constructor with member initializer list, allocating memory for trophies
FootballTeam::FootballTeam(const std::string& name, const std::string& coachName, int trophies, int foundationYear)
    : name(name), coachName(coachName), foundationYear(foundationYear) {
    this->trophies = new int(trophies); // Alocare dinamica pentru trofee
}

// Copy constructor
FootballTeam::FootballTeam(const FootballTeam& other)
    : name(other.name), coachName(other.coachName), foundationYear(other.foundationYear) {
    trophies = new int(*(other.trophies)); // Alocare si copierea valorii pentru trofee
}

// Assignment operator
FootballTeam& FootballTeam::operator=(const FootballTeam& other) {
    if (this == &other) {
        return *this;
    }

    // Eliberam memoria existenta pentru trofee
    delete trophies;

    // Copierea valorilor
    name = other.name;
    coachName = other.coachName;
    foundationYear = other.foundationYear;

    // Alocam si copiem valoarea pentru trofee
    trophies = new int(*(other.trophies));

    return *this;
}

// Destructor
FootballTeam::~FootballTeam() {
    delete trophies; // Eliberăm memoria alocată dinamic pentru trofee
    std::cout << "Destructor called for team: " << name << std::endl;
}

// Getters
std::string FootballTeam::getName() const { return name; }
std::string FootballTeam::getCoachName() const { return coachName; }
int FootballTeam::getTrophies() const { return *trophies; }
int FootballTeam::getFoundationYear() const { return foundationYear; }

// Setters
void FootballTeam::setName(const std::string& name) { this->name = name; }
void FootballTeam::setCoachName(const std::string& coachName) { this->coachName = coachName; }
void FootballTeam::setTrophies(int trophies) {
    *(this->trophies) = trophies; // Setam valoarea trofeelor prin dereferentiere
}
void FootballTeam::setFoundationYear(int foundationYear) { this->foundationYear = foundationYear; }

