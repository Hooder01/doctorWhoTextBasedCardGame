#include <iostream>


class cardData 
{
    public:

    std::string characterName;
    int HP;
    double MP;
    
    void characterSkill() 
    {

    }

    cardData(std::string cn, int hp, double mp) // public constructor with paremeters
    {
        characterName = cn;
        HP = hp;
        MP = mp;
        // assgined the new paremeter data names
    }
};


void characterInformation() 
{
    cardData cardInfo1("Tenth Doctor", 14, 15.1);
    cardData cardInfo2("K9", 12, 17.1);
}

class gameLogic
{
    public:

    /// should this be a class or a function!?

    void playerStart() 
    {
        std::cout << "Please choose your hero!" << cardInfo1.HP; // why is this undifined
    }
};

int main() 
{
    
}


