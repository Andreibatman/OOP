class Grades
{
    char name[100];
    float mate;
    float eng;
    float hist;
public:
    char* getName();
    void setName(char *nume);
    float getMate();
    void setMate(float nota);
    float getHistory();
    void setHistory(float nota);
    float getEng();
    void setEng(float nota);
    float Average();

    bool Compare(Grades student);
};