#ifndef STAFF_H
#define STAFF_H
#include <iostream>

class Staff
{
public:
    void SetID(int ID);
    int GetID();

    void SetName(std::string name);
    std::string GetName();

    void SetPosition(std::string position);
    std::string GetPosition();

    void SetDuty(std::string duty);
    std::string GetDuty();

private:
    int ID_{};
    std::string name_{""};
    std::string position_{""};
    std::string duty_{""};
};


#endif
