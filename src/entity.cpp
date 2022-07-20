#include "../include/entity.h"

Entity::Entity() {
    name = "N/A";
    ID = 0;
    score = 0;
    botFlag = 0;
}

Entity::Entity(std::string name, unsigned int ID, unsigned int score) {
    this->name = name;
    this->ID = ID;
    this->score = score;
}


Entity::Entity(std::string name, unsigned int ID, unsigned int score, bool bot) {
    this->name = name;
    this->ID = ID;
    this->score = score;
    this->botFlag = bot;
}

void Entity::setInfo() {
    std::cout << "Name: ";
    std::cin >> name;
    ID = 0;
    score = 0;
}

std::string Entity::getName() { return name; }
unsigned int Entity::getID() { return ID; }
unsigned int Entity::getScore() { return score; }
bool Entity::bot() { return botFlag; }

void Entity::setBotFlag(bool flag) {
    botFlag = flag;
}


std::ostream& operator<<(std::ostream& output, const Entity& p) {
    output << "Name: " << p.name << "\nID: " << p.ID << "\nScore: " << p.score << std::endl;
    return output;
}

Entity::~Entity()
{
}


