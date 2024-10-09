#include <iostream>


    struct cardProperties
    {
        std::string characterInformation;
        int HP;
        double MP;
        std::string characterSkill; // this needs to be a seprate function
    };


    cardProperties createCharacter() //?????!!
    {
        cardProperties playerobj;
        cardProperties playerobj2;

        playerobj.characterInformation = "Tenth Doctor";
        playerobj.HP = 16;
        playerobj.MP = 14.1;
        playerobj.characterSkill = "Sonic Sheild:";

        playerobj2.characterInformation = "K9";
        playerobj2.HP = 15;
        playerobj2.MP = 15.5;
        playerobj2.characterSkill = "Good Dog!:";

            return playerobj;
            
    }


    void PlayerChoice() 
    {
        std::cout << "Select a Hero for this adventure!";

         

        
    }



int main() 
{
    
}


