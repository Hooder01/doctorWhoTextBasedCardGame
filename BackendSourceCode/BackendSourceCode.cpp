#include <iostream>


    struct cardProperties
    {
        std::string characterInformation;
        int HP;
        double MP;
        std::string characterSkill;
    };


    cardProperties createCharacter() 
    {
        cardProperties playerobj;
        

        playerobj.characterInformation = "Tenth Doctor";
        playerobj.HP = 16;
        playerobj.MP = 14.1;
        playerobj.characterSkill = "Sonic Sheild:";

        return playerobj;
    }


    void PlayerChoice() 
    {
        std::cout << "Select a Hero for this adventure!";

        cardProperties obj1 = createCharacter(); // how is this connecting!?

        std::cout << obj1.characterInformation;
    }



int main() 
{
    
}


