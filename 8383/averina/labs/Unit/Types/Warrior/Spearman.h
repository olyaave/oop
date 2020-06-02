#ifndef OOP_SPEARMAN_H
#define OOP_SPEARMAN_H

#include "Warrior.h"

//  Spearman - класс для войнов-копейщиков.


class Spearman : public Warrior
{ ;
public:
    Spearman() : Warrior(200, 100, 50,
            1, 25, 1, 'S'){}
};


#endif //OOP_SPEARMAN_H
