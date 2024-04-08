#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// graphics ASCII & error handling

//for utility
void after_choice_clear ()
{
    system ("cls");
}
void enter_to_continue ()
{
    printf ("\n..................................................................................................................");
    if (getchar() == '\n')
    {
    system ("cls");
    }
}
void speaking_simulate (const char *speak) 
{
    while (*speak != '\0') {
        putchar(*speak);
        fflush(stdout); 
        clock_t start_time = clock();
        while (clock() < start_time + 5 * CLOCKS_PER_SEC / 2000);
        speak++;
    }
}
void pause_simulate (const char *pause) 
{
    while (*pause != '\0') {
        putchar(*pause);
        fflush(stdout); 
        clock_t start_time = clock();
        while (clock() < start_time + 200 * CLOCKS_PER_SEC / 1000);
        pause++;
    }
}
int choice_checker_chstrint1() {
    int overall_choice;
    char user_input[99];

    do
    {
        printf("\nChoice: ");
        fgets(user_input, sizeof(user_input), stdin);
        fflush (stdin);

        if (sscanf(user_input, "%d", &overall_choice) != 1) {
            if (sscanf(user_input, "%d", &overall_choice) != 1){
                after_choice_clear ();
            }
            continue;
        }

        if (overall_choice != 1 && overall_choice != 2){
            if (overall_choice != 1 && overall_choice != 2){
                after_choice_clear ();
            }
            continue;
        }

        break;
    } while (1);
    
    return overall_choice;
}
int choice_checker_chstrint2() {
    int overall_choice;
    char user_input[99];

    do 
    {
        printf ("\nChoice: ");
        fgets(user_input, sizeof(user_input), stdin);

        if (sscanf(user_input, "%d", &overall_choice) != 1) {
            continue;
        }

        if (overall_choice != 1 && overall_choice != 2 && overall_choice != 3 && overall_choice != 4){
            continue;
        }

        break;
    } while (1);
    
    return overall_choice;
}
int choice_checker_chstrint3 (){
    int overall_choice;
    char user_input[99];

    do 
    {
        printf ("\nChoice: ");
        fgets(user_input, sizeof(user_input), stdin);

        if (sscanf(user_input, "%d", &overall_choice) != 1) {
            continue;
        }

        if (overall_choice != 1 && overall_choice != 2 && overall_choice != 3 && overall_choice != 4 && overall_choice != 5 && overall_choice != 6 && overall_choice != 7 && overall_choice != 8 && overall_choice != 9){
            continue;
        }

        break;
    } while (1);
    
    return overall_choice;
}


//for menu
void menu_panel ();
void menu_panel_connector ();
void characters ();
void how_to_play ();

//for entirety of the game (Holds all the functions together)
void game_story_connector (int lvl2_story_choice_connector, int lvl3_story_choice_connector1, int lvl3_story_choice_connector2, int lvl2_story_choice, int noblegilde_path_choice, int noblehasea_path_choice, int lvl3_lchoice);

//for entire gameplay (status & events)
int statChecker();
void statDisp(int *result);
void randomEvent();
void gold_0 ();
void food_0 ();
void militia_0 ();
void happiness_0 ();
void event1();
void event2();
void event3();
void event4();
void event5();
void event6();
void event7();
void event8();
void event9();
void event10();
void event11();
void event12();
void event13();
void event14();
void event15();
void event16();
void event17();
void event18();
void event19();
void event20();
void event21();
void event22();
void event23();
void event24();
void event25();

void (*event[25])() = {event1, event2, event3, event4, event5, event6, event7, event8, event9, event10, event11, event12, event13, event14, event15, event16, event17, event18, event19, event20, event21, event22, event23, event24, event25};

int player[4] = {50, 50, 50, 50};
char *stat[4] = {"Gold", "Food", "Happiness", "Military"};
int result[2];

//for story
void game_start ();
void game_lvl1 ();
void game_lvl2 (int lvl2_story_choice_connector, int lvl3_story_choice_connector1, int lvl3_story_choice_connector2, int lvl2_story_choice);
void alibi_traitor (int lvl2_story_choice, int lvl3_story_choice_connector1);
void pick_traitor (int lvl3_story_choice_connector1, int noblegilde_path_choice, int noblehasea_path_choice);
void noblehasea_path (int noblehasea_path_choice);
void noblegilde_path (int noblegilde_path_choice);
void connecter_2_3_1 ();
void connector_2_3_2 ();
void game_lvl3 (int lvl3_story_choice_connector1, int lvl3_story_choice_connector2, int noblehasea_path_choice, int noblegilde_path_choice, int lvl2_story_choice);
void ending1 ();
void ending2 ();
void ending3 ();
void ending4 ();

//ASCII art
//characters
void high_priest_weevil_portrait ();
void king_faeron_portrait ();
void noble_gilde_portrait ();
void noble_hasea_portrait ();
void equerry_polriso_portrait ();
void envoy_halbert_portrait ();
void queen_vivi_portrait ();
void old_man_sedo_portrait ();
void general_zamoun_portrait ();
void voice_universe ();

//start
void lead_king ();
void king_standing ();
void king_bestowing ();
void throne ();
void castle ();
void suspicion ();
void explain_yourselves ();
void burn_house ();
void kneeling_alibi ();
void execution1 ();
void execution2 ();

void javorian_fox ();
void from_above1 ();
void from_above2();
void slugs1 ();
void slugs2 ();
void slugs3 ();
void slugs4 ();
void slugs_battle ();

int main (){

    srand(time(NULL));
    /*for function "connector"*/
    int lvl2_story_choice, lvl2_story_choice2, lvl2_story_choice_connector;
    int lvl3_story_choice_connector1, lvl3_story_choice_connector2, lvl3_lchoice;
    int noblehasea_path_choice, noblegilde_path_choice;
    
    printf ("\t\t\t\t\t\t\t\t\t\t                 .     :      .:  .\n");
    printf ("\t ____  _   _ ___ _     ___  ____   ___  ____  _   _ _____ ____    _  _____ _   _  ____   ::    +:    .=:  .-\n");
    printf ("\t|  _ \\| | | |_ _| |   / _ \\/ ___| / _ \\|  _ \\| | | | ____|  _ \\  | |/ /_ _| \\ | |/ ___|  .:.:-*=...:+++: -=.\n");
    printf ("\t| |_) | |_| || || |  | | | \\___ \\| | | | |_) | |_| |  _| | |_) | | ' / | ||  \\| | |  _   :*-.:-*+::-**+-:+*: \n");
    printf ("\t|  __/|  _  || || |__| |_| |___) | |_| |  __/|  _  | |___|  _ <  | . \\ | || |\\  | |_| |   *+:.-*+..-#+=..**  \n");
    printf ("\t|_|   |_| |_|___|_____\\___/|____/ \\___/|_|   |_| |_|_____|_| \\_\\ |_|\\_\\___|_| \\_|\\____|    =-==+++==++=--++ \n");
    enter_to_continue ();

    menu_panel_connector ();

    game_story_connector (lvl2_story_choice2, lvl3_story_choice_connector1, lvl3_story_choice_connector2, lvl2_story_choice, noblegilde_path_choice, noblehasea_path_choice, lvl3_lchoice);

    return 0;
}

void menu_panel_connector ()
{
    int menu_panel_choice;

    printf ("\n\n\n------------------------------------------------------------------------------------------------------------\n\n");

    printf ("\n\n(1) Menu Panel OR (2) Continue\n");
    menu_panel_choice = choice_checker_chstrint1 ();

    switch (menu_panel_choice)
        { 
            case 1:
                after_choice_clear ();
                menu_panel ();
                break;
    
            case 2:
                after_choice_clear ();
                break;
    
            default:
                break;    
        }
}

void menu_panel (){

    int menu_choice;
    int quit_choice;

    do
    {
        exitno:
        printf ("\n\n\n------------------------------------------------------------------------------------------------------------\n\n");
        printf ("\n\n\n(1) How To Play\n");
        printf ("(2) Characters\n");
        printf ("(3) Back\n");
        printf ("(4) Exit\n");
        menu_choice = choice_checker_chstrint2 ();
        after_choice_clear ();

        switch (menu_choice)
        {
            case 1:
                how_to_play ();
                break;
            case 2:
                characters ();
                break;
            case 3:
                menu_panel_connector ();
                break;
            case 4:
                do 
                { 
                    printf ("\n\nAre you sure you want to quit the game?\n\n");
                    printf ("(1)Yes \n(2)No\n");
                    quit_choice = choice_checker_chstrint1 ();

                    if (quit_choice == 1)
                    {
                        exit (EXIT_SUCCESS);
                    }
                    else if (quit_choice == 2)
                    {
                        after_choice_clear();
                        goto exitno;
                    }
                    else 
                    {
                    
                    }
                } while (quit_choice != 2);

                break;

            default:
                break;   
            }

            if (menu_choice == 3)
            {
                break;
            }
    } while (menu_choice != 4);
}

void game_story_connector (int lvl2_story_choice_connector, int lvl3_story_choice_connector1, int lvl3_story_choice_connector2, int lvl2_story_choice, int noblegilde_path_choice, int noblehasea_path_choice, int lvl3_lchoice)
{
    game_start ();
    game_lvl1 ();
    lvl2_story_choice_connector = choice_checker_chstrint1 ();
    after_choice_clear ();
    menu_panel_connector ();
    game_lvl2 (lvl2_story_choice_connector, lvl3_story_choice_connector1, lvl3_story_choice_connector2, lvl2_story_choice);
    lvl3_lchoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (lvl3_lchoice == 1) //find
    {
        connecter_2_3_1 ();

        lvl3_story_choice_connector1 = choice_checker_chstrint1 ();
        after_choice_clear ();
    }
    else if (lvl3_lchoice == 2) //no find
    {
        connector_2_3_2 ();

        lvl3_story_choice_connector2 = choice_checker_chstrint1 ();
        after_choice_clear ();
    }
    menu_panel_connector ();
    game_lvl3 (lvl3_story_choice_connector1, lvl3_story_choice_connector2, noblegilde_path_choice, noblehasea_path_choice, lvl2_story_choice);
    menu_panel_connector ();
}

int statChecker() {
    for (int j = 0; j < 4; j++) { 
        if (player[j] <= 0) {
            result[0] = 1;//true
            result[1] = j;
            break;
        }
    }
    return *result; 
}
//EVENTS FORMAT
//Change content
void statDisp(int *result)
{
  if (result[0] == 1) {
        if (player [0] <= 0)
        {
            gold_0 ();
            
        }
        else if (player [1] <= 0)
        {
            food_0 ();
            
        }
        else if (player [2] <= 0)
        {
            happiness_0 ();
            
        }
        else if (player [3] <= 0)
        {
            militia_0 ();
            
        }
    } else {
        for (int i = 0; i < 4; i++) {
            printf("  |\t[%s: %d]\t|", stat[i], player[i]);
        }
    }
  
}

void randomEvent (){
    int random_event = rand() % 25;
    event[random_event]();
}

void event1()
{
    int eventChoice;
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Old Man Sedo]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    old_man_sedo_portrait ();

    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("The people are hungry and cold, you should prioritize their welfare.");
    printf ("\n.......................................................................................................\n");
    printf("(1) Help them.    OR    (2) Ignore their pleas. \n");
    eventChoice = choice_checker_chstrint1 ();
    printf ("\n.......................................................................................................\n\n\n");
    after_choice_clear ();
    if (eventChoice == 1)
    {
        //Gold is 0, Food is 1, Happiness is 2, Military is 3
        player[0] -= 5;
        player[1] -= 10;
        player[2] += 10;

    } else if (eventChoice == 2){
    
        player[0] += 5;
        player[1] += 10;
        player[2] -= 5;
   
    }
    statChecker();
    statDisp(result);
}
void event2()
{
  printf ("\n\n\n               *****************************************************************************\n");
  printf ("               ******************************[General Zamoun]******************************\n");
  printf ("               *****************************************************************************\n\n\n");
  
  general_zamoun_portrait ();

  printf ("\n\n\n.......................................................................................................\n");
  speaking_simulate ("We need more funding on our militia.\n");
  printf ("\n.......................................................................................................\n");
  printf("(1) You can figure it out yourself.    OR    (2) You may have it. \n");
  int eventChoice;
  eventChoice = choice_checker_chstrint1 ();
  printf ("\n.......................................................................................................\n\n\n");
  after_choice_clear ();
  if (eventChoice == 1)
  {
    //Gold is 0, Food is 1, Happiness is 2, Military is 3
    player[0] += 5;
    player[1] += 10;
    player[3] -= 10;

  } else if (eventChoice == 2){

    player[0] -= 5;
    player[1] -= 10;
    player[3] += 10;

  }
  statChecker();
  statDisp(result);
}
void event3()
{
  printf ("\n\n\n               *****************************************************************************\n");
  printf ("               ******************************[Equerry Polriso]******************************\n");
  printf ("               *****************************************************************************\n\n\n");
  
  equerry_polriso_portrait ();
  
  printf ("\n\n\n.......................................................................................................\n");
  speaking_simulate ("Our current laws are old, should we update them?\n");
  printf ("\n.......................................................................................................\n");
  printf("(1) It should be okay.    OR    (2)Update it. \n");
  int eventChoice;
  eventChoice = choice_checker_chstrint1 ();
  printf ("\n.......................................................................................................\n\n\n");
  after_choice_clear ();
  if (eventChoice == 1)
  {
    //Gold is 0, Food is 1, Happiness is 2, Military is 3
    player[0] += 10;
    player[2] -= 10;

  } else if (eventChoice == 2){

    player[0] -= 10;
    player[2] += 10;

  }
  statChecker();
  statDisp(result);
}
void event4()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Old Man Sedo]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    old_man_sedo_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("I have a proposal. Let's plant more trees.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) It's a waste of funds.    OR    (2) That's a good idea. \n");
    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    printf ("\n.......................................................................................................\n\n\n");
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] += 5;
      player[2] -= 10;

    } else if (eventChoice == 2){

      player[0] -= 5;
      player[2] += 5;

    }
    statChecker();
    statDisp(result);
}
void event5()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[High Priest Weevil]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    high_priest_weevil_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("The church needs more funding.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) God say so.    OR    (2) I do not believe in deities.\n");
    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    printf ("\n.......................................................................................................\n\n\n");
    after_choice_clear ();
      if (eventChoice == 1)
      {
        //Gold is 0, Food is 1, Happiness is 2, Military is 3
        player[0] -= 10;
        player[2] += 5;

      } else if (eventChoice == 2){

        player[0] += 10;
        player[2] -= 10;

      }
      statChecker();
      statDisp(result);
}
void event6()
{

    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Equerry Polriso]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    equerry_polriso_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("Our region from far East are having some radical issues. Should we send our armies?\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Crush those traitors!    OR    (2) It will fizzle out eventually. \n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    printf ("\n.......................................................................................................\n\n\n");
    after_choice_clear ();
      if (eventChoice == 1)
      {
        //Gold is 0, Food is 1, Happiness is 2, Military is 3
        player[2] += 10;
        player[3] -= 10;

      } else if (eventChoice == 2){

        player[2] -= 10;
        player[3] += 5;

      }
      statChecker();
      statDisp(result);
}
void event7()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Old Man Sedo]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    old_man_sedo_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("The farmers are having a hard time yielding crops. They need your support.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) They will figure it out on their own.     OR    (2) Help the poor farmers. \n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
      if (eventChoice == 1)
      {
        //Gold is 0, Food is 1, Happiness is 2, Military is 3
        player[0] += 5;
        player[1] -= 10;
        player[2] -= 10;

      } else if (eventChoice == 2){

        player[0] -= 10;
        player[1] += 10;
        player[2] += 10;

      }
      statChecker();
      statDisp(result);
}
void event8()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[High Priest Weevil]******************************\n");
    printf ("               *****************************************************************************\n\n\n");

    high_priest_weevil_portrait ();

    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("Persuade the people to go to church more.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Such a waste of time.    OR    (2) I will. \n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] += 5;
      player[2] -= 10;

    } else if (eventChoice == 2){

      player[2] += 5;

    }
    statChecker();
    statDisp(result);
}
void event9()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[High Priest Weevil]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    high_priest_weevil_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate("Give the church more power in political affairs, I will make sure the people will obey you.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Get out!    OR    (2) That's a deal. \n");
    
    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] += 5;
      player[2] -= 5;
      player[3] += 5;

    } else if (eventChoice == 2){

      player[2] += 5;
      player[3] -= 10;

    }
    statChecker();
    statDisp(result);
}
void event10()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Equerry Polriso]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    equerry_polriso_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("Diseases are spreading in the West regions of our empire due to unmanaged sanitation.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Help the people.    OR    (2) It does not need immediate response. \n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] -= 15;
      player[1] -= 10;
      player[2] += 10;
      player[3] -= 5;

    } else if (eventChoice == 2){

      player[0] += 10;
      player[1] += 5;
      player[2] -= 15;

    }
    statChecker();
    statDisp(result);
}
void event11()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Envoy Halbert]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    envoy_halbert_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("Refugees are pouring in from the South region of our empire, should we help them?\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Yes. OR    (2) Leave it. \n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] -= 10;
      player[1] -= 15;
      player[2] += 10;
      player[3] -= 15;

    } else if (eventChoice == 2){

      player[0] += 5;
      player[1] += 10;
      player[2] -= 15;
      player[3] += 5;
    }
    statChecker();
    statDisp(result);
}
//edit content, pdf data same with event 11
void event12()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Equerry Polriso]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    equerry_polriso_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("Barbarians are causing troubles in the West regions of our empire, what should we do?\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Defeat those boars.    OR    (2) Let them wreak havoc. \n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] += 5;
      player[2] += 10;
      player [3] -= 15;

    } else if (eventChoice == 2){

      player[0] -= 5;
      player[2] -= 10;
      player [3] += 15;

    }
    statChecker();
    statDisp(result);
}
void event13()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Queen Vivi]******************************");
    printf ("\n               *****************************************************************************\n\n\n");
    
    queen_vivi_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate("My king, we should host a festival for our people.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) There are more important things to do than a festival.    OR    (2) Let's make it grandiose. \n");
    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] += 10;
      player[1] += 5;
      player[2] -= 10;

    } else if (eventChoice == 2){

      player[0] -= 10;
      player[1] -= 15;
      player[2] += 15;

    }
    statChecker();
    statDisp(result);
}
void event14()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Equerry Polriso]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    equerry_polriso_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("We got a plentiful harvest this season. What should we do?\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Sell it for money. OR (2) Store it for winter.\n");
    
    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] += 10;
      player[1] -= 10;
      player[2] -= 5;
      
    } else if (eventChoice == 2){

      player[0] -= 10;
      player[1] += 15;
      player[2] += 5;
    }
    statChecker();
    statDisp(result);
}
void event15()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Queen Vivi]******************************");
    printf ("\n               *****************************************************************************\n\n\n");
    
    queen_vivi_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("My king, I want a diamond necklace\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) It will be a waste of gold. OR (2) Say no more. \n");


    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] += 15;

    } else if (eventChoice == 2){

      player[0] -= 15;
      player[2] -= 10;

    }
    statChecker();
    statDisp(result);
}
void event16()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Old Man Sedo]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    old_man_sedo_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("The East region of the empire is suffering from famine.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Take action. OR (2) They will figure it out.\n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] -= 10;
      player[1] += 15;
      player[2] += 5;
    } else if (eventChoice == 2){

      player[0] += 5;
      player[1] -= 10;
      player[2] -= 15;

    }
    statChecker();
    statDisp(result);
}
void event17()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Noble Hasea]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    noble_hasea_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("I need more military support in my manor, Your Highness\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) General Zamoun! OR (2) It's already enough for you.\n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] -= 5;
      player[3] -= 15;
    } else if (eventChoice == 2){
      player[0] += 5;
      player[3] += 10;
    }
    statChecker();
    statDisp(result);
}
void event18()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Noble Hasea]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    noble_hasea_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("I request funds to expand my own militia.\n");
    printf ("\n.......................................................................................................\n");

    printf("(1) You may have it. OR (2) There's no need.\n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] -= 10;
      player[1] -= 5;
      player[3] -= 5;
    } else if (eventChoice == 2){
      player[0] += 5;
      player[1] += 5;
      player[3] += 5;
    }
    statChecker();
    statDisp(result);
}
void event19()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Noble Gilde]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    noble_gilde_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("I need more herbs and crops to further my alchemy, Your Highness.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) That's a good endeavor.  OR  (2) It's a waste of resources.\n");
    
    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[1] -= 10;
    } else if (eventChoice == 2){

      player[0] += 5;
      player[1] += 5;

    }
    statChecker();
    statDisp(result);
}
void event20()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Noble Gilde]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    noble_gilde_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("I request funds to improve my garden.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1)You may have it. OR (2) It's a waste of resources. \n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] -= 15;
      

    } else if (eventChoice == 2){

      player[0] += 10;
      

    }
    statChecker();
    statDisp(result);
}
void event21()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[General Zamoun]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    general_zamoun_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("Let's host a banquet in the barracks. It will boost the morale of our army.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) They can wait. OR (2) Let's raise their morale.\n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] += 5;
      player[1] += 5;
      player[3] -= 10;
      

    } else if (eventChoice == 2){

      player[0] -= 10;
      player[1] -= 10;
      player[3] += 15;
      

    }
    statChecker();
    statDisp(result);
}
void event22()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[General Zamoun]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    general_zamoun_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("The armory needs improvements, the weapons and armors are old.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) The armory can still sustain itself. OR (2) Make it a priority.\n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] += 5;
      player[2] -= 10;
      player[3] -= 15;
      

    } else if (eventChoice == 2){

      player[0] -= 10;
      player[2] += 5;
      player[3] += 10;
      

    }
    statChecker();
    statDisp(result);
}
void event23 ()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[General Zamoun]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    general_zamoun_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("The training grounds are outdated. We should make it better to boost the strength of our militia.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) It's still working, no need. OR (2) Make the training grounds better.\n");
    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] += 10;
      player[2] -= 5;
      player[3] -= 15;
      

    } else if (eventChoice == 2){

      player[0] -= 10;
      player[2] += 5;
      player[3] += 15;
      

    }
    statChecker();
    statDisp(result);

}
void event24 ()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Envoy Halbert]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    envoy_halbert_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("Some small town in the outskirt of our empire want to be integrated to our empire. What should we do?\n");
    printf ("\n.......................................................................................................\n");
    printf("(3) Welcome them. OR (2) No thanks.\n");
    
    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] -= 10;
      player[1] += 5;
      player[2] += 10;
      player[3] += 10;
      

    } else if (eventChoice == 2){

      player[0] += 10;
      player[1] += 10;
      player[2] -= 5;
      player[3] -= 10;
      

    }
    statChecker();
    statDisp(result);
}
void event25 ()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Envoy Halbert]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    
    envoy_halbert_portrait ();
    
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("A small town in the outskirt of our wants to ask for help to fend off barbarians in their land. In exchange, they will offer gold and food.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Let them suffer. OR (2) Provide military support on their land.\n");

    int eventChoice;
    eventChoice = choice_checker_chstrint1 ();
    after_choice_clear ();
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] -= 5;
      player[1] -= 5;
      player[2] -= 15;
      player[3] += 5;
      

    } else if (eventChoice == 2){

      player[0] += 5;
      player[1] += 5;
      player[2] += 5;
      player[3] -= 10;
      

    }
    statChecker();
    statDisp(result);
}


void gold_0 () //if gold reach 0
{
    printf ("\n\n\n.......................................................................................................\n\n\n");    

    printf ("\t\t\t\t\t\t\t\t\t  =-:   -*++=   :-=\n");
    printf ("\t\t\t\t\t\t\t\t\t  +=*+-*==-==*:++=+\n");
    printf ("\t\t\t\t\t\t\t\t\t   *=*++*+-=*+=*=* \n");
    printf ("\t\t\t\t\t\t\t\t\t   -+=*++===++*=== \n");
    printf ("\t\t\t\t\t\t\t\t\t    #.         .#  \n");
    printf ("\t\t   ____    _    __  __ _____    _____     _______ ____      -:         .=  \n");
    printf ("\t\t  / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\      *-@@+ =@@=*   \n");
    printf ("\t\t | |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |    .= : .*: : -:  \n");
    printf ("\t\t | |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <      .*+  .  +*.   \n");
    printf ("\t\t  \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\      =:----::+      \n");


    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");

    printf ("<><><Your empire was poor. The public started a rebellion and sold off your head as a trophy to rich nobles.><><>\n\n\n");
    exit (0);
}

void food_0 () //if food reach 0
{
    printf ("\n\n\n.......................................................................................................\n\n\n");    

    
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Equerry Polriso]******************************\n");
    printf ("               *****************************************************************************\n\n\n");


    printf ("Your highness, our people are starving and diseases are spreading.\n");
    printf ("We can't support our empire anymore, many are dying and our food source was scarce.\n\n");
    enter_to_continue ();

    printf ("\t\t\t\t\t\t\t\t\t  =-:   -*++=   :-=\n");
    printf ("\t\t\t\t\t\t\t\t\t  +=*+-*==-==*:++=+\n");
    printf ("\t\t\t\t\t\t\t\t\t   *=*++*+-=*+=*=* \n");
    printf ("\t\t\t\t\t\t\t\t\t   -+=*++===++*=== \n");
    printf ("\t\t\t\t\t\t\t\t\t    #.         .#  \n");
    printf ("\t\t   ____    _    __  __ _____    _____     _______ ____      -:         .=  \n");
    printf ("\t\t  / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\      *-@@+ =@@=*   \n");
    printf ("\t\t | |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |    .= : .*: : -:  \n");
    printf ("\t\t | |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <      .*+  .  +*.   \n");
    printf ("\t\t  \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\      =:----::+      \n");

    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");

    printf ("          <><><><><><><><><><><><><The empire collapsed and you starve to death.><><><><><><><><><><><><>\n\n\n");
    exit (0);
}

void militia_0 () // if militia reach 0
{
    printf ("\n\n\n.......................................................................................................\n\n\n");    

    printf ("\t\t\t\t\t\t\t\t\t  =-:   -*++=   :-=\n");
    printf ("\t\t\t\t\t\t\t\t\t  +=*+-*==-==*:++=+\n");
    printf ("\t\t\t\t\t\t\t\t\t   *=*++*+-=*+=*=* \n");
    printf ("\t\t\t\t\t\t\t\t\t   -+=*++===++*=== \n");
    printf ("\t\t\t\t\t\t\t\t\t    #.         .#  \n");
    printf ("\t\t   ____    _    __  __ _____    _____     _______ ____      -:         .=  \n");
    printf ("\t\t  / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\      *-@@+ =@@=*   \n");
    printf ("\t\t | |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |    .= : .*: : -:  \n");
    printf ("\t\t | |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <      .*+  .  +*.   \n");
    printf ("\t\t  \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\      =:----::+      \n");


    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");

    printf ("<><><The empire became weak. This lead to the rise of other factions with the main goal to dethrone you.><><>\n");
    printf ("<><><><><><><><><><><><Stronger enemy conquer the empire and you are murdered brutally.><><><><><><><><><><><>\n\n\n");
    exit (0);
}
void happiness_0 () // if happiness reach 0
{
    printf ("\n\n\n.......................................................................................................\n\n\n");    

    printf ("\t\t\t\t\t\t\t\t\t  =-:   -*++=   :-=\n");
    printf ("\t\t\t\t\t\t\t\t\t  +=*+-*==-==*:++=+\n");
    printf ("\t\t\t\t\t\t\t\t\t   *=*++*+-=*+=*=* \n");
    printf ("\t\t\t\t\t\t\t\t\t   -+=*++===++*=== \n");
    printf ("\t\t\t\t\t\t\t\t\t    #.         .#  \n");
    printf ("\t\t   ____    _    __  __ _____    _____     _______ ____      -:         .=  \n");
    printf ("\t\t  / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\      *-@@+ =@@=*   \n");
    printf ("\t\t | |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |    .= : .*: : -:  \n");
    printf ("\t\t | |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <      .*+  .  +*.   \n");
    printf ("\t\t  \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\      =:----::+      \n");


    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");


    printf ("<><><><><><><><><><><><><><The people was unhappy and discontent with your reign.><><><><><><><><><><><><><>\n");
    printf ("<><><><><><><><><><><><><They started a dethronement leaded by High Priest Weevil.><><><><><><><><><><><><>\n\n");
    printf ("<><><><><><><><><><><><><><><><><><><><><You are executed in public.><><><><><><><><><><><><><><><><><><><><>\n\n\n");
    exit (0);
}

void game_start ()
{
    int gs_choice;
    int gs_choice2;
    int gs_choice3;
    
    king_standing ();
    printf ("----------------------------------------------------------------------------------------------------------------------------\n\n\n");
    speaking_simulate ("\nThere was once a man; ");
    speaking_simulate ("\na man born in a forgotten time, created by a force of unknown origin.\n");
    speaking_simulate ("He would cross the ages knowing his main purpose: ");
    speaking_simulate ("Lead humanity as the greatest empire in the cosmos.\n\n\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");
    enter_to_continue ();

    do 
    {   
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ***************************[Voice of the Universe]***************************\n");
        printf ("               *****************************************************************************\n\n\n");

        voice_universe ();

        printf ("\n\n.......................................................................................................\n\n");    
        speaking_simulate ("\nAre you ready?\n");
        printf ("\n(1) Yes OR (2) No\n");
        gs_choice = choice_checker_chstrint1 ();
        after_choice_clear ();
        
        if (gs_choice == 1)
        {
            printf ("\n\n.......................................................................................................\n\n");    
            speaking_simulate ("\nGreat! Lead this civilization just like you did with many others.\n\n");
            printf ("\n\n.......................................................................................................\n\n");
            enter_to_continue ();
            break;
        }
        else if (gs_choice == 2)
        {
            do
            {
                printf ("\n\n.......................................................................................................\n\n");    
                speaking_simulate ("\nWhy? You already did this before.\n");
                printf ("\n(1) Before? OR (2) Did What?\n");
                gs_choice2 = choice_checker_chstrint1 ();
                after_choice_clear ();

                if (gs_choice2 == 1)
                {
                    printf ("\n\n.......................................................................................................\n\n");    
                    speaking_simulate ("\nYes! Just lead this civilization just like you did with the others.\n");
                    speaking_simulate ("Just make sure you keep in check of the status of your empire so you don't die.\n");
                    break;
                }
                else if (gs_choice2 == 2)
                {
                    printf ("\n\n.......................................................................................................\n\n");    
                    speaking_simulate ("\nLeading a civilization! Just lead them and you'll find out.\n");
                    speaking_simulate ("Just make sure you keep in check of the status of your empire so you don't die.\n");
                    break;
                }
                else 
                {


                }
            } while (gs_choice2 != 2);
            
        }
        else 
        {
        
        }
    } while (gs_choice != 2);

    do{
        enter_to_continue ();
        lead_king ();
        printf ("\n\n.......................................................................................................\n\n");    
        
        speaking_simulate ("\nYou will wake up in 14th Century as a King of a unified world under one rule.\n");
        speaking_simulate ("You manage to conquer the world which conquerors like Julius Caesar, Alexander the Great and Genghis Khan cannot do.\n");
        speaking_simulate ("Now, the only task left is to manage your empire well and fend off any humans who tries to cut off your reign.\n");
        pause_simulate (".............\n");
        speaking_simulate ("OR is it only humans?\n\n");

        printf ("\n\n.......................................................................................................\n\n");    

        printf ("(1) What do you mean? OR (2) I will\n");
        gs_choice3 = choice_checker_chstrint1 ();
        after_choice_clear ();

        if (gs_choice3 == 1 || gs_choice3 == 2)
        {
        printf ("\n\n\n------------------------------------------------------------------------------------------------------------\n\n");
        printf ("The Voice of the Universe disappeared and it went silent for a while. \n");
        printf ("Thereafter, you woke up in your throne.\n\n");
        printf ("------------------------------------------------------------------------------------------------------------\n\n\n");
        throne ();
        enter_to_continue ();
        break;
        }
        else 
        {
            
        }

    } while (gs_choice3 != 2);
    
}

void game_lvl1 ()
{
    /*variable for keeping track of months*/
    /*variable for pulling out an event for 1 to 11 turn. (Probably even the conditional statements are in here.)*/
    int lvl1_story_choice;
    int lvl1_status_choice;
    printf ("\n\n\n                         >>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
    printf ("\n                         >>>>>>>>>>>>>>>>>>>>>>>[LEVEL 1]<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf ("                         >>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n\n");

    for (int i = 0; i < 11; i++){
            randomEvent ();
    }

    do
    {
        castle ();
        enter_to_continue ();
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ******************************[Equerry Polriso]******************************\n");
        printf ("               *****************************************************************************\n\n\n");
        equerry_polriso_portrait ();
        printf ("\n\n\n.......................................................................................................\n");    
        speaking_simulate ("Your highness, there's a problem!");
        printf ("\n.......................................................................................................\n");    
        printf ("(1) Problem? OR (2) What is it?\n");
        lvl1_story_choice = choice_checker_chstrint1 ();
        after_choice_clear ();


        if (lvl1_story_choice == 1)
        {
            
            printf ("\n\n\n.......................................................................................................\n");    
            speaking_simulate ("Yes! Apparently, I'm afraid that there was a traitor.\n");
            speaking_simulate ("Our servants said they heard people at night sneaking out.\n");
            printf ("\n\n\n.......................................................................................................\n");
            suspicion ();
            enter_to_continue ();
            break;
        }
        else if (lvl1_story_choice == 2)
        {
            printf ("\n\n\n.......................................................................................................\n");    
            speaking_simulate ("Our servants suspect that there could be a suspicious person or group inside our castle.\n");
            speaking_simulate ("They heard people whispering and sneaking out at night.\n");
            printf ("\n\n\n.......................................................................................................\n");    
            suspicion ();
            enter_to_continue ();
            break;
        }
        else
        {
            
        }
    } while (lvl1_story_choice != 2);

    printf ("\n\n\n.......................................................................................................\n");    
    speaking_simulate ("Should we investigate it?\n");
    printf ("\n.......................................................................................................\n");    
    printf ("(1) Yes OR (2) No\n");
}
void game_lvl2 (int lvl2_story_choice_connector, int lvl3_story_choice_connector1, int lvl3_story_choice_connector2, int lvl2_story_choice)
{
    
    int lvl2_status_choice;
    int lvl2_story_choice2;
    
    
    printf ("\n\n\n                         >>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
    printf ("\n                         >>>>>>>>>>>>>>>>>>>>>>>[LEVEL 2]<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf ("                         >>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n\n");

    for (int i = 0; i < 11; i++){
            randomEvent ();
    }
        
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Equerry Polriso]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    equerry_polriso_portrait ();
    do
    {
        if (lvl2_story_choice_connector == 1) //YES
        {
            printf ("\n\n\n.......................................................................................................\n");    
            speaking_simulate ("Your highness, our investigation got its fruition!\n");
            speaking_simulate ("We have a lead on who could be the traitor.\n");
            speaking_simulate ("We asked the servants and they said that they saw Noble Gilde and Noble Hasea ");
            speaking_simulate ("at different occasions late at night with their own servants ");
            speaking_simulate ("doing something and look like they are in a hurry.\n");
            printf ("\n\n\n.......................................................................................................\n");
            enter_to_continue ();
            alibi_traitor (lvl2_story_choice, lvl3_story_choice_connector1);

        }
        else if (lvl2_story_choice_connector == 2) //NO
        {
            printf ("\n\n.......................................................................................................\n");    
            speaking_simulate ("Your highness, I am certain there was a traitor and our servants can attest to my claims.\n");
            printf ("\n.......................................................................................................\n");    
            printf ("(1) Go on OR (2) You're being paranoid, Polriso.\n");
            lvl2_story_choice2 = choice_checker_chstrint1 ();
            after_choice_clear ();
            
            if (lvl2_story_choice2 == 1) //GO ON
            {
                printf ("\n\n\n               *****************************************************************************\n");
                printf ("               ******************************[Equerry Polriso]******************************\n");
                printf ("               *****************************************************************************\n\n\n");
                equerry_polriso_portrait ();
                printf ("\n\n\n.......................................................................................................\n");    
                speaking_simulate ("The servants said that they saw Noble Gilde and Noble Hasea ");
                speaking_simulate ("at different occasions late at night with their own servants doing ");
                speaking_simulate ("something and look like they are in a hurry.\n");
                printf ("\n.......................................................................................................\n\n\n");    


                alibi_traitor (lvl2_story_choice, lvl3_story_choice_connector1);

                
            }
            else if (lvl2_story_choice2 == 2) // YOU'RE BEING PARANOID POLRISO
            {

                printf ("\n\n\n               *****************************************************************************\n");
                printf ("               ******************************[King Faeron]******************************\n");
                printf ("               *****************************************************************************\n\n\n");
                king_faeron_portrait ();
                printf ("\n.......................................................................................................\n");    
                speaking_simulate ("\"It's probably nothing. Noble Gilde nor Noble Hasea won't do such thing.\"\n");
                printf ("\n.......................................................................................................\n");    
                enter_to_continue ();
                printf ("\n\n\n               *****************************************************************************\n");
                printf ("               ******************************[Equerry Polriso]******************************\n");
                printf ("               *****************************************************************************\n\n\n");
                equerry_polriso_portrait ();
                printf ("\n.......................................................................................................\n");    
                speaking_simulate ("But, Your Highness \n");
                printf ("\n.......................................................................................................\n"); 
                enter_to_continue ();   
                printf ("\n\n\n               *****************************************************************************\n");
                printf ("               ******************************[King Faeron]******************************\n");
                printf ("               *****************************************************************************\n\n\n");
                king_faeron_portrait ();
                printf ("\n.......................................................................................................\n");    
                speaking_simulate ("\"It's okay, Polriso. You can stop with the traitor accusations.\"\n\n");
                printf ("\n.......................................................................................................\n\n\n");    
                enter_to_continue ();
                
            }
        }
        else
        {

        }

        if (lvl2_story_choice_connector == 1 || lvl2_story_choice_connector == 2)
        {
            break;
        }
    } while (lvl2_story_choice_connector != 2);

    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ***************************[Voice of the Universe]***************************\n");
    printf ("               *****************************************************************************\n\n\n");
    voice_universe ();

    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("The time stopped and revert back before it all folds out. The Voice of the Universe reappear again.\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");
    enter_to_continue ();

    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ***************************[Voice of the Universe]***************************\n");
    printf ("               *****************************************************************************\n\n\n");
    voice_universe ();
    printf ("\n.......................................................................................................\n");    
    speaking_simulate ("This is your last chance. I can turn back time for you.\n");
    speaking_simulate ("Decide now, whether you will find who is the traitor or not.\n");
    speaking_simulate ("REMEMBER, YOUR DECISION HAS CONSEQUENCES.\n");
    printf ("\n.......................................................................................................\n");    

    printf ("\n.......................................................................................................\n");    
    printf ("(1) I will find the traitor OR (2) There is no traitor\n");
}

void game_lvl3 (int lvl3_story_choice_connector1, int lvl3_story_choice_connector2, int noblehasea_path_choice, int noblegilde_path_choice, int lvl2_story_choice)
{

    printf ("\n\n\n                         >>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
    printf ("\n                         >>>>>>>>>>>>>>>>>>>>>>>[LEVEL 3]<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf ("                         >>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n\n");
    
    for (int i = 0; i < 11; i++){
            randomEvent ();
    }

    //12th turn
    int queen_vivi_path_choice;

    if (lvl3_story_choice_connector1 == 1)
    {
        pick_traitor (lvl3_story_choice_connector1, noblegilde_path_choice, noblehasea_path_choice); 
    }
    else if (lvl3_story_choice_connector1 == 2)
    {
        printf ("\t\t\t\t\t\t\t\t\t  =-:   -*++=   :-=\n");
        printf ("\t\t\t\t\t\t\t\t\t  +=*+-*==-==*:++=+\n");
        printf ("\t\t\t\t\t\t\t\t\t   *=*++*+-=*+=*=* \n");
        printf ("\t\t\t\t\t\t\t\t\t   -+=*++===++*=== \n");
        printf ("\t\t\t\t\t\t\t\t\t    #.         .#  \n");
        printf ("\t\t   ____    _    __  __ _____    _____     _______ ____      -:         .=  \n");
        printf ("\t\t  / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\      *-@@+ =@@=*   \n");
        printf ("\t\t | |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |    .= : .*: : -:  \n");
        printf ("\t\t | |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <      .*+  .  +*.   \n");
        printf ("\t\t  \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\      =:----::+      \n");

        printf ("------------------------------------------------------------------------------------------------------------\n");
        printf ("------------------------------------------------------------------------------------------------------------\n");
        printf ("------------------------------------------------------------------------------------------------------------\n\n\n");

        printf ("          <><><><><><><><><><><><><><><><><><><You failed as a king.><><><><><><><><><><><><><><><><><><>\n\n\n");
        
    }
    else if (lvl3_story_choice_connector2 == 1) //YES
    {
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ********************************[Queen Vivi]********************************\n");
        printf ("               *****************************************************************************\n\n\n");
        queen_vivi_portrait ();
        printf ("\n.......................................................................................................\n");    
        speaking_simulate ("Can we host a banquet this week, My King?\n");
        printf ("\n.......................................................................................................\n");    
        printf ("(1) Yes OR (2) No\n");
        queen_vivi_path_choice = choice_checker_chstrint1 ();
        enter_to_continue ();

        if (queen_vivi_path_choice == 1) //YES
        {
            printf ("------------------------------------------------------------------------------------------------------------\n");
            printf ("The banquet was attended by people throughout the kingdom. It was grandiose and festive.\n");
            printf ("------------------------------------------------------------------------------------------------------------\n\n\n");
            enter_to_continue ();

            printf ("\t\t\t\t\t\t\t\t\t  =-:   -*++=   :-=\n");
            printf ("\t\t\t\t\t\t\t\t\t  +=*+-*==-==*:++=+\n");
            printf ("\t\t\t\t\t\t\t\t\t   *=*++*+-=*+=*=* \n");
            printf ("\t\t\t\t\t\t\t\t\t   -+=*++===++*=== \n");
            printf ("\t\t\t\t\t\t\t\t\t    #.         .#  \n");
            printf ("\t\t   ____    _    __  __ _____    _____     _______ ____      -:         .=  \n");
            printf ("\t\t  / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\      *-@@+ =@@=*   \n");
            printf ("\t\t | |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |    .= : .*: : -:  \n");
            printf ("\t\t | |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <      .*+  .  +*.   \n");
            printf ("\t\t  \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\      =:----::+      \n");

            printf ("          <><><><><><><><><><><><><><><><><><You died drinking a wine.><><><><><><><><><><><><><><><><><>\n\n\n");

        
                
        }
        else if (queen_vivi_path_choice == 2) //NO
        {
            printf ("\t\t\t\t\t\t\t\t\t  =-:   -*++=   :-=\n");
            printf ("\t\t\t\t\t\t\t\t\t  +=*+-*==-==*:++=+\n");
            printf ("\t\t\t\t\t\t\t\t\t   *=*++*+-=*+=*=* \n");
            printf ("\t\t\t\t\t\t\t\t\t   -+=*++===++*=== \n");
            printf ("\t\t\t\t\t\t\t\t\t    #.         .#  \n");
            printf ("\t\t   ____    _    __  __ _____    _____     _______ ____      -:         .=  \n");
            printf ("\t\t  / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\      *-@@+ =@@=*   \n");
            printf ("\t\t | |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |    .= : .*: : -:  \n");
            printf ("\t\t | |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <      .*+  .  +*.   \n");
            printf ("\t\t  \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\      =:----::+      \n");

            printf ("          <><><><><><><><><><><><><><><><><><You died drinking a wine.><><><><><><><><><><><><><><><><><>\n\n\n");
        }
    }
    else if (lvl3_story_choice_connector2 == 2) //NO
    {
        printf ("\t\t\t\t\t\t\t\t\t  =-:   -*++=   :-=\n");
        printf ("\t\t\t\t\t\t\t\t\t  +=*+-*==-==*:++=+\n");
        printf ("\t\t\t\t\t\t\t\t\t   *=*++*+-=*+=*=* \n");
        printf ("\t\t\t\t\t\t\t\t\t   -+=*++===++*=== \n");
        printf ("\t\t\t\t\t\t\t\t\t    #.         .#  \n");
        printf ("\t\t   ____    _    __  __ _____    _____     _______ ____      -:         .=  \n");
        printf ("\t\t  / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\      *-@@+ =@@=*   \n");
        printf ("\t\t | |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |    .= : .*: : -:  \n");
        printf ("\t\t | |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <      .*+  .  +*.   \n");
        printf ("\t\t  \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\      =:----::+      \n");

        printf ("          <><><><><><><><><><><><You are assasinated without knowing who killed you.><><><><><><><><><><><>\n\n\n");
    }
    
}

void alibi_traitor (int lvl2_story_choice, int lvl3_story_choice_connector1)
{
    int alibi_choice, alibi2_gilde, alibi2_hasea;

    do
    {
        printf ("\n\n\n.......................................................................................................\n");    
        speaking_simulate ("It's either Noble Gilde or Noble Hasea.\n");
        printf ("\n.......................................................................................................\n");    
        printf ("(1) Summon them and have them explain themselves! OR (2) It's probably nothing.\n");
        lvl2_story_choice = choice_checker_chstrint1 ();
        after_choice_clear ();

        if (lvl2_story_choice == 1) /*SUMMON THEM*/
        {
            
            do 
            {
                printf ("\n\n\n               *****************************************************************************\n");
                printf ("               ******************************[King Faeron]******************************\n");
                printf ("               *****************************************************************************\n\n\n");
                king_faeron_portrait ();
                printf ("\n.......................................................................................................\n");    
                speaking_simulate ("\"Explain yourselves!!\"\n");
                printf ("\n.......................................................................................................\n");
                explain_yourselves ();    
                printf ("(1) Noble Gilde OR (2) Noble Hasea\n");
                alibi_choice = choice_checker_chstrint1 ();
                after_choice_clear ();
                
                if (alibi_choice == 1)
                {
                    NobleGilde:
                    printf ("\n\n\n               *****************************************************************************\n");
                    printf ("               ******************************[Noble Gilde]******************************\n");
                    printf ("               *****************************************************************************\n\n\n");
                    noble_gilde_portrait ();
                    printf ("\n\n\n.......................................................................................................\n");
                    speaking_simulate ("I sentenced my physician to death.... \n\n");
                    execution1 ();
                    speaking_simulate ("and burn its collection of herbs\n");
                    speaking_simulate ("and medicinal plants because I found out that he is giving wrong consultations on me.\n\n");
                    burn_house ();
                    speaking_simulate ("I don't want such physicians to get near you as it might endanger your life.\n");
                    speaking_simulate ("We've gone to the castle at night to collect the herbs ");
                    speaking_simulate ("and medicinal plants that physician gave to the castle and eradicate it ourselves.\n\n");
                    castle ();
                    speaking_simulate ("I don't want you to know my incompetence at managing such problematic physician.\n\n\n");
                    printf ("\n.......................................................................................................\n\n\n");
                    kneeling_alibi ();

                    
                    do
                    {
                        printf ("\n.......................................................................................................\n");
                        printf ("\n\n (1) Noble Hasea's alibi OR (2) Enough\n");
                        alibi2_gilde = choice_checker_chstrint1 ();
                        after_choice_clear ();

                        if (alibi2_gilde == 1)
                        {
                            goto NobleHasea;
                        }
                        else if (alibi2_gilde == 2)
                        {
                            break;
                        }
                        else
                        {

                        }
                    } while (alibi2_gilde != 2);
                }
                else if (alibi_choice == 2)
                {
                    NobleHasea:
                    printf ("\n\n\n               *****************************************************************************\n");
                    printf ("               ******************************[Noble Hasea]******************************\n");
                    printf ("               *****************************************************************************\n\n\n");
                    noble_hasea_portrait ();
                    printf ("\n\n\n.......................................................................................................\n");
                    speaking_simulate ("I found out that the general of my army was partaking in selling weapons without my knowledge ");
                    speaking_simulate ("and our armory was almost emptied so I ordered him to be executed.\n");
                    execution1 ();
                    speaking_simulate ("The reason I went to the castle late at night with my servants is to check on the main castle's armory ");
                    speaking_simulate ("as I am afraid that it might be also been tampered by my corrupt general. ");
                    castle ();
                    speaking_simulate ("Turns out everything is fine.\n\n");
                    speaking_simulate ("I don't want you to found out all about this so I kept it a secret, your Highness.\n");
                    printf ("\n.......................................................................................................\n");
                    kneeling_alibi ();

                    do 
                    {
                        printf ("\n.......................................................................................................\n");
                        printf ("(1) Noble Gilde's alibi OR (2) Enough\n");
                        alibi2_hasea = choice_checker_chstrint1 ();
                        after_choice_clear ();

                        if (alibi2_hasea == 1)
                        {
                            goto NobleGilde;
                        } 
                        else if (alibi2_hasea == 2)
                        {
                            break;
                        }
                        else
                        {

                        }
                    } while (alibi2_hasea != 2);
                    
                }
                else
                {
                           
                }

                if (alibi2_gilde == 1 || alibi2_gilde == 2 || alibi2_hasea == 1 || alibi2_hasea == 2)
                {
                    break;
                }
            } while (alibi_choice != 2);

                             
        }
        else if (lvl2_story_choice == 2) /*IT'S PROBABLY NOTHING*/
        {
            ending1 ();
            break;
        }
        else
        {

        }

        if (alibi_choice == 1 || alibi_choice == 2 || lvl3_story_choice_connector1 == 1 || lvl3_story_choice_connector1 == 2)
        {
            break;
        }
    } while (lvl2_story_choice != 2); 
   
}

void connecter_2_3_1 ()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Equerry Polriso]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    equerry_polriso_portrait ();
    printf ("\n.......................................................................................................\n");    
    speaking_simulate ("Do you have an idea now who is the traitor, your highness?\n");
    printf ("(1) Yes OR (2) No\n");
}

void connector_2_3_2 ()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[General Zamoun]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    general_zamoun_portrait ();
    printf ("\n.......................................................................................................\n");   
    speaking_simulate ("Just in case, should we heighten the security of the castle, Your Highness?\n");
    printf ("(1) YES OR (2) NO\n");
}

void pick_traitor (int lvl3_story_choice_connector1, int noblegilde_path_choice, int noblehasea_path_choice)
{
    do
    {
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ******************************[Equerry Polriso]******************************\n");
        printf ("               *****************************************************************************\n\n\n");
        equerry_polriso_portrait ();
        printf ("\n.......................................................................................................\n");    
        speaking_simulate ("Who is the traitor, Your highness?\n");
        printf ("(1) Noble Gilde OR (2) Noble Hasea\n");
        lvl3_story_choice_connector1 = choice_checker_chstrint1 ();
        after_choice_clear ();

        if (lvl3_story_choice_connector1 == 1) //NOBLE GILDE - TRAITOR
        {
        noblehasea_path (noblehasea_path_choice);
        break;
        }
        else if (lvl3_story_choice_connector1 == 2) //NOBLE HASEA - TRAITOR
        {
        noblegilde_path (noblegilde_path_choice);
        break;
        }
        else
        {

        }

    } while (lvl3_story_choice_connector1 != 2);
}

void ending1 () // POWERS FROM ABOVE
{
    int ending1_choice1, ending1_choice2, ending1_choice3;

    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Equerry Polriso]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    equerry_polriso_portrait ();
    printf ("\n.......................................................................................................\n");        
    speaking_simulate ("Your Highness! .... From the far east, an ominous gigantic boat made out of \n ");
    speaking_simulate ("metal is afloat in the skies.\n\n");
    from_above1 ();
    enter_to_continue ();

    do
    {
        printf ("\n.......................................................................................................\n");        
        speaking_simulate ("(1) What kind of black magic is it? OR (2) Are you out of your mind?\n");
        ending1_choice1 = choice_checker_chstrint1 ();
        after_choice_clear ();

        if (ending1_choice1 == 1 || ending1_choice1 == 2)
        {
            printf ("\n\n\n               *****************************************************************************\n");
            printf ("               ******************************[Equerry Polriso]******************************\n");
            printf ("               *****************************************************************************\n\n\n");
            equerry_polriso_portrait ();
            printf ("\n.......................................................................................................\n");    
            speaking_simulate ("Your highness, this is for real.\n");
            speaking_simulate (" From it, a bunch of neo-humans with unusually glowing armor descent.\n\n");
            from_above2 ();
            enter_to_continue ();

            do 
            {
                printf ("\n.......................................................................................................\n");    
                printf ("(1) Humans? OR (2) Wha--?\n");
                ending1_choice2 = choice_checker_chstrint1 ();
                after_choice_clear ();

                if (ending1_choice2 == 1 || ending1_choice2 == 2)
                {
                    printf ("\n\n\n               *****************************************************************************\n");
                    printf ("               ******************************[Equerry Polriso]******************************\n");
                    printf ("               *****************************************************************************\n\n\n");
                    equerry_polriso_portrait ();
                    printf ("\n.......................................................................................................\n");    
                    speaking_simulate ("Our militia are currently fending them off.\n");
                    speaking_simulate ("However, our numbers are dwindling. Our mightiest warriors are falling like flies.\n\n");

                    do
                    {
                        printf ("\n.......................................................................................................\n");    
                        printf ("(1) Impossible OR (2) Do something!\n");
                        ending1_choice3 = choice_checker_chstrint1 ();
                        after_choice_clear ();

                        if (ending1_choice3 == 1 || ending1_choice3 == 2)
                        {
                            printf ("\n\n\n               *****************************************************************************\n");
                            printf ("               ******************************[Equerry Polriso]******************************\n");
                            printf ("               *****************************************************************************\n\n\n");
                            equerry_polriso_portrait ();
                            printf ("\n.......................................................................................................\n");    
                            speaking_simulate ("Our mighty swords and arrow can't faze nor scratch them.\n");
                            speaking_simulate (" In addition, their weapons are out of this world, it spurs out balls of fire.\n");
                            printf ("\n.......................................................................................................\n");    
                            break;
                        }
                        else
                        {

                        } 
                    } while (ending1_choice3 != 2);
                }
                else 
                {

                }
                
                if (ending1_choice3 == 1 || ending1_choice3 == 2)
                {
                    break;
                }
            } while (ending1_choice2 != 2);
        }
        else 
        {
    
        }

        if (ending1_choice2 == 1 || ending1_choice2 == 2)
        {
            break;
        }
    } while (ending1_choice1 != 2);

    //Finally! I figure it out!!!! I knew it. The problem is in the while. 
    //Basically the program can't keep track of your choices if you are inside
    // a nested loop that is inside the nested loop so you need to set a condition
    // that will allow you to get out.
    printf ("\t\t\t\t\t\t\t\t\t  =-:   -*++=   :-=\n");
    printf ("\t\t\t\t\t\t\t\t\t  +=*+-*==-==*:++=+\n");
    printf ("\t\t\t\t\t\t\t\t\t   *=*++*+-=*+=*=* \n");
    printf ("\t\t\t\t\t\t\t\t\t   -+=*++===++*=== \n");
    printf ("\t\t\t\t\t\t\t\t\t    #.         .#  \n");
    printf ("\t\t   ____    _    __  __ _____    _____     _______ ____      -:         .=  \n");
    printf ("\t\t  / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\      *-@@+ =@@=*   \n");
    printf ("\t\t | |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |    .= : .*: : -:  \n");
    printf ("\t\t | |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <      .*+  .  +*.   \n");
    printf ("\t\t  \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\      =:----::+      \n");

    
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");
    printf ("          <><><><><><><><><><><><Your kingdom was taken over by an unknown species.><><><><><><><><><><><>\n\n\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n");
    printf ("A technologically advanced of unknown species take over your kingdom and soon the entire world.\n");
    printf ("The entire humanity became a servitude under a space fairing alien.\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n");

}

void noblehasea_path (int noblehasea_path_choice)
{

    printf ("\n\n<><><><><><><><><><><><Noble Gilde was put to a public execution.><><><><><><><><><><><>\n\n");
    execution2 ();
    enter_to_continue ();

    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Noble Hasea]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    noble_hasea_portrait ();
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("May I request an additional militia and equipment for my army, your highness. ");
    speaking_simulate ("I want to further conquer the outskirts of the world for you.\n");

    do
    {
        printf ("..........................................................................................................\n");
        printf ("(1) Yes, that would be nice. OR (2) No, that's a waste of time.\n");
        noblehasea_path_choice = choice_checker_chstrint1 ();
        after_choice_clear ();

        if (noblehasea_path_choice == 1)
        {
            ending3 ();
            break;
        }
        else if (noblehasea_path_choice == 2)
        {
            ending4 ();
            break;
        }
        else
        {

        }
    } while (noblehasea_path_choice != 2);
}

void noblegilde_path (int noblegilde_path_choice)
{

    printf ("\n\n<><><><><><><><><><><><Noble Hasea was put to a public execution.><><><><><><><><><><><>\n\n");
    execution2 ();
    enter_to_continue ();

    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Noble Gilde]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    noble_gilde_portrait ();
    printf ("\n\n\n.......................................................................................................\n");
    speaking_simulate ("May I request more physicians to work under my command, Your Highness?\n");
    speaking_simulate ("I might discover a cure for uncurable diseases or even discover immortality. ");
    speaking_simulate ("I will call it THE JAVORIAN MEDICINE.\n\n");

    do
    {
        printf ("\n.......................................................................................................\n");
        printf ("(1) That's interesting, yes. OR (2) Nonsense, no.\n");
        noblegilde_path_choice = choice_checker_chstrint1 ();
        after_choice_clear ();

        if (noblegilde_path_choice == 1)
        {
            ending2 ();
            break;
        }
        else if (noblegilde_path_choice == 2)
        {
            ending4 ();
            break;
        }
        else
        {

        }
    } while (noblegilde_path_choice != 2);
    





}

void ending2 () // The Javorian Fox
{
    int ending2_choice1, ending2_choice2, ending2_choice3;

    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Equerry Polriso]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    equerry_polriso_portrait ();
    printf ("\n.......................................................................................................\n");        

    speaking_simulate ("Your Highness!!\n\n");
    do 
    {
        printf ("\n.......................................................................................................\n");        
        printf ("(1) What is it? OR (2) What happened?\n");
        ending2_choice1 = choice_checker_chstrint1 ();
        after_choice_clear ();

        if (ending2_choice1 == 1 || ending2_choice1 == 2)
        {
            printf ("\n\n\n               *****************************************************************************\n");
            printf ("               ******************************[Equerry Polriso]******************************\n");
            printf ("               *****************************************************************************\n\n\n");
            equerry_polriso_portrait ();
            printf ("\n.......................................................................................................\n");        

            speaking_simulate ("\n\n\nFor days now, commoners and nobles are dying from an unknown disease. It is spreading like wild fire.\n");
            speaking_simulate ("Bodies continue to drop dead as if flowers suddenly withering in an instant.\n");
            speaking_simulate ("Symptoms before the sudden death was non existence aside from ");       
            speaking_simulate ("a red-ish bump that will appear after dying.\n\n");
            printf ("\n.......................................................................................................\n");
            javorian_fox ();
            enter_to_continue ();        

            do
            {
            printf ("\n.......................................................................................................\n");        
            printf ("(1) Where is Noble Gilde? OR (2) Order Noble Gilde and the Physicians to find a cure.\n");
            ending2_choice2 = choice_checker_chstrint1 ();
            after_choice_clear ();

            if (ending2_choice2 == 1 || ending2_choice2 == 2)
            {
                printf ("\n\n\n               *****************************************************************************\n");
                printf ("               ******************************[Equerry Polriso]******************************\n");
                printf ("               *****************************************************************************\n\n\n");
                equerry_polriso_portrait ();
                printf ("\n.......................................................................................................\n");        

                speaking_simulate ("\n\n\nNoble Gilde was nowhere to be found, your Highness.\n\n");

                do
                {
                    printf ("\n.......................................................................................................\n");        
                    printf ("(1) What?! OR (2) The physicians?\n");
                    ending2_choice3 = choice_checker_chstrint1 ();
                    after_choice_clear ();

                    if (ending2_choice3 == 1 || ending2_choice3 == 2)
                    {
                        printf ("\n\n\n               *****************************************************************************\n");
                        printf ("               ******************************[Equerry Polriso]******************************\n");
                        printf ("               *****************************************************************************\n\n\n");
                        equerry_polriso_portrait ();
                        printf ("\n.......................................................................................................\n");        

                        speaking_simulate ("\n\n\nAnd the physicians were discovered to be all been brutally murdered in Noble Gilde's manor.\n\n\n");
                        break;
                    }
                    else
                    {

                    }
                } while (ending2_choice3 != 2);
                

            }
            else
            {

            }

            if (ending2_choice3 == 1 || ending2_choice3 == 2)
            {
                break;
            }
            } while (ending2_choice2 != 2);
        }
        else 
        {

        }
        if (ending2_choice2 == 1 || ending2_choice2 == 2)
        {
            break;
        }
    } while (ending2_choice1 != 2); 

    printf ("\t\t\t\t\t\t\t\t\t  =-:   -*++=   :-=\n");
    printf ("\t\t\t\t\t\t\t\t\t  +=*+-*==-==*:++=+\n");
    printf ("\t\t\t\t\t\t\t\t\t   *=*++*+-=*+=*=* \n");
    printf ("\t\t\t\t\t\t\t\t\t   -+=*++===++*=== \n");
    printf ("\t\t\t\t\t\t\t\t\t    #.         .#  \n");
    printf ("\t\t   ____    _    __  __ _____    _____     _______ ____      -:         .=  \n");
    printf ("\t\t  / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\      *-@@+ =@@=*   \n");
    printf ("\t\t | |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |    .= : .*: : -:  \n");
    printf ("\t\t | |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <      .*+  .  +*.   \n");
    printf ("\t\t  \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\      =:----::+      \n");

    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");
    printf ("          <><><><><><><><><><><The entire population was eradicated by an unknown disease.><><><><><><><><>\n\n\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n");
    printf ("Everyone in the castle died except for you and Polriso\n"); 
    printf ("For some reason, the disease doesn't affect both of you. What's a king without jurisdiction?\n\n\n");// The King Without a Kingdom and The Javorian Fox
    printf ("------------------------------------------------------------------------------------------------------------\n\n");
}

void ending3 () // THE SLUGS FOOLED US
{
    int ending3_choice1, ending3_choice2, ending3_choice3, ending3_choice4;

    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Equerry Polriso]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    equerry_polriso_portrait ();
    printf ("\n.......................................................................................................\n");        

    speaking_simulate ("Your highness, this is dire!\n\n");

    do
    {
        printf ("\n.......................................................................................................\n");        
        printf ("(1) What? What? OR (2) Uuuh..\n");
        ending3_choice1 = choice_checker_chstrint1 ();
        after_choice_clear ();

        if (ending3_choice1 == 1 || ending3_choice1 == 2)
        {
            printf ("\n\n\n               *****************************************************************************\n");
            printf ("               ******************************[Equerry Polriso]******************************\n");
            printf ("               *****************************************************************************\n\n\n");
            equerry_polriso_portrait ();
            printf ("\n.......................................................................................................\n");        

            speaking_simulate ("\n\nNoble Hasea... I think, turned against us alongside the militia that we entrusted him.\n\n");
            slugs1 ();
            enter_to_continue ();

            do 
            {
                printf ("\n.......................................................................................................\n");        
                printf ("(1) Fight them OR (2) Defeat them\n");
                ending3_choice2 = choice_checker_chstrint1 ();
                after_choice_clear ();

                if (ending3_choice2 == 1 || ending3_choice2 == 2)
                {
                    printf ("\n\n\n               *****************************************************************************\n");
                    printf ("               ******************************[Equerry Polriso]******************************\n");
                    printf ("               *****************************************************************************\n\n\n");
                    equerry_polriso_portrait ();
                    printf ("\n.......................................................................................................\n");        

                    speaking_simulate ("\nOur army was fighting them but they are..\n\n");
                    slugs_battle ();
                    enter_to_continue ();

                    do 
                    {
                        printf ("\n.......................................................................................................\n");        
                        printf ("(1) They are? OR (2) Continue\n");
                        ending3_choice3 = choice_checker_chstrint1 ();
                        after_choice_clear ();

                        if (ending3_choice3 == 1 || ending3_choice3 == 2)
                        {
                            printf ("\n\n\n               *****************************************************************************\n");
                            printf ("               ******************************[Equerry Polriso]******************************\n");
                            printf ("               *****************************************************************************\n\n\n");
                            equerry_polriso_portrait ();
                            printf ("\n.......................................................................................................\n");        

                            speaking_simulate ("\n\nThey are different, they are immortal, they can't die.\n\n");

                            do
                            {
                                printf ("\n.......................................................................................................\n");        
                                printf ("(1) Impossible OR (2) What do you mean?\n");
                                ending3_choice4 = choice_checker_chstrint1 ();
                                after_choice_clear ();

                                if (ending3_choice4 == 1 || ending3_choice4 == 2)
                                {
                                    printf ("\n\n\n               *****************************************************************************\n");
                                    printf ("               ******************************[Equerry Polriso]******************************\n");
                                    printf ("               *****************************************************************************\n\n\n");
                                    equerry_polriso_portrait ();
                                    printf ("\n.......................................................................................................\n");        

                                    speaking_simulate ("The only way for them to die was to target their brains. ");
                                    speaking_simulate ("However, once dead, their entire body will turn into a ");
                                    speaking_simulate ("morphed beasts that can eat through any metals. ");
                                    speaking_simulate ("Our militia was dwindling, I don't know how long we can fend them off.\n\n\n");
                                    slugs2 ();
                                    enter_to_continue ();
                                    break;
                                }
                                else
                                {

                                }
                            } while (ending3_choice4 != 2);
                            
                        }
                        else
                        {

                        }

                        if (ending3_choice4 == 1 || ending3_choice4 == 2)
                        {
                            break;
                        }
                    } while (ending3_choice3 != 2);
                }
                else 
                {

                }
                
                if (ending3_choice3 == 1 || ending3_choice3 == 2)
                {
                    break;
                }
            } while (ending3_choice2 != 2);
        }
        else
        {

        }
        if (ending3_choice2 == 1 || ending3_choice2 == 2)
        {
            break;
        }
    } while (ending3_choice1 != 2);

    

    printf ("\t\t\t\t\t\t\t\t\t  =-:   -*++=   :-=\n");
    printf ("\t\t\t\t\t\t\t\t\t  +=*+-*==-==*:++=+\n");
    printf ("\t\t\t\t\t\t\t\t\t   *=*++*+-=*+=*=* \n");
    printf ("\t\t\t\t\t\t\t\t\t   -+=*++===++*=== \n");
    printf ("\t\t\t\t\t\t\t\t\t    #.         .#  \n");
    printf ("\t\t   ____    _    __  __ _____    _____     _______ ____      -:         .=  \n");
    printf ("\t\t  / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\      *-@@+ =@@=*   \n");
    printf ("\t\t | |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |    .= : .*: : -:  \n");
    printf ("\t\t | |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <      .*+  .  +*.   \n");
    printf ("\t\t  \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\      =:----::+      \n");

    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");
    printf ("<><><><><><><The militia was overpowered by Noble Hasea and the entire kingdom is in hysteria.><><><><><>\n\n\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n");
    printf ("Noble Hasea has reached the castle and invites you to join him in the hive.\n");
    printf ("He offer you a slug and order you to put it into your mouth.\n\n"); //Unlock THE SLUGS FOOLED US
    printf ("------------------------------------------------------------------------------------------------------------\n\n");
    
}

void ending4 () //ASCENSION
{
    
    printf ("\t\t   ____ ___  _   _  ____ ____      _  _____ _   _ _        _  _____ ___ ___  _   _ ____  \n"); 
    printf ("\t\t  / ___/ _ \\| \\ | |/ ___|  _ \\    / \\|_   _| | | | |      / \\|_   _|_ _/ _ \\| \\ | / ___| \n"); 
    printf ("\t\t | |  | | | |  \\| | |  _| |_) |  / _ \\ | | | | | | |     / _ \\ | |  | | | | |  \\| \\___ \\ \n"); 
    printf ("\t\t | |__| |_| | |\\  | |_| |  _ <  / ___ \\| | | |_| | |___ / ___ \\| |  | | |_| | |\\  |___) |\n"); 
    printf ("\t\t  \\____\\___/|_| \\_|\\____|_| \\_\\/_/   \\_\\_|  \\___/|_____/_/   \\_\\_| |___\\___/|_| \\_|____/ \n"); 
    printf ("------------------------------------------------------------------------------------------------------------\n\n");

    printf ("Your reign continues, and humanity's technological leap was made possible under the imperium. ");
    printf ("By 1850s humanity harnessed the FTL travel or Faster Than Light travel. ");
    printf ("Humanity spans throughout galaxies by the year 1930s and it is discovered that there are other species in the cosmos that is worth conquering over.\n ");
    printf ("                         This led to the creation of the IMPERIUM OF MAN.\n\n\n");

    printf ("The story will continue as we strive for the domination over other species.\n\n\n"); // UNLOCK ASCENSION AND IMPERIUM OF MAN

    printf ("------------------------------------------------------------------------------------------------------------\n\n");

    king_bestowing ();



}

void characters ()
{
    int character_choice;

    after_choice_clear ();
    printf ("------------------------------------------------------------------------------------------------------------\n\n");
    printf ("(1) King Faeron\n");
    printf ("(2) Queen Vivi\n");
    printf ("(3) Noble Hasea\n");
    printf ("(4) Noble Gilde\n");
    printf ("(5) General Zamoun\n");
    printf ("(6) Equerry Polriso\n");
    printf ("(7) High Priest Weevil\n");
    printf ("(8) Old Man Sedo\n");
    printf ("(9) Envoy Halbert\n");

    character_choice = choice_checker_chstrint3 ();
    
    switch (character_choice)
    {
    case 1:
        after_choice_clear ();
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ******************************[King Faeron]******************************\n");
        printf ("               *****************************************************************************\n\n\n");

        king_faeron_portrait ();

        printf ("\n\t\t\t\t\t<<Who are you? Find out.>>\n");
        enter_to_continue ();
        break;
    
    case 2:
        after_choice_clear ();
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ********************************[Queen Vivi]********************************\n");
        printf ("               *****************************************************************************\n\n\n");

        queen_vivi_portrait ();

        printf ("\n<<The wife of King Faeron. She doesn't care about the welfare of the people. She just wants extravagant things to boast to everyone.>>\n");
        enter_to_continue ();
        break;

    case 3:
        after_choice_clear ();
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ******************************[Noble Hasea]******************************\n");
        printf ("               *****************************************************************************\n\n\n");

        noble_hasea_portrait ();

        printf ("\n\t\t\t\t<<A noble who prioritizes on privateers militia.>>\n");
        enter_to_continue ();
        break;

    case 4:
        after_choice_clear ();
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ******************************[Noble Gilde]******************************\n");
        printf ("               *****************************************************************************\n\n\n");

        noble_gilde_portrait ();

        printf ("\n\t\t\t<<A noble who has a fascination with medicine and medicinal plants>>\n");
        enter_to_continue ();
        break;

    case 5:
        after_choice_clear ();
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ******************************[General Zamoun]******************************\n");
        printf ("               *****************************************************************************\n\n\n");

        general_zamoun_portrait ();

        printf ("\n\t\t<<The military General of the entire kingdom. He hates High Priest Weevil and his antics.>>\n");
        enter_to_continue ();   
        
        break;

    case 6:
        after_choice_clear ();
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ******************************[Equerry Polriso]******************************\n");
        printf ("               *****************************************************************************\n\n\n");

        equerry_polriso_portrait ();

        printf ("\n<<The right hand man of King Faeron. The advisor to certain matter. He cares deeply for King Faeron than Queen Vivi>>\n");
        enter_to_continue ();
        break;

    case 7:
        after_choice_clear ();
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ******************************[High Priest Weevil]******************************\n");
        printf ("               *****************************************************************************\n\n\n");

        high_priest_weevil_portrait ();

        printf ("\n\t\t<<A corrupt high priest of Decronity. A religion high priest Weevil was so fond of.>>\n");
        enter_to_continue ();
        break;

    case 8:
        after_choice_clear ();
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ******************************[Old Man Sedo]******************************\n");
        printf ("               *****************************************************************************\n\n\n");

        old_man_sedo_portrait ();

        printf ("\n\t\t\t<<An nomad old man who cares for the welfare of the entire kingdom.>>\n");
        enter_to_continue ();
        break;

    case 9:
        after_choice_clear ();
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ******************************[Envoy Halbert]******************************\n");
        printf ("               *****************************************************************************\n\n\n");

        envoy_halbert_portrait ();

        printf ("\n\t\t<<An envoy tasked to facilitate all the affairs with other towns and kingdoms.>>\n");
        enter_to_continue ();    
        break;

    default:
        break;
    }

}

void how_to_play ()
{
    after_choice_clear ();
    printf ("------------------------------------------------------------------------------------------------------------\n\n");

    printf ("There are three (3) levels in the game. \n");
    printf ("Each level has 12 turns; each turn is ");
    printf ("equivalent to a month-long time period in a game, ");
    printf ("which equates to 1 year per level. \n");
    printf ("Each turn, as a king, you need to manage ");
    printf ("and facilitate the welfare of your empire.\n");
    printf ("This is what the status bar is for; ");
    printf ("every decision that you make will affect any of the statuses,");
    printf ("negatively or positively.\n");
    printf ("It is up to you to decide what matters more to others in a specific situation.\n");
    printf ("At the 12th turn, no status will be affected by your decision.\nHowever, ");
    printf ("remember that each decision has consequences.\n\n");

    printf ("------------------------------------------------------------------------------------------------------------\n\n");

    
}

//characters
void high_priest_weevil_portrait ()
{

printf ("\n\t\t\t\t\t            .^:\n");             
printf ("\t\t\t\t\t            ;76HGY'\n");          
printf ("\t\t\t\t\t         !7JPGGGG#B5J~\n");        
printf ("\t\t\t\t\t         ~GGGB5Y5G#BBY\n");        
printf ("\t\t\t\t\t         ^GGGB55YPB#BB:\n");       
printf ("\t\t\t\t\t         JBGGBP55PB#B#!\n");       
printf ("\t\t\t\t\t        :BBGGBPP5PB#B&?\n");       
printf ("\t\t\t\t\t       .5#BGGBPP5PB#B#G\n");       
printf ("\t\t\t\t\t     :!YGBBPPGGPPG##B##J:\n");     
printf ("\t\t\t\t\t   .!PGP5GBPPPGPPGB#B&#BP:\n");    
printf ("\t\t\t\t\t  :GBPPGGGBG55G####&&##B#P.\n");   
printf ("\t\t\t\t\t  JBGBGGBBBGPPGBBB#######G.\n");   
printf ("\t\t\t\t\t .PGGBBGBBBGPPPBBGB#####B#?\n");   
printf ("\t\t\t\t\t :GGGBBBBBBBPPPGBGB#####B#B^\n");    

}
void king_faeron_portrait (){
printf ("\n\t\t\t\t\t   :7//!~:.        :^~!~.\n");
printf ("\t\t\t\t\t   .!YB&#BGPJ~:~7JPB&BY~\n");
printf ("\t\t\t\t\t      .7B####BB#B&&#?.\n");   
printf ("\t\t\t\t\t        :5#BBGGB&#5^\n");     
printf ("\t\t\t\t\t         .G#GY?G#~\n");       
printf ("\t\t\t\t\t         .BGGPJG?\n");        
printf ("\t\t\t\t\t         YBGGGPP\n");         
printf ("\t\t\t\t\t     .!YYPPPGB##5:\n");       
printf ("\t\t\t\t\t    ^5G5?7?J5#&#&P~\n");      
printf ("\t\t\t\t\t   ^BG5YJJJ?7?YG#&#^\n");     
printf ("\t\t\t\t\t  .GBGPB##G55Y5GPG&Y\n");     
printf ("\t\t\t\t\t  5#BGBB#&#GGGBBBB#B.\n");    
printf ("\t\t\t\t\t 7&#BB###&#BBG#####&7\n");   
}
void noble_gilde_portrait (){
printf ("\n\t\t\t\t\t ?Y!~~7J?77~.\n");     
printf ("\t\t\t\t\t   JBGPPGGGJP#G:\n");    
printf ("\t\t\t\t\t    .~P&BGGJ7J5:\n");    
printf ("\t\t\t\t\t      ~Y555J??5^\n");    
printf ("\t\t\t\t\t     ~YB#BBGYPP:\n");    
printf ("\t\t\t\t\t    !BBBBBBBGBB!\n");    
printf ("\t\t\t\t\t  .7PJYYPPP5PG##~\n");   
printf ("\t\t\t\t\t^JJY?^^^!J555PB&#P7\n"); 
printf ("\t\t\t\t\t:5PYJ!7!!7JYPP5B##G.\n");
printf ("\t\t\t\t\t 75YYY5P5Y5PPGGGBBP\n"); 
printf ("\t\t\t\t\t.5P55Y5BB5Y5PPBGBBG:\n");
printf ("\t\t\t\t\t YBGP5PB#5555PBGGBB?\n");
}
void noble_hasea_portrait (){
printf ("\n\t\t\t\t\t        :~^.  .^^.\n");  
printf ("\t\t\t\t\t       ..^JGJ755\n");    
printf ("\t\t\t\t\t       .7GBBGG##J\n");   
printf ("\t\t\t\t\t  :!!!?P##BP?JJB&G!.\n");
printf ("\t\t\t\t\t   ^?G####BP?!?PY7!:\n");
printf ("\t\t\t\t\t      .7G#BPGGG!\n");    
printf ("\t\t\t\t\t      :YGGG5P##5\n");    
printf ("\t\t\t\t\t   ~PGGBP555GB##!:\n");  
printf ("\t\t\t\t\t.?GB#BBBGGGGGBBB#BY:\n");
printf ("\t\t\t\t\t ~&#GGB####B#B####^\n"); 
printf ("\t\t\t\t\t !&B#&#B##GBBB###B:\n"); 
printf ("\t\t\t\t\t 7&#&&&&#BGGBB###B^\n");
printf ("\t\t\t\t\t Y&#&&&&#B#BBB#&&#7\n"); 
}
void equerry_polriso_portrait (){
printf ("\n\t\t\t\t\t    .!?JJ?!:\n");      
printf ("\t\t\t\t\t    .~YBPJ??JYY.\n");    
printf ("\t\t\t\t\t   :?~~YBGYJ5YG7\n");    
printf ("\t\t\t\t\t   :Y!JJGG55YYP^\n");    
printf ("\t\t\t\t\t   YBB#GPPPY5G7\n");   
printf ("\t\t\t\t\t   ~GP55PPGB##&B:\n");   
printf ("\t\t\t\t\t:!?5?77^7Y555G#&BJ^\n"); 
printf ("\t\t\t\t\t:PP5J!?~~7?YPPPB##G\n"); 
printf ("\t\t\t\t\t !555Y5P5Y5PPGGGBB5\n"); 
printf ("\t\t\t\t\t YP555PBB5Y5PPBGBBG.\n");
printf ("\t\t\t\t\t YBGP5G##5555PBGBBB7\n");
}
void envoy_halbert_portrait (){
printf ("\n\t\t\t\t\t       .JGBBG5!\n");     
printf ("\t\t\t\t\t       P@@&&#P#?\n");    
printf ("\t\t\t\t\t      !@&#G5YJPB.\n");   
printf ("\t\t\t\t\t     .G&&#Y!!JPB.\n");   
printf ("\t\t\t\t\t    :B&&##G55G&7\n");   
printf ("\t\t\t\t\t    !PB##BGGB##~\n");    
printf ("\t\t\t\t\t   7YJ5PPPGPGBBP7.\n");  
printf ("\t\t\t\t\t  ~5YYP5~?YPGPPG5~\n"); 
printf ("\t\t\t\t\t  ?5YYBGYJPGGGGGG7\n"); 
printf ("\t\t\t\t\t  J5?!G&##BBBBBBG~\n");  
}
void queen_vivi_portrait (){
printf ("\n\t\t\t\t\t ..:^~!!7?!^7?!^.\n");  
printf ("\t\t\t\t\t.!JY5PPP5YJJY55PP5?.\n");
printf ("\t\t\t\t\t   .:^~7GPY??JP?:..\n"); 
printf ("\t\t\t\t\t        ~GP5YJ5:\n");    
printf ("\t\t\t\t\t       .JP5PYJJ\n");     
printf ("\t\t\t\t\t      ~YPP5P55Y.\n");    
printf ("\t\t\t\t\t :~!?5#5J555PGY:\n");    
printf ("\t\t\t\t\t ~YPY?J5PPGGGBG5!\n");   
printf ("\t\t\t\t\t  7#5YY77?Y5Y5PGG.\n");  
printf ("\t\t\t\t\t  7BYGBJ~7J?!^!JP.\n");  
printf ("\t\t\t\t\t  ?#PGBY??5P577JG7\n");  
printf ("\t\t\t\t\t  Y#B5BY?JGPGJ?YPB~\n"); 
}
void old_man_sedo_portrait (){
printf ("\n\t\t\t\t\t       .7Y55YY?.\n");    
printf ("\t\t\t\t\t       ?GPYYPPPY.\n");   
printf ("\t\t\t\t\t       .Y5555Y5P:\n");   
printf ("\t\t\t\t\t     .!PG5555GG^\n");   
printf ("\t\t\t\t\t   :7JPBGPPPGBBB^\n");   
printf ("\t\t\t\t\t !PBBB5J?JYPGBB#BP?.\n");
printf ("\t\t\t\t\t?#BPY?7!?JY5PB#####7\n");
printf ("\t\t\t\t\t7#PYJJ555PGGPG#####7\n");
printf ("\t\t\t\t\t5#G5PBGPGGBBGG#####5\n");
}
void general_zamoun_portrait (){
printf ("\n\t\t\t\t\t ~:   .:~!J~\n");       
printf ("\t\t\t\t\t  GP   ^5J7YP7\n");      
printf ("\t\t\t\t\t .BP   :Y57?PP\n");      
printf ("\t\t\t\t\t :#P    7#G5G?\n");      
printf ("\t\t\t\t\t!J#GP7^YBB#B#~\n");      
printf ("\t\t\t\t\t7##B#BGGBBP##5J^\n");    
printf ("\t\t\t\t\t!G55#BP77?PGGB&&P^\n");  
printf ("\t\t\t\t\t:5J7P##P!7YGGB##&G\n");  
printf ("\t\t\t\t\t ?GYP&#B555PBB####:\n"); 
printf ("\t\t\t\t\t 7BPP#BBGBPGGB##B&?\n"); 
printf ("\t\t\t\t\t .5BG###&#GB#####&P\n"); 
printf ("\t\t\t\t\t  5BGB&&&##&&&&&###^\n");
printf ("\t\t\t\t\t  .YBB#&&#&&&&&&##&7\n");
}
void voice_universe (){
printf ("\n\t\t\t\t\t          .:;;:.\n");          
printf ("\t\t\t\t\t         ..!Y~~^\n");         
printf ("\t\t\t\t\t         ..J55^~:\n");        
printf ("\t\t\t\t\t      ... :!7YY:~^\n");       
printf ("\t\t\t\t\t   :^!!:..:^^!5~~?~:.\n");    
printf ("\t\t\t\t\t   .  ~!:.^~~!5?77:\n");      
printf ("\t\t\t\t\t      .:~^~?7?5Y!.\n");       
printf ("\t\t\t\t\t       :^^Y5JY55.:~::\n");    
printf ("\t\t\t\t\t    ~!~777J55G5J?7!557\n");   
printf ("\t\t\t\t\t    7Y777?JPGGGYG?7~Y?:\n");  
printf ("\t\t\t\t\t   .YJ: !7YGPPB?~7 ^J5^\n");  
printf ("\t\t\t\t\t  ~G?. ~^~^?#J~^^.~JY\n");   
printf ("\t\t\t\t\t   .YJ^. :::YP^..  :JY.\n");  
printf ("\t\t\t\t\t    ^Y^:  .?!.!    :Y?.\n");  
printf ("\t\t\t\t\t     !J^  ^^  .    ^5~\n");   
printf ("\t\t\t\t\t      ^7!          :Y:\n");   
printf ("\t\t\t\t\t        :.          ^:\n"); 
}

// game start
void lead_king ()
{
printf ("\n\t\t\t\t\t              .              .^.\n");   
printf ("\t\t\t\t\t                !J7:          :^:\n");     
printf ("\t\t\t\t\t              .:?YJ^  ....::~^.\n");       
printf ("\t\t\t\t\t             ^JGPPGP7~~~!^~!~.\n");        
printf ("\t\t\t\t\t            :775PPPJ:.\n");                
printf ("\t\t\t\t\t            ^J.7Y5Y!\n");                  
printf ("\t\t\t\t\t            .!!Y55P5.\n");                 
printf ("\t\t\t\t\t              ?Y5555:\n");                 
printf ("\t\t\t\t\t             .J?!!?7\n");                  
printf ("\t\t\t\t\t             ^B~  JP\n");                  
printf ("\t\t\t\t\t             ?Y   !P\n");                  
printf ("\t\t\t\t\t            ~5!.::~Y~\n");                 
printf ("\t\t\t\t\t       ....::::^^::::................\n");
}
void king_standing (){
printf ("\n\t\t\t\t\t            ::.\n");              
printf ("\t\t\t\t\t            ^7~:\n");              
printf ("\t\t\t\t\t           .777!.\n");             
printf ("\t\t\t\t\t         ~J55Y?77?7:::\n");        
printf ("\t\t\t\t\t       .JP5GP555555Y?~\n");        
printf ("\t\t\t\t\t       :7!!5PP5Y5Y!~~^.\n");       
printf ("\t\t\t\t\t         JJY55Y5Y. ::\n");        
printf ("\t\t\t\t\t         ^BGP55555^ ::\n");        
printf ("\t\t\t\t\t         JB55YY5557 ::\n");        
printf ("\t\t\t\t\t        ^BB555YYYPP..:\n");        
printf ("\t\t\t\t\t       :JJYY?77YYJ?~..\n");        
printf ("\t\t\t\t\t          ..   ...\n");        
}
void king_bestowing (){
printf ("\n\t\t\t\t\t       .^^.\n");                  
printf ("\t\t\t\t\t        !J?\n");                   
printf ("\t\t\t\t\t     :!JGGY.\n");                  
printf ("\t\t\t\t\t    ^:!?J~.\n");                  
printf ("\t\t\t\t\t     :?..:.     JY?\n");           
printf ("\t\t\t\t\t    :!?!~^^     JPPY?:\n");        
printf ("\t\t\t\t\t    JB!!^.::...?555PGJ\n");        
printf ("\t\t\t\t\t   :G#PYYY?:   JB##BB#:\n");       
printf ("\t\t\t\t\t   ?B#GP#GJ  .7PBBBB##7\n");       
printf ("\t\t\t\t\t   .:~PJ:YY  :#BB###B#G.\n");      
printf ("\t\t\t\t\t      G! ~G.  5G:Y###B#P^\n");     
printf ("\t\t\t\t\t      Y7 :5!. Y#.YBBB####J^.\n");  
printf ("\t\t\t\t\t             .^: .::^~?JJ?!:\n"); 
}
void throne (){
printf ("\n\t\t\t\t\t        ...^:^...\n");        
printf ("\t\t\t\t\t        .!J???J!.\n");        
printf ("\t\t\t\t\t        .JBBBBBJ.\n");        
printf ("\t\t\t\t\t         ?GGGGG?\n");         
printf ("\t\t\t\t\t       .^JBGGGBJ^.\n");       
printf ("\t\t\t\t\t     .JJPGGGGGGGPJJ.\n");     
printf ("\t\t\t\t\t      ~JYGPPPPPGYJ~\n");      
printf ("\t\t\t\t\t       .JGGGGGGGJ.\n");       
printf ("\t\t\t\t\t       :!7?777?7!:\n");       
printf ("\t\t\t\t\t       .:       :.\n");     
}
void castle ()
{
printf ("\n\t\t\t\t\t         :G^\n");                  
printf ("\t\t\t\t\t         7&7\n");                  
printf ("\t\t\t\t\t         J@Y\n");                  
printf ("\t\t\t\t\t       :.5@5 .!^\n");              
printf ("\t\t\t\t\t     ^!YG#&#7P&B^.^!     !!\n");   
printf ("\t\t\t\t\t  ?. ^#&&&&&&&&&#B#7    :BB:\n");  
printf ("\t\t\t\t\t 7&J.^#&&&&&&&&&&&&BYJ?7P&&!\n");  
printf ("\t\t\t\t\t^#&&#B#&&&&&&&&&&&&&&&&&&&&!\n");  
printf ("\t\t\t\t\t:#&&&&&&&&&&&&&&&&&&&&&&&&&G\n");  
printf ("\t\t\t\t\tJ&&&&&&&&&&&&&&&&&&&&&&&&&&#P!\n");
}

//game lvl1
void suspicion (){
printf ("\n\t\t\t\t\t@@@@@@@#PY?777?YP#@@@@@@@\n");
printf ("\t\t\t\t\t@@@@#Y~.:~!!!!!!~^~Y&@@@@\n");
printf ("\t\t\t\t\t@@@J. !J7~?5P57^~?J^.J@@@\n");
printf ("\t\t\t\t\t@&~ :P7  P@@@@@G. .JY ~&@\n");
printf ("\t\t\t\t\t@7  G~ ~?@G#@#G@J?! 75 ?@\n");
printf ("\t\t\t\t\t@^ ^B !57@B#@#B@?.B. G~.&\n");
printf ("\t\t\t\t\t@! .G^.5.Y@@@@@P  P: P!.&\n");
printf ("\t\t\t\t\t@#. ~?^YGB@@@@@BGPJ ^G ?@\n");
printf ("\t\t\t\t\t@@B~ ?@@@@@@@@@@@@@P~^!@@\n");
printf ("\t\t\t\t\t@@@&^#@@@@@@@@@@@@@@^J@@@\n");
printf ("\t\t\t\t\t@@@#^@@@@@@@@@@@@@@@~G@@@\n");
printf ("\t\t\t\t\t@@@#Y@@@@@@@@@@@@@@@Y#@@@\n");
}

//game lvl2
void explain_yourselves (){
printf ("\n\t\t\t\t\t    ..  ..\n");                
printf ("\t\t\t\t\t   .:  !7:\n");               
printf ("\t\t\t\t\t   :7^!77~:\n");              
printf ("\t\t\t\t\t   ^GG5Y?JJ~.   .~:\n");      
printf ("\t\t\t\t\t   ~PGYY?5GGY:. ^?J:\n");     
printf ("\t\t\t\t\t  .YG5JJJY5YY~?^:!JY^:\n");   
printf ("\t\t\t\t\t  :5P5YJJYJ?5GP55YPJY?.\n");  
printf ("\t\t\t\t\t   ?JY5JJJY5YPJ777??J.\n");   
printf ("\t\t\t\t\t~7!JJGP5P55P5P5????YY~^:.\n");
printf ("\t\t\t\t\t:^.::^?YYYYYYY5J!?77777~:\n");
printf ("\t\t\t\t\t      ...     .\n");          
}
void burn_house (){
printf ("\n\t\t\t\t\t                ^  :5:\n");  
printf ("\t\t\t\t\t            .    B7 P@~\n"); 
printf ("\t\t\t\t\t          7G#5^  ^#:?@&!\n"); 
printf ("\t\t\t\t\t       .?#@@&@@P~ ^. 7@@!\n");
printf ("\t\t\t\t\t     .?#@@P~.7B@B^JG. Y@7\n");
printf ("\t\t\t\t\t   :J#@@5^     !.P@B  77\n"); 
printf ("\t\t\t\t\t :Y&@@5:         #@@J\n");    
printf ("\t\t\t\t\t!@@&&@^          !@@@B^\n");  
printf ("\t\t\t\t\t.!!:B@^  :????7   ^G@@&^\n"); 
printf ("\t\t\t\t\t    B@^  ^@@@@B   ..P@@?\n"); 
printf ("\t\t\t\t\t   B@!..!@@@@B:..Y^!@#:\n"); 
printf ("\t\t\t\t\t    G&BBBB&&#&#BB##:?5:\n");  
}
void kneeling_alibi (){
printf ("\n\t\t\t\t\t                :!7^:\n");     
printf ("\t\t\t\t\t             .~JG57~.\n");    
printf ("\t\t\t\t\t            :^::?G5?^\n");    
printf ("\t\t\t\t\t          ^!?7?7?B5PYJ!.\n"); 
printf ("\t\t\t\t\t         ^!:~?GPJYG5YJ7!.\n");
printf ("\t\t\t\t\t      .^^~^!PBPGP5G:!55!\n"); 
printf ("\t\t\t\t\t     ~J5~~5GPPPBYPJ   ^^\n"); 
printf ("\t\t\t\t\t   ~YJ?J?7?5PPYJ^^.::\n");    
printf ("\t\t\t\t\t .!5BBJ~~~?Y?5BGY?YGPJ:\n");  
printf ("\t\t\t\t\t.!7?J?7:^~!??7YJY555Y?:\n");           
}
void execution1 (){
printf ("\n\t\t\t\t\t            ::\n");
printf ("\t\t\t\t\t        :~7JJY?\n");
printf ("\t\t\t\t\t        7G555?:\n");
printf ("\t\t\t\t\t        !Y~!Y7:\n");
printf ("\t\t\t\t\t        !J..Y?\n");
printf ("\t\t\t\t\t        !J.:Y?\n");
printf ("\t\t\t\t\t        !J.:J?\n");
printf ("\t\t\t\t\t        !J.:J7\n");
printf ("\t\t\t\t\t        !J..J7\n");
printf ("\t\t\t\t\t        !Y~~Y?      :::..\n");
printf ("\t\t\t\t\t        ~57J5J:^^^^~?JY^.\n");
printf ("\t\t\t\t\t..~7?JYJY5YJGGG55YYP!~~:.\n");
printf ("\t\t\t\t\t..!5YYP555J5YP5Y5?!5!!~..\n");
printf ("\t\t\t\t\t..^!7?JJY5GPYBPPGPP5PPY:.\n");
printf ("\t\t\t\t\t.....:::^^^^^^:::::......\n");
}
void execution2 (){
printf ("\n\t\t\t\t\t .:.:..:..........^BB^.\n"); 
printf ("\t\t\t\t\t .PBBBBBBBBBBBBB#&#B@@B5.\n");
printf ("\t\t\t\t\t  ....?7........~P@&@&^.\n"); 
printf ("\t\t\t\t\t      7!          ^5@&.\n");  
printf ("\t\t\t\t\t      7!           :@&:\n");  
printf ("\t\t\t\t\t   .YPB!           ^@&:\n");  
printf ("\t\t\t\t\t   ^&@@5!^         ^@&:\n");  
printf ("\t\t\t\t\t   ?&&&@@@!        ^@&:\n");  
printf ("\t\t\t\t\t   Y&@@@@&?        ^@&:\n");  
printf ("\t\t\t\t\t   .P@@@@Y.        ^@&:\n");  
printf ("\t\t\t\t\t    ?@GB@~         ^@&:\n");  
printf ("\t\t\t\t\t    ?@PB@!         ^@&:\n");  
printf ("\t\t\t\t\t    ?@GB@!         ^@&:\n");  
printf ("\t\t\t\t\t    7@5P&~         ^@&:\n");  
printf ("\t\t\t\t\t     . ..          ^@&:\n");  
printf ("\t\t\t\t\t                   ^@&:\n");  
printf ("\t\t\t\t\t                   :GG.\n");  
}

//game lvl3
void javorian_fox ()
{
printf ("\n\t\t\t\t\t      .\n");           
printf ("\t\t\t\t\t             .\n");           
printf ("\t\t\t\t\t      ..   :^^~~~^^^^^^.\n"); 
printf ("\t\t\t\t\t  .. ....:?Y55Y5PP55P5Y?\n"); 
printf ("\t\t\t\t\t    ......^7JYJJ????J7~.\n"); 
printf ("\t\t\t\t\t             .     :\n");     
printf ("\t\t\t\t\t           .      .:\n");     
printf ("\t\t\t\t\t           .\n");             
}
void from_above1 (){
printf ("\n\t\t\t\t\t        ..:^::.\n");         
printf ("\t\t\t\t\t ^!!!7777?JYJJ????7!~~^:\n"); 
printf ("\t\t\t\t\t ^!!7??7J5P555YYJ?7~^~~:\n"); 
printf ("\t\t\t\t\t.       .^^^^^^^.\n");        
}
void from_above2(){
printf ("\n\t\t\t\t\t             ..\n");       
printf ("\t\t\t\t\t     ..... .:!YGBBG5!.\n");   
printf ("\t\t\t\t\t  .:......:^~Y#&&#&&#G.\n");  
printf ("\t\t\t\t\t          :~ ^#&&B#P55^:\n"); 
printf ("\t\t\t\t\t       .:^^.?G&@#BBGP55Y:\n");
printf ("\t\t\t\t\t.:^~~~~^^!JG&#B&&GG^\n");     
printf ("\t\t\t\t\t~5?!!!7J55J~:5Y7Y#G7\n");     
printf ("\t\t\t\t\t :~777!^.   .^7~:~~^...\n");  
}
void slugs1 (){
printf ("\n\t\t\t\t\t            .\n");            
printf ("\t\t\t\t\t     .      .^^~7!^:^\n");    
printf ("\t\t\t\t\t  :!^^!J5P!.:J#&#&#G!^:\n");  
printf ("\t\t\t\t\t  .J#BB#G5PG&@@&&&&&#Y.\n");  
printf ("\t\t\t\t\t    ^!YY7:^5Y#&&#&&##B:\n");  
printf ("\t\t\t\t\t            ^&&&&@@GGBJ\n");  
printf ("\t\t\t\t\t            ^B@Y~#@P .~:\n"); 
printf ("\t\t\t\t\t             !?: J@P\n");     
printf ("\t\t\t\t\t                  :^\n");    
}
void slugs2 (){
printf ("\n\t\t\t\t\t .:        .:!~^.\n");        
printf ("\t\t\t\t\t        .7GB7^~.\n");         
printf ("\t\t\t\t\t       JB#&#BB?:\n");         
printf ("\t\t\t\t\t     !Y#@&&#BBG?    .!J~\n"); 
printf ("\t\t\t\t\t    ~B!P@@&###&#?!?5GP!..\n");
printf ("\t\t\t\t\t :^7PPYB##&#&#&&@BJ~~!J?~\n");
printf ("\t\t\t\t\tJ!:.PP!^^??B?7!J#^:~:   .\n");
printf ("\t\t\t\t\t:. .P?  ~!.5~7^ ~5:..\n");    
printf ("\t\t\t\t\t   !7.  .  J5^   !?^\n");     
printf ("\t\t\t\t\t            :.\n");      
}
void slugs3 (){
printf ("\n\t\t\t\t\t                 :7:\n");                 
printf ("\t\t\t\t\t                 ^Y7\n");     
printf ("\t\t\t\t\t          J5^  :7~\n");       
printf ("\t\t\t\t\t         ^GY7^?JJ.\n");       
printf ("\t\t\t\t\t        7P5JJJ5G#7\n");       
printf ("\t\t\t\t\t       !PBBPJ7BBB~\n");       
printf ("\t\t\t\t\t       ~5GY5BJPBB:\n");       
printf ("\t\t\t\t\t       ~?YGBBP7BP.\n");       
printf ("\t\t\t\t\t     ^7^!P!:~PJYY\n");        
printf ("\t\t\t\t\t    :!. PY   P? .\n");        
printf ("\t\t\t\t\t       7P.  .G^\n");          
printf ("\t\t\t\t\t       Y^   .J.\n");        
}
void slugs4 (){
printf ("\n\t\t\t\t\t          :~\n");              
printf ("\t\t\t\t\t          ^7^\n");            
printf ("\t\t\t\t\t         :  ~7:.\n");         
printf ("\t\t\t\t\t       :?YJ5~.Y?\n");        
printf ("\t\t\t\t\t       :~.Y#Y??..^77!:\n");   
printf ("\t\t\t\t\t        .J5JYJ?7GGB557^.\n"); 
printf ("\t\t\t\t\t   .::  :P:  ^G5P5?JJ.\n");   
printf ("\t\t\t\t\t  :PG?^P7^?!!PBBG5:..\n");    
printf ("\t\t\t\t\t  ^B5 ~#P~!YYPPBY7?J \n");    
printf ("\t\t\t\t\t .^~. ?GYJ5!.  JY .J.\n");    
printf ("\t\t\t\t\t     .5? 7Y:    J!\n");       
printf ("\t\t\t\t\t      .?: .?:   .?.\n");    
}
void slugs_battle (){
printf ("\n\t\t\t\t\t        ...\n");                      
printf ("\t\t\t\t\t    .....::::.       .\n");        
printf ("\t\t\t\t\t       ..   .:^^.    GJ\n");     
printf ("\t\t\t\t\t      5@&?     .^^.  ?#7~^7PP!\n");
printf ("\t\t\t\t\t    !?555~       .~^ :~!YB#@@P\n");
printf ("\t\t\t\t\t   J@#B!           ~^ :JPB##GJ\n");
printf ("\t\t\t\t\t  :@@#YBG?.      .^!Y5G#&@@@!\n"); 
printf ("\t\t\t\t\t  .G@&P555PJ7^: !BBG?Y!?B@B7\n");  
printf ("\t\t\t\t\t   7@P7P@Y ^~7JY557^  ^&&!\n");    
printf ("\t\t\t\t\t:~JB@Y  G@7     :~?Y7. Y@J\n");    
printf ("\t\t\t\t\tPB57:   :BP            .PB:\n");   
}
