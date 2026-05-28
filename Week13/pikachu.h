#pragma once
class Pikachu : public Pokemon  // is-a
{
private:
    int electricAttack;
public:
    Pikachu();
    Pikachu(int hp, int electricAttack);
    Pikachu(const Pikachu& pikachu);
    void set(int hp);
    void set(int hp, int electricAttack);
    int getElectricAttack() const;
};//pokemon.h

Pikachu::Pikachu() : Pokemon(), electricAttack(10) {  // Invocation
}//pokemon.cpp
Pikachu::Pikachu(int hp, int electricAttack) : Pokemon(hp), electricAttack(electricAttack) {// Invocation
}
Pikachu::Pikachu(const Pikachu& pikachu) : Pokemon(pikachu), electricAttack(pikachu.electricAttack) {// Invocation
}
void Pikachu::set(int hp) {
    Pokemon::set(hp);  // Delegation
}
void Pikachu::set(int hp, int electricAttack) {
    Pokemon::set(hp);  // Delegation
    this->electricAttack = electricAttack;
}
int Pikachu::getElectricAttack() const {
    return electricAttack;
}