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

class MonstersData : public cardData // will hold all data to call enemies to the battleSystem()
{
    void hoodedFigure() 
    {
        // would like to add some sorta art here in future

        cardData MonsterInfo1("[Unknown Hooded Figure]", 5, 10.1);

        std::string healthBar = "[-----]";

        std::cout << MonsterInfo1.characterName << "\n" << healthBar; // monsters like this will display in UI just above the UIDisplay array!
    }

    void dalek() 
    {
        // would like to add some sorta art here in future

        cardData MonsterInfo2("[Dalek]", 9, 14.1);

        std::string healthBar = "[---------]";

        std::cout << MonsterInfo2.characterName << "\n" << healthBar;
    }
};

class storyMiniGames 
{
    public: void TARDISMini1() 
    {
        std::cout << "(You need to set the Void Sequencer between a number of 10 and 15!)";
        double voidSequence;
        double playerselect;
        int numberArray[4]{ 11, 12, 13, 14 };

        std::cout << "VOID SEQUENCER SET: "; std::cin >> playerselect;
        
        if (playerselect != numberArray[0]) // fix this!
        {
            std::cout << "\n\n'There we are..\n\n what was that all about old girl?'";
            std::cout << "\n\n\n(YOU WON Minigame)" << std::endl;
        }
        else 
        {
            std::cout << "\nno.. that's not it" << std::endl; // try again message (needs a loop of sorts)
            std::cout << "\n\n\n(YOU LOST Minigame)" << std::endl;
        }
    }
};

class gameLogic
{
  public: float ExtraPoints = 0.0; // this is only used for timing and minigames! (this may need to placed outside this class)
  
    void battleSystem()
    {
        cardData charInfo1("Tenth Doctor", 14, 16.1);
        cardData charInfo2("K9", 12, 18.1); // Do these need to be in any other class?

        int callTurn = 1;
        std::string userChoice;
        int callingAttack; // attack is NOT used within the context of an constrctor 
        std::string UIDisplay[3]{ "1: Attack", "2. Defend", "3. Stats" };// Array for the use of the battle menu UI 

        std::cout << "\n\n(Would you like to view the tutorial? (y/n))"; // user can view the basics if they wish

        std::cin >> userChoice;

        if (userChoice == "y") 
        {
            std::cout << "(below is the Turn System)" << "\n\n" << UIDisplay[0] << " <-- (Use this to do a simple melee attack, more options will open later!)" << "\n" << UIDisplay[1]; // finish this! <--
        }
        else 
        {
            std::cout << "TURN: " << callTurn++; // this will be incremed by 1 each turn!

            
        }
    }

    void TDStory() // after user selects Tenth Doctor Side Story this is called to main
    {
        storyMiniGames storyCall; // this creates the object for the use of story mini games!

        int neturalPath = 0; // all zero by default!
        int lightPath = 0;
        int darkPath = 0;
        bool checkCurrentPath; // these values will be checked everytime and once a certain number is met, only few select options can be selected due to the users path of choice?

        std::string dialogueOption[3]{ "'Impossible..'(netural)", "'I'm the Doctor, who are you?'(Light)", "'I demand to know you got inside my TARDIS!'(Dark)" }; // array?
        std::string dialogueChoice;

        std::cout << "(The blue outshape of the TARDIS spins around and around inside of the space time vortex)" << std::endl;
        std::cout << "The Doctor (you) look at the TARDIS control panel with gloomy face \n\n\n you sigh loudly to yourself \n\n\n'I'm getting too old for this..'";
        std::cout << "you get back your focus and hit a switch (beep beep!) \n\n'that's odd..'  \n you crouch to the TARDIS scanner \n\n\n'the Void Sequencer needs reset?'\n\n" << std::endl;
        storyCall.TARDISMini1();

        std::cout << "\n\n\n\n\n(BANG BANG!!) sparks fly from the TARDIS console and you fall to the ground!";
        std::cout << "\n\n'THE KEY OF THE MARK HAS BEEN FOUND!'\n\n You stagger yourself up back to the console and see a black ghostly hooded figure";
        std::cout << "\n\nChoose your words carfully: " << "\n\na:" << dialogueOption[0] << "\n\nb:" << dialogueOption[1] << "\n\nc:" << dialogueOption[2];

        std::cin >> dialogueChoice;

        // FIX THIS ARRAY!
        /*if ()
        {
            std::cout << dialogueOption[0] << "How has this strange hooded figure entered your TARDIS?";

            neturalPath++; // Path is incrmented by 1
        }
        else if (dialogueChoice == dialogueOption[1]) 
        {
            std::cout << dialogueOption[1] << "'Listen.. I'm not a big fan of vistors who may I add,don't even send a post card first!'";

            lightPath++;
        }
        else if (dialogueChoice == dialogueOption[2]) 
        {
            std::cout << dialogueOption[2] << "'I hope you're scared cause today is not the day to be messing with me. Why are you here!?";

            darkPath++;
        }*/


        std::cout << "\n\n'ENOUGH!! THE KEY WILL COME WITH ME!'" << "\n\nYou need to defend yourself! (you grab an old wrench sitting below the console)" << "\n\n'Sorry but the key isn't opening it's doors any longer!'" << std::endl;

    }

  public: void onBeginPlay() // this is called into the main function first!
    {

      std::cout << "DOCTOR WHO: Mark Of The Vortex Ring\n\n\n";
        
      int userStorySelection; // will promt user to select a number for the characters story

      std::cout << "\n\nPlease Select Your Story!\n\n" << "\n\n1: " << "Tenth Doctor" << "\n\n2: " << "K9" << "\n\n" << "3: " << "Exit Game";
        
      std::cin >>  userStorySelection;

      if (userStorySelection == 1)
      {
          TDStory(); // calls for the Tenth Doctor Side of the story
      }
      else if (userStorySelection == 2)
      {
          std::cout << "IN PRODUCTION!"; // TEMP!
      }
      else if (userStorySelection == 3) 
      {
          // Console should shut down here <--
          std::cout << "\n\nThanks For Playing!" << std::endl;
          exit(0);
      }
    }

        
};

int main()
{
    gameLogic objTEMP;

    objTEMP.battleSystem(); // Currenly testing combat
}


