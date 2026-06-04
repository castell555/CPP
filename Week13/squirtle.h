#pragma once
#include "pokemon.h"

class squritle : public Pokemon  // is-a
{
private:
    int electricAttack;
public:
    squritle();
    squritle(int hp, int electricAttack);
    squritle(const squritle& pikachu);
    void set(int hp);
    void set(int hp, int electricAttack);
    int getElectricAttack() const;
};