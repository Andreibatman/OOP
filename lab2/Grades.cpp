#include "Grades.h"
#include <cstring>

char* Grades::getName()
{
    return this->name;
}
void Grades::setName(char *nume)
{
    strcpy(this->name,nume);
}
float Grades::getMate()
{
    return this->mate;
}
void Grades::setMate(float nota)
{
    this->mate=nota;
}
float Grades::getHistory()
{
    return this->hist;
}
void Grades::setHistory(float nota)
{
    this->hist=nota;
}
float Grades::getEng()
{
    return this->eng;
}
void Grades::setEng(float nota)
{
    this->eng=nota;
}
float Grades::Average()
{
    return (this->eng+this->mate+this->hist)/3;
}

bool Grades::Compare(Grades student)
{
    return this->Average()>student.Average() || (this->Average()==student.Average() && strcmp(this->name,student.name)<0);
}