#ifndef FOOTBALLTEAM_H
#define FOOTBALLTEAM_H

#include <string>

class FootballTeam {
private:
    std::string name;
    std::string coachName;
    int* trophies;           // Pointer alocat dinamic pentru numarul de trofee
    int foundationYear;

public:
    // Constructor
    FootballTeam(const std::string& name, const std::string& coachName, int trophies, int foundationYear);

    // Copy constructor
    FootballTeam(const FootballTeam& other);

    // Assignment operator
    FootballTeam& operator=(const FootballTeam& other);

    // Destructor
    ~FootballTeam();

    // Getters and setters
    std::string getName() const;
    std::string getCoachName() const;
    int getTrophies() const;
    int getFoundationYear() const;

    void setName(const std::string& name);
    void setCoachName(const std::string& coachName);
    void setTrophies(int trophies);
    void setFoundationYear(int foundationYear);
};

#endif // FOOTBALLTEAM_H

