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

    cardData(std::string cn, int hp, double mp); // Constuctor declaration
};


cardData::cardData(std::string cn, int hp, double mp) // Constructor definition outside the class
{
    characterName = cn;
    HP = hp;
    MP = mp;
    // Acsess to these objects can be anywhere!

    
}

class gameLogic 
{

    void playbleChar() // <-- this should be called for player selection
    {
        cardData charInfo1("Tenth Doctor", 14, 16.1);
        cardData charInfo2("K9", 12, 18.1);
    }

    void beginPlay()
    {
        std::cout << "DOCTOR WHO: The Ten Rings "
    }
};

int main() 
{
    
}


