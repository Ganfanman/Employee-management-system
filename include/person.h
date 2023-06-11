#ifndef PERSON_H
#define PERSON_H
#include <String>

class Person
{
public:
    Person() = default;
    virtual ~Person() = default;

    void SetID(int ID);
    int GetID();

    void SetName(std::string name);
    std::string GetName();

    void SetPosition(std::string position);
    std::string GetPosition();


private:
    int ID_{};
    std::string name_{};
    std::string position_{};

};

#endif 