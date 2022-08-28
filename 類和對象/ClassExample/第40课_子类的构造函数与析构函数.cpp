#include <iostream>
#include <string>
#include "Cstudent.h"

using namespace std;

class CXiaoStudent : public Cstudent
{
public:
    int yuwen_score;
    int shuxue_score;
    int english_score;

private:
    int flag_private;

protected:
    int flag_protected;
};
