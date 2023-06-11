#include "person.h"

void Person::SetID(int ID)
{
    ID_ = ID;
}

int Person::GetID()
{
    return ID_;
}

void Person::SetName(std::string name)
{
    name_ = name;
}

std::string Person::GetName()
{
    return name_;
}

void Person::SetPosition(std::string position)
{
    position_ = position;
}

std::string Person::GetPosition()
{
    return position_;
}