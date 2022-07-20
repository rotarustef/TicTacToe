#pragma once
#include <iostream>

class Entity
{
public:
    Entity();
    Entity(std::string name, unsigned int ID, unsigned int score);
    Entity(std::string name, unsigned int ID, unsigned int score, bool bot);
    void setInfo();
    std::string getName();
    unsigned int getID();
    unsigned int getScore();
    bool bot();
    void setBotFlag(bool flag);
    friend std::ostream& operator<<(std::ostream&, const Entity&);
    ~Entity();

private:
    std::string name;
    unsigned int ID;
    unsigned int score;
    bool botFlag;
};

