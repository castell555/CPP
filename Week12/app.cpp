#include <iostream>
#include <string>
using namespace std;
class Pokemon
{
private:
//protected:
    int hp;
public:
    Pokemon() : hp(1){

    }
    Pokemon(int hp) : hp(hp) {
        this->hp = hp;
    }
    Pokemon(const Pokemon& pokemon) : hp(pokemon.hp) {

    }
    void set(int hp) {
        this->hp = hp;
    }
    int getHp() const {
        return hp;
    }
};
class Pikachu : public Pokemon  // is-a
{
private:
    int electricAttack;
public:
    Pikachu() : Pokemon(), electricAttack(10) { //invocation

    }
    Pikachu(int hp, int electricAttack) : Pokemon(hp), electricAttack(electricAttack) {

    }
    Pikachu(const Pikachu& pikachu) : Pokemon(pikachu), electricAttack(pikachu.electricAttack) {

    }
    void set(int hp) {
        Pokemon::set(hp);   // Delegation(위임)
    }
    void set(int hp, int electricAttack) {
        //this->hp = hp;
        Pokemon::set(hp);   // Delegation(위임)
        this->electricAttack = electricAttack;
        //private
        //this->hp = 99;
        //hp = 99;
    }
    int getElectricAttack() const {
        return electricAttack;
    }
};
int main()
{
    //Pikachu pikachu; //default
    //cout << pikachu.getHp() << endl;
    //cout << pikachu.getElectricAttack();

    Pikachu pikachu(500, 4000); // parameter
    cout << pikachu.getHp() << endl;
    cout << pikachu.getElectricAttack() << endl;

    Pikachu pikachu2(pikachu); // copy
    cout << pikachu.getHp() << endl;
    cout << pikachu.getElectricAttack() << endl;
    return 0;
}