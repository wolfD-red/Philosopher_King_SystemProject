#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu_panel ();
void menu_panel_connector ();
void characters ();
void how_to_play ();
void achievements (/*parameter*/);
void save_progress (/*parameter*/);

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

void game_story_connector (int lvl2_story_choice_connector, int lvl3_story_choice_connector1, int lvl3_story_choice_connector2, int lvl2_story_choice, int noblegilde_path_choice, int noblehasea_path_choice, int lvl3_lchoice);
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

void (*event[25])() = {event1, event2, event3, event4, event5, event6, event7, event8, event9, event10, event11, event12, event13, event14, event15, event16, event17, event18, event19, event20, event21, event22, event23, event24, event25};

int player[4] = {50, 50, 50, 50};
char *stat[4] = {"Gold", "Food", "Happiness", "Military"};
int result[2];
int checkRes;


int main (){

    srand(time(NULL));
    /*for function "connector"*/
    int lvl2_story_choice, lvl2_story_choice2, lvl2_story_choice_connector;
    int lvl3_story_choice_connector1, lvl3_story_choice_connector2, lvl3_lchoice;
    int noblehasea_path_choice, noblegilde_path_choice;
    
    printf ("\n\n\n                         ############################################################");
    printf ("\n                         ###################PHILOSOPHER KING#########################\n");
    printf ("                         ############################################################\n\n\n");


    game_story_connector (lvl2_story_choice2, lvl3_story_choice_connector1, lvl3_story_choice_connector2, lvl2_story_choice, noblegilde_path_choice, noblehasea_path_choice, lvl3_lchoice);

    return 0;
}

void menu_panel_connector ()
{
    int menu_panel_choice;

        while (1)
        {
            printf ("\n\n\n------------------------------------------------------------------------------------------------------------\n\n");

            printf ("\n\n(1) Menu Panel OR (2) Continue\n");
            printf ("Choice: ");

            if (scanf ("%d", &menu_panel_choice) != 1)
            {
                while (getchar() != '\n');
                continue;
            }
            if (menu_panel_choice != 1 && menu_panel_choice != 2)
            {
                continue;
            }

            switch (menu_panel_choice)
            {
                case 1:
                    menu_panel ();
                    break;
    
                case 2:

                    break;
    
                default:
                    break;
                
            }
            if (menu_panel_choice == 1 || menu_panel_choice == 2)
            {
            break;
            }
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
        printf ("(3) Achievements\n");
        printf ("(4) Back\n");
        printf ("(5) Exit\n");
        printf ("Choice:");
        scanf ("%d", &menu_choice);

        switch (menu_choice)
        {
            case 1:
                how_to_play ();
                break;
            case 2:
                characters ();
                break;
            case 3:
                achievements ();
                break;
            case 4:
                menu_panel_connector ();
                break;
            case 5:
                do 
                { 
                    printf ("\n\nAre you sure you want to quit the game?\n\n");
                    printf ("(1)Yes \n(2)No\n");
                    printf ("Choice:");
                    scanf ("%d", &quit_choice);

                
                    if (quit_choice == 1)
                    {
                        exit (EXIT_SUCCESS);
                    }
                    else if (quit_choice == 2)
                    {
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

            if (menu_choice == 4)
            {
                break;
            }
    } while (menu_choice != 5);

}

void game_story_connector (int lvl2_story_choice_connector, int lvl3_story_choice_connector1, int lvl3_story_choice_connector2, int lvl2_story_choice, int noblegilde_path_choice, int noblehasea_path_choice, int lvl3_lchoice)
{
    game_start ();
    game_lvl1 ();
    scanf ("%d", &lvl2_story_choice_connector);
    menu_panel_connector ();
    game_lvl2 (lvl2_story_choice_connector, lvl3_story_choice_connector1, lvl3_story_choice_connector2, lvl2_story_choice);
    scanf ("%d", &lvl3_lchoice);
    if (lvl3_lchoice == 1) //find
    {
        connecter_2_3_1 ();

        scanf ("%d", &lvl3_story_choice_connector1);
    }
    else if (lvl3_lchoice == 2) //no find
    {
        connector_2_3_2 ();

        scanf ("%d", &lvl3_story_choice_connector2);
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
        printf("Your %s has reached 0.\n", stat[result[1]]);
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
            printf ("EMPIRE STATUS\n\n");
            printf("%s: %d\n", stat[i], player[i]);
        }
    }
  
}

void randomEvent (){
    int random_event = rand() % 25;
    event[random_event]();
}

void event1()
{
  printf ("\n\n\n               *****************************************************************************\n");
  printf ("               ******************************[Old Man Sedo]******************************\n");
  printf ("               *****************************************************************************\n\n\n");
  printf ("\n\n\n.......................................................................................................\n");
  printf("The people are hungry and cold, you should prioritize their welfare.");
  printf ("\n.......................................................................................................\n");
  printf("(1) Help them.    OR    (2) Ignore their pleas. \n");
  printf("Choice: ");
  printf ("\n.......................................................................................................\n\n\n");
  int eventChoice;
  scanf("%d", &eventChoice);
  if (eventChoice == 1)
  {
    //Gold is 0, Food is 1, Happiness is 2, Military is 3
    player[0] -= 5;
    player[1] += 10;
    player[2] += 5;

  } else if (eventChoice == 2){
    
    player[0] += 5;
    player[1] -= 10;
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
  printf ("\n\n\n.......................................................................................................\n");
  printf("We need more funding on our militia.\n");
  printf ("\n.......................................................................................................\n");
  printf("(1) You can figure it out yourself.    OR    (2) You may have it. \n");
  printf("Choice: ");
  printf ("\n.......................................................................................................\n\n\n");
  int eventChoice;
  scanf("%d", &eventChoice);
  if (eventChoice == 1)
  {
    //Gold is 0, Food is 1, Happiness is 2, Military is 3
    player[0] += 5;
    player[1] += 10;
    player[3] -= 10;

  } else if (eventChoice == 2){

    player[0] -= 5;
    player[1] -= 10;
    player[3] -= 10;

  }
  statChecker();
  statDisp(result);
}
void event3()
{
  printf ("\n\n\n               *****************************************************************************\n");
  printf ("               ******************************[Equerry Polriso]******************************\n");
  printf ("               *****************************************************************************\n\n\n");
  printf ("\n\n\n.......................................................................................................\n");
  printf("Our current laws are old, should we update them?\n");
  printf ("\n.......................................................................................................\n");
  printf("(1) It should be okay.    OR    (2)Update it. \n");
  printf("Choice: ");
  printf ("\n.......................................................................................................\n\n\n");

  int eventChoice;
  scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("I have a proposal. Let's plant more trees.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) It's a waste of funds    OR    (2) That's a good idea. \n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");

    int eventChoice;
    scanf("%d", &eventChoice);
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
      printf ("\n\n\n.......................................................................................................\n");
      printf("The church needs more funding.\n");
      printf ("\n.......................................................................................................\n");
      printf("(1) The church will suffice.    OR    (2) I do not believe in deities.\n");
      printf("Choice: ");
      printf ("\n.......................................................................................................\n\n\n");
      int eventChoice;
      scanf("%d", &eventChoice);
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
  printf ("\n\n\n.......................................................................................................\n");
  printf("Our region from far East are having some radical issues. Should we send our armies?\n");
  printf ("\n.......................................................................................................\n");
  printf("(1) Crush those traitors!    OR    (2) It will fizzle out eventually. \n");
  printf("Choice: ");
  printf ("\n.......................................................................................................\n\n\n");

      int eventChoice;
      scanf("%d", &eventChoice);
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
printf ("\n\n\n.......................................................................................................\n");
printf("The farmers are having a hard time yielding crops. They need your support.\n");
printf ("\n.......................................................................................................\n");
      printf("(1) They will figure it out on their own.     OR    (2) Help the poor farmers. \n");
      printf("Choice: ");
      printf ("\n.......................................................................................................\n\n\n");
      int eventChoice;
      scanf("%d", &eventChoice);
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
printf ("\n\n\n.......................................................................................................\n");
printf("Persuade the people to go to church more.\n");
printf ("\n.......................................................................................................\n");
    printf("(1) Such a waste of time.    OR    (2) I will. \n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");

    int eventChoice;
    scanf("%d", &eventChoice);
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
printf ("\n\n\n.......................................................................................................\n");
    printf("Give the church more power in political affairs, I will make sure the people will obey you.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Get out!    OR    (2) That's a deal. \n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");
    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("Diseases are spreading in the West regions of our empire due to unmanaged sanitation.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Help the people.    OR    (2) It does not need immediate response. \n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");

    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("Refugees are pouring in from the South region of our empire, should we help them?\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Yes. OR    (2) Leave it. \n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");

    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("Barbarians are causing troubles in the West regions of our empire, what should we do?\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) It's a waste of funds    OR    (2) That's a good idea. \n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");

    int eventChoice;
    scanf("%d", &eventChoice);
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
void event13()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Queen Vivi]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    printf ("\n\n\n.......................................................................................................\n");
    printf("My king, we should host a festival for our people.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) There are more important things to do than a festival.    OR    (2) Let's make it grandiose. \n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");
    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("We got a plentiful harvest this season. What should we do?\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Sell it for money. OR (2) Store it for winter.\n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");

    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("               ******************************[Queen Vivi]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    printf ("\n\n\n.......................................................................................................\n");
    printf("My king, I want a diamond necklace\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) It will be a waste of gold. OR (2) Say no more. \n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");
    int eventChoice;
    scanf("%d", &eventChoice);
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[1] += 5;
      player[3] += 10;

    } else if (eventChoice == 2){

      player[1] -= 15;
      player[3] -= 10;

    }
    statChecker();
    statDisp(result);
}
void event16()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Old Man Sedo]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    printf ("\n\n\n.......................................................................................................\n");
    printf("The East region of the empire is suffering from famine.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Take action. OR (2) They will figure it out.\n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");
    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("I need more military support in my manor, Your Highness\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) General Zamoun! OR (2) It's already enough for you.\n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");
    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("I request funds to expand my own militia.\n");
    printf ("\n.......................................................................................................\n");

    printf("(1) You may have it. OR (2) There's no need.\n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");

    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("I need more herbs and crops to further my alchemy, Your Highness.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) That's a good endeavor.  OR  (2) It's a waste of resources.\n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");
    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("I request funds to improve my garden.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1)You may have it. OR (2) It's a waste of resources. \n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");

    int eventChoice;
    scanf("%d", &eventChoice);
    if (eventChoice == 1)
    {
      //Gold is 0, Food is 1, Happiness is 2, Military is 3
      player[0] -= 15;
      

    } else if (eventChoice == 2){

      player[0] -= 10;
      

    }
    statChecker();
    statDisp(result);
}
void event21()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[General Zamoun]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    printf ("\n\n\n.......................................................................................................\n");
    printf("Let's host a banquet in the barracks. It will boost the morale of our army.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) They can wait. OR (2) Let's raise their morale.\n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");

    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("The armory needs improvements, the weapons and armors are old.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) The armory can still sustain itself. OR (2) Make it a priority.\n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");

    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("The training grounds are outdated. We should make it better to boost the strength of our militia.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) It's still working, no need. OR (2) Make the training grounds better.\n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");
    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("Some small town in the outskirt of our empire want to be integrated to our empire. What should we do?\n");
    printf ("\n.......................................................................................................\n");
    printf("(3) Welcome them. OR (2) No thanks.\n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");
    int eventChoice;
    scanf("%d", &eventChoice);
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
    printf ("\n\n\n.......................................................................................................\n");
    printf("A small town in the outskirt of our wants to ask for help to fend off barbarians in their land. In exchange, they will offer gold and food.\n");
    printf ("\n.......................................................................................................\n");
    printf("(1) Let them suffer. OR (2) Provide military support on their land.\n");
    printf("Choice: ");
    printf ("\n.......................................................................................................\n\n\n");
    int eventChoice;
    scanf("%d", &eventChoice);
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

    printf ("\n\n\n                         ############################################################");
    printf ("\n                         ######################GAME OVER#############################\n");
    printf ("                         ############################################################\n\n\n");

    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");

    printf ("<><><Your empire was poor. The public started a rebellion and sold off your head as a trophy to rich nobles.><><>\n\n\n");
    exit(0);
}

void food_0 () //if food reach 0
{
    printf ("\n\n\n.......................................................................................................\n\n\n");    

    printf ("\n\n\n                         ############################################################");
    printf ("\n                         ######################GAME OVER#############################\n");
    printf ("                         ############################################################\n\n\n");

    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Equerry Polriso]******************************\n");
    printf ("               *****************************************************************************\n\n\n");


    printf ("Your highness, our people are starving and diseases are spreading.\n");
    printf ("We can't support our empire anymore, many are dying and our food source was scarce.\n\n");

    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");

    printf ("          <><><><><><><><><><><><><The empire collapsed and you starve to death.><><><><><><><><><><><><>\n\n\n");
    exit(0);
}

void militia_0 () // if militia reach 0
{
    printf ("\n\n\n.......................................................................................................\n\n\n");    

    printf ("\n\n\n                         ############################################################");
    printf ("\n                         ######################GAME OVER#############################\n");
    printf ("                         ############################################################\n\n\n");

    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");

    printf ("<><><The empire became weak. This lead to the rise of other factions with the main goal to dethrone you.><><>\n");
    printf ("<><><><><><><><><><><><Stronger enemy conquer the empire and you are murdered brutally.><><><><><><><><><><><>\n\n\n");
    exit(0);
}
void happiness_0 () // if happiness reach 0
{
    printf ("\n\n\n.......................................................................................................\n\n\n");    

    printf ("\n\n\n                         ############################################################");
    printf ("\n                         ######################GAME OVER#############################\n");
    printf ("                         ############################################################\n\n\n");

    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");


    printf ("<><><><><><><><><><><><><><The people was unhappy and discontent with your reign.><><><><><><><><><><><><><>\n");
    printf ("<><><><><><><><><><><><><They started a dethronement leaded by High Priest Weevil.><><><><><><><><><><><><>\n\n");
    printf ("<><><><><><><><><><><><><><><><><><><><><You are executed in public.><><><><><><><><><><><><><><><><><><><><>\n\n\n");
    exit(0);
}

void game_start ()
{
    int gs_choice;
    int gs_choice2;
    int gs_choice3;

    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");
    printf ("\nThere was once a man; ");
    printf ("\na man born in a forgotten time, created by a force of unknown origin.\n");
    printf ("He would cross the ages knowing his main purpose: ");
    printf ("Lead humanity as the greatest empire in the cosmos.\n\n\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");
    do 
    {
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ***************************[Voice of the Universe]***************************\n");
        printf ("               *****************************************************************************\n\n\n");

        printf ("\n\n.......................................................................................................\n\n");    
        printf ("\nAre you ready?\n");
        printf ("\n(1) Yes OR (2) No\n");
        printf ("Choice: ");
        scanf ("%d", &gs_choice);

        if (gs_choice == 1)
        {
            printf ("\n\n.......................................................................................................\n\n");    
            printf ("\nGreat! Lead this civilization just like you did with many others.\n\n");
            break;
        }
        else if (gs_choice == 2)
        {
            do
            {
                printf ("\n\n.......................................................................................................\n\n");    
                printf ("\nWhy? You already did this before.\n");
                printf ("\n(1) Before? OR (2) Did What?\n");
                printf ("Choice: ");
                scanf ("%d", &gs_choice2);

                if (gs_choice2 == 1)
                {
                    printf ("\n\n.......................................................................................................\n\n");    
                    printf ("\nYes! Just lead this civilization just like you did with the others.\n");
                    printf ("Just make sure you keep in check of the status of your empire so you don't die.\n");
                    break;
                }
                else if (gs_choice2 == 2)
                {
                    printf ("\n\n.......................................................................................................\n\n");    
                    printf ("\nLeading a civilization! Just lead them and you'll find out.\n");
                    printf ("Just make sure you keep in check of the status of your empire so you don't die.\n");
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
        printf ("\n\n.......................................................................................................\n\n");    

        printf ("\nYou will wake up in 14th Century as a King of a unified world under one rule.\n");
        printf ("You manage to conquer the world which conquerors like Julius Caesar, Alexander the Great and Genghis Khan cannot do.\n");
        printf ("Now, the only task left is to manage your empire well and fend off any humans who tries to cut off your reign. ...\n\n");
        printf ("\n\n                                          OR is it only humans?\n\n");

        printf ("\n\n.......................................................................................................\n\n");    

        printf ("(1) What do you mean? OR (2) I will\n");
        printf ("Choice: ");
        scanf ("%d", &gs_choice3);

        if (gs_choice3 == 1 || gs_choice3 == 2)
        {
        printf ("\n\n\n------------------------------------------------------------------------------------------------------------\n\n");
        printf ("The Voice of the Universe disappeared and it went silent for a while. \n");
        printf ("Thereafter, you woke up in your throne.\n\n");
        printf ("------------------------------------------------------------------------------------------------------------\n\n\n");
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
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ******************************[Equerry Polriso]******************************\n");
        printf ("               *****************************************************************************\n\n\n");

        printf ("\n\n\n.......................................................................................................\n");    
        printf ("Your highness, there's a problem!");
        printf ("\n.......................................................................................................\n");    
        printf ("(1) Problem? OR (2) What is it?\n");
        printf ("Choice: ");
        scanf ("%d", &lvl1_story_choice);

        if (lvl1_story_choice == 1)
        {
            printf ("\n\n\n.......................................................................................................\n");    
            printf ("Yes! Apparently, I'm afraid that there was a traitor.\n");
            printf ("Our servants said they heard people at night sneaking out.\n");
            printf ("\n.......................................................................................................\n\n\n");    
            break;
        }
        else if (lvl1_story_choice == 2)
        {
            printf ("\n\n\n.......................................................................................................\n");    
            printf ("Our servants suspect that there could be a suspicious person or group inside our castle.\n");
            printf ("They heard people whispering and sneaking out at night.\n");
            printf ("\n.......................................................................................................\n\n\n");    
            break;
        }
        else
        {
            
        }
    } while (lvl1_story_choice != 2);

    printf ("\n\n\n.......................................................................................................\n");    
    printf ("Should we investigate it?\n");
    printf ("\n.......................................................................................................\n");    
    printf ("(1) Yes OR (2) No\n");
    printf ("Choice: ");
    


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
    do
    {
        if (lvl2_story_choice_connector == 1) //YES
        {
            printf ("\n\n\n.......................................................................................................\n");    
            printf ("Your highness, our investigation got its fruition!\n");
            printf ("We have a lead on who could be the traitor.\n");
            printf ("We asked the servants and they said that they saw Noble Gilde and Noble Hasea ");
            printf ("at different occasions late at night with their own servants ");
            printf ("doing something and look like they are in a hurry.\n");

            alibi_traitor (lvl2_story_choice, lvl3_story_choice_connector1);

        }
        else if (lvl2_story_choice_connector == 2) //NO
        {
            printf ("\n\n.......................................................................................................\n");    
            printf ("Your highness, I am certain there was a traitor and our servants can attest to my claims.\n");
            printf ("\n.......................................................................................................\n");    
            printf ("(1) Go on OR (2) You're being paranoid, Polriso.\n");
            printf ("Choice: ");
            scanf ("%d", &lvl2_story_choice2);
            
            if (lvl2_story_choice2 == 1) //GO ON
            {
                printf ("\n\n\n               *****************************************************************************\n");
                printf ("               ******************************[Equerry Polriso]******************************\n");
                printf ("               *****************************************************************************\n\n\n");
                printf ("\n\n\n.......................................................................................................\n");    
                printf ("The servants said that they saw Noble Gilde and Noble Hasea ");
                printf ("at different occasions late at night with their own servants doing ");
                printf ("something and look like they are in a hurry.\n");
                printf ("\n.......................................................................................................\n\n\n");    


                alibi_traitor (lvl2_story_choice, lvl3_story_choice_connector1);

                
            }
            else if (lvl2_story_choice2 == 2) // YOU'RE BEING PARANOID POLRISO
            {

                printf ("\n\n\n               *****************************************************************************\n");
                printf ("               ******************************[King Faeron]******************************\n");
                printf ("               *****************************************************************************\n\n\n");
                printf ("\n.......................................................................................................\n");    
                printf ("\"It's probably nothing. Noble Gilde nor Noble Hasea won't do such thing.\"\n");
                printf ("\n.......................................................................................................\n");    

                printf ("\n\n\n               *****************************************************************************\n");
                printf ("               ******************************[Equerry Polriso]******************************\n");
                printf ("               *****************************************************************************\n\n\n");
                printf ("\n.......................................................................................................\n");    
                printf ("But, Your Highness \n");
                printf ("\n.......................................................................................................\n");    
                printf ("\n\n\n               *****************************************************************************\n");
                printf ("               ******************************[King Faeron]******************************\n");
                printf ("               *****************************************************************************\n\n\n");
                printf ("\n.......................................................................................................\n");    
                printf ("\"It's okay, Polriso. You can stop with the traitor accusations.\"\n\n");
                printf ("\n.......................................................................................................\n\n\n");    

                
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

    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("The time stopped and revert back before it all folds out. The Voice of the Universe reappear again.\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");

    printf ("\n.......................................................................................................\n");    
    printf ("This is your last chance. I can turn back time for you.\n");
    printf ("Decide now, whether you will find who is the traitor or not.\n");
    printf ("REMEMBER, YOUR DECISION HAS CONSEQUENCES.\n");
    printf ("\n.......................................................................................................\n");    

    printf ("\n.......................................................................................................\n");    
    printf ("(1) I will find the traitor OR (1) There is no traitor\n");
    printf ("Choice: ");

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
        printf ("\n\n\n                         ############################################################");
        printf ("\n                         ######################GAME OVER#############################\n");
        printf ("                         ############################################################\n\n\n");
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
        printf ("\n.......................................................................................................\n");    
        printf ("Can we host a banquet this week, My King?\n");
        printf ("\n.......................................................................................................\n");    
        printf ("(1) Yes OR (2) No\n");
        printf ("Choice: ");
        scanf ("%d", &queen_vivi_path_choice);

        if (queen_vivi_path_choice == 1) //YES
        {
            printf ("------------------------------------------------------------------------------------------------------------\n");
            printf ("The banquet was attended by people throughout the kingdom. It was grandiose and festive.\n");
            printf ("------------------------------------------------------------------------------------------------------------\n\n\n");

            printf ("\n\n\n                         ############################################################");
            printf ("\n                         ######################GAME OVER#############################\n");
            printf ("                         ############################################################\n\n\n");
            printf ("          <><><><><><><><><><><><><><><><><><You died drinking a wine.><><><><><><><><><><><><><><><><><>\n\n\n");

        
                
        }
        else if (queen_vivi_path_choice == 2) //NO
        {
            printf ("\n\n\n                         ############################################################");
            printf ("\n                         ######################GAME OVER#############################\n");
            printf ("                         ############################################################\n\n\n");
            printf ("          <><><><><><><><><><><><><><><><><><You died drinking a wine.><><><><><><><><><><><><><><><><><>\n\n\n");
        }
    }
    else if (lvl3_story_choice_connector2 == 2)
    {
            printf ("\n\n\n                         ############################################################");
            printf ("\n                         ######################GAME OVER#############################\n");
            printf ("                         ############################################################\n\n\n");
            printf ("          <><><><><><><><><><><><You are assasinated without knowing who killed you.><><><><><><><><><><><>\n\n\n");
    }
    
}

void alibi_traitor (int lvl2_story_choice, int lvl3_story_choice_connector1)
{
    int alibi_choice, alibi2_gilde, alibi2_hasea;

    do
    {
        printf ("\n\n\n.......................................................................................................\n");    
        printf ("It's either Noble Gilde or Noble Hasea.\n");
        printf ("\n.......................................................................................................\n");    
        printf ("(1) Summon them and have them explain themselves! OR (2) It's probably nothing.\n");
        printf ("Choice: ");
        scanf ("%d", &lvl2_story_choice);

        if (lvl2_story_choice == 1) /*SUMMON THEM*/
        {
            
            do 
            {
                printf ("\n\n\n               *****************************************************************************\n");
                printf ("               ******************************[King Faeron]******************************\n");
                printf ("               *****************************************************************************\n\n\n");
                printf ("\n.......................................................................................................\n");    
                printf ("\"Explain yourselves!!\"\n");
                printf ("\n.......................................................................................................\n");    
                printf ("(1) Noble Gilde OR (2) Noble Hasea\n");
                printf ("Choice: ");
                scanf ("%d", &alibi_choice);
                if (alibi_choice == 1)
                {
                    NobleGilde:
                    printf ("\n\n\n               *****************************************************************************\n");
                    printf ("               ******************************[Noble Gilde]******************************\n");
                    printf ("               *****************************************************************************\n\n\n");
                    printf ("\n\n\n.......................................................................................................\n");
                    printf ("I sentenced my physician to death and burn its collection of herbs ");
                    printf ("and medicinal plant s because I found out that he is giving wrong consultations on me.\n\n");
                    printf ("I don't want such physicians to get near you as it might endanger your life.\n");
                    printf ("We've gone to the castle at night to collect the herbs ");
                    printf ("and medicinal plants that physician gave to the castle and eradicate it ourselves.\n\n");
                    printf ("I don't want you to know my incompetence at managing such problematic physician.\n\n\n");
                    printf ("\n.......................................................................................................\n\n\n");

                    
                    do
                    {
                        printf ("\n.......................................................................................................\n");
                        printf ("\n\n (1) Noble Hasea's alibi OR (2) Enough\n");
                        printf ("Choice: ");
                        scanf ("%d", &alibi2_gilde);

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
                    printf ("\n\n\n.......................................................................................................\n");
                    printf ("I found out that the general of my army was partaking in selling weapons without my knowledge ");
                    printf ("and our armory was almost emptied so I ordered him to be executed.\n");

                    printf ("The reason I went to the castle late at night with my servants is to check on the main castle's armory ");
                    printf ("as I am afraid that it might be also been tampered by my corrupt general. ");
                    printf ("Turns out everything is fine.\n\n");
                    
                    printf ("I don't want you to found out all about this so I kept it a secret, your Highness.\n");
                    printf ("\n.......................................................................................................\n");

                    
                    do 
                    {
                        printf ("\n.......................................................................................................\n");
                        printf ("(1) Noble Gilde's alibi OR (2) Enough\n");
                        printf ("Choice: ");
                        scanf ("%d", &alibi2_hasea);

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
    printf ("\n.......................................................................................................\n");    
    printf ("Do you have an idea now who is the traitor, your highness?\n");
    printf ("(1) Yes OR (2) No\n");
    printf ("Choice: ");
}

void connector_2_3_2 ()
{
    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[General Zamoun]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    printf ("\n.......................................................................................................\n");   
    printf ("Just in case, should we heighten the security of the castle, Your Highness?\n");
    printf ("(1) YES OR (2) NO\n");
    printf ("Choice: ");
}

void pick_traitor (int lvl3_story_choice_connector1, int noblegilde_path_choice, int noblehasea_path_choice)
{
    do
    {
        printf ("\n\n\n               *****************************************************************************\n");
        printf ("               ******************************[Equerry Polriso]******************************\n");
        printf ("               *****************************************************************************\n\n\n");
        printf ("\n.......................................................................................................\n");    
        printf ("Who is the traitor, Your highness?\n");
        printf ("(1) Noble Gilde OR (2) Noble Hasea\n");
        printf ("Choice: ");
        scanf ("%d", &lvl3_story_choice_connector1);

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
    printf ("\n.......................................................................................................\n");        
    printf ("Your Highness! .... From the far east, an ominous gigantic boat made out of \n ");
    printf ("metal is afloat in the skies.\n\n");

    do
    {
        printf ("\n.......................................................................................................\n");        
        printf ("(1) What kind of black magic is it? OR (2) Are you out of your mind?\n");
        printf ("Choice: ");
        scanf ("%d", &ending1_choice1);

        if (ending1_choice1 == 1 || ending1_choice1 == 2)
        {
            printf ("\n\n\n               *****************************************************************************\n");
            printf ("               ******************************[Equerry Polriso]******************************\n");
            printf ("               *****************************************************************************\n\n\n");
            printf ("\n.......................................................................................................\n");    
            printf ("Your highness, this is for real.\n");
            printf (" From it, a bunch of neo-humans with unusually glowing armor descent.\n\n");

            do 
            {
                printf ("\n.......................................................................................................\n");    
                printf ("(1) Humans? OR (2) Wha--?\n");
                printf ("Choice: ");
                scanf ("%d", &ending1_choice2);

                if (ending1_choice2 == 1 || ending1_choice2 == 2)
                {
                    printf ("\n\n\n               *****************************************************************************\n");
                    printf ("               ******************************[Equerry Polriso]******************************\n");
                    printf ("               *****************************************************************************\n\n\n");
                    printf ("\n.......................................................................................................\n");    
                    printf ("Our militia are currently fending them off.\n");
                    printf ("However, our numbers are dwindling. Our mightiest warriors are falling like flies.\n\n");

                    do
                    {
                        printf ("\n.......................................................................................................\n");    
                        printf ("(1) Impossible OR (2) Do something!\n");
                        printf ("Choice: ");
                        scanf ("%d", &ending1_choice3);

                        if (ending1_choice3 == 1 || ending1_choice3 == 2)
                        {
                            printf ("\n\n\n               *****************************************************************************\n");
                            printf ("               ******************************[Equerry Polriso]******************************\n");
                            printf ("               *****************************************************************************\n\n\n");
                            printf ("\n.......................................................................................................\n");    
                            printf ("Our mighty swords and arrow can't faze nor scratch them.\n");
                            printf (" In addition, their weapons are out of this world, it spurs out balls of fire.\n");
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

    printf ("..........................................................................................................\n");

    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Noble Hasea]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    printf ("\n\n\n.......................................................................................................\n");

    printf ("May I request an additional militia and equipment for my army, your highness. ");
    printf ("I want to further conquer the outskirts of the world for you.\n");

    do
    {
        printf ("..........................................................................................................\n");
        printf ("(1) Yes, that would be nice. OR (2) No, that's a waste of time.\n");
        printf ("Choice: ");
        scanf ("%d", &noblehasea_path_choice);

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
    printf (".............................................................................................................\n"); 

    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Noble Gilde]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    printf ("\n\n\n.......................................................................................................\n");

    printf ("May I request more physicians to work under my command, Your Highness?\n");
    printf ("I might discover a cure for uncurable diseases or even discover immortality. ");
    printf ("I will call it THE JAVORIAN MEDICINE.\n\n");

    do
    {
        printf ("\n.......................................................................................................\n");
        printf ("(1) That's interesting, yes. OR (2) Nonsense, no.\n");
        printf ("Choice: ");
        scanf ("%d", &noblegilde_path_choice);

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
    printf ("\n.......................................................................................................\n");        

    printf ("Your Highness!!\n\n");
    do 
    {
        printf ("\n.......................................................................................................\n");        
        printf ("(1) What is it? OR (2) What happened?\n");
        printf ("Choice: ");
        scanf ("%d", &ending2_choice1);

        if (ending2_choice1 == 1 || ending2_choice1 == 2)
        {
            printf ("\n\n\n               *****************************************************************************\n");
            printf ("               ******************************[Equerry Polriso]******************************\n");
            printf ("               *****************************************************************************\n\n\n");
            printf ("\n.......................................................................................................\n");        

            printf ("\n\n\nFor days now, commoners and nobles are dying from an unknown disease. It is spreading like wild fire.\n");
            printf ("Bodies continue to drop dead as if flowers suddenly withering in an instant.\n");
            printf ("Symptoms before the sudden death was non existence aside from ");       
            printf ("a red-ish bump that will appear after dying.\n\n");

            do
            {
            printf ("\n.......................................................................................................\n");        
            printf ("(1) Where is Noble Gilde? OR (2) Order Noble Gilde and the Physicians to find a cure.\n");
            printf ("Choice: ");
            scanf ("%d", &ending2_choice2);

            if (ending2_choice2 == 1 || ending2_choice2 == 2)
            {
                printf ("\n\n\n               *****************************************************************************\n");
                printf ("               ******************************[Equerry Polriso]******************************\n");
                printf ("               *****************************************************************************\n\n\n");
                printf ("\n.......................................................................................................\n");        

                printf ("\n\n\nNoble Gilde was nowhere to be found, your Highness.\n\n");

                do
                {
                    printf ("\n.......................................................................................................\n");        
                    printf ("(1) What?! OR (2) The physicians?\n");
                    printf ("Choice: ");
                    scanf ("%d", &ending2_choice3);

                    if (ending2_choice3 == 1 || ending2_choice3 == 2)
                    {
                        printf ("\n\n\n               *****************************************************************************\n");
                        printf ("               ******************************[Equerry Polriso]******************************\n");
                        printf ("               *****************************************************************************\n\n\n");
                        printf ("\n.......................................................................................................\n");        

                        printf ("\n\n\nAnd the physicians were discovered to be all been brutally murdered in Noble Gilde's manor.\n\n\n");
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

    printf ("\n\n\n                         ############################################################");
    printf ("\n                         ######################GAME OVER#############################\n");
    printf ("                         ############################################################\n\n\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n\n");
    printf ("          <><><><><><><><><><><The entire population was eradicated by an unknown disease.><><><><><><><><>\n\n\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n");
    printf ("Everyone in the castle died except for you and Polriso\n"); 
    printf ("For some reason, the disease doesn't affect you. What's a king without jurisdiction?\n\n\n");// The King Without a Kingdom and The Javorian Fox
    printf ("------------------------------------------------------------------------------------------------------------\n\n");
}

void ending3 () // THE SLUGS FOOLED US
{
    int ending3_choice1, ending3_choice2, ending3_choice3, ending3_choice4;

    printf ("\n\n\n               *****************************************************************************\n");
    printf ("               ******************************[Equerry Polriso]******************************\n");
    printf ("               *****************************************************************************\n\n\n");
    printf ("\n.......................................................................................................\n");        

    printf ("Your highness, this is dire!\n\n");

    do
    {
        printf ("\n.......................................................................................................\n");        
        printf ("(1) What? What? OR (2) Uuuh..\n");
        printf ("Choice: ");
        scanf ("%d", &ending3_choice1);

        if (ending3_choice1 == 1 || ending3_choice1 == 2)
        {
            printf ("\n\n\n               *****************************************************************************\n");
            printf ("               ******************************[Equerry Polriso]******************************\n");
            printf ("               *****************************************************************************\n\n\n");
            printf ("\n.......................................................................................................\n");        

            printf ("\n\nNoble Hasea... I think, turned against us alongside the militia that we entrusted him.\n\n");

            do 
            {
                printf ("\n.......................................................................................................\n");        
                printf ("(1) Fight them OR (2) Defeat them\n");
                printf ("Choice: ");
                scanf ("%d", &ending3_choice2);

                if (ending3_choice2 == 1 || ending3_choice2 == 2)
                {
                    printf ("\n\n\n               *****************************************************************************\n");
                    printf ("               ******************************[Equerry Polriso]******************************\n");
                    printf ("               *****************************************************************************\n\n\n");
                    printf ("\n.......................................................................................................\n");        

                    printf ("\nOur army was fighting them but they are..\n\n");

                    do 
                    {
                        printf ("\n.......................................................................................................\n");        
                        printf ("(1) They are? OR (2) Continue\n");
                        printf ("Choice: ");
                        scanf ("%d", &ending3_choice3);

                        if (ending3_choice3 == 1 || ending3_choice3 == 2)
                        {
                            printf ("\n\n\n               *****************************************************************************\n");
                            printf ("               ******************************[Equerry Polriso]******************************\n");
                            printf ("               *****************************************************************************\n\n\n");
                            printf ("\n.......................................................................................................\n");        

                            printf ("\n\nThey are different, they are immortal, they can't die.\n\n");

                            do
                            {
                                printf ("\n.......................................................................................................\n");        
                                printf ("(1) Impossible OR (2) What do you mean?\n");
                                printf ("Choice: ");
                                scanf ("%d", &ending3_choice4);

                                if (ending3_choice4 == 1 || ending3_choice4 == 2)
                                {
                                    printf ("\n\n\n               *****************************************************************************\n");
                                    printf ("               ******************************[Equerry Polriso]******************************\n");
                                    printf ("               *****************************************************************************\n\n\n");
                                    printf ("\n.......................................................................................................\n");        

                                    printf ("The only way for them to die was to target their brains.");
                                    printf ("However, once dead, their entire body will turn into a ");
                                    printf ("morphed beasts that can eat through any metals.");
                                    printf ("Our militia was dwindling, I don't know how long we can fend them off.\n\n\n");
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

    printf ("\n\n\n                         ############################################################");
    printf ("\n                         ######################GAME OVER#############################\n");
    printf ("                         ############################################################\n\n\n");
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
    printf ("\n\n\n                         ############################################################");
    printf ("\n                         ######################CONGRATULATIONS#######################\n");
    printf ("                         ############################################################\n\n\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n");

    printf ("Your reign continues, and humanity's technological leap was made possible under the imperium. ");
    printf ("By 1850s humanity harnessed the FTL travel or Faster Than Light travel. ");
    printf ("Humanity spans throughout galaxies by the year 1930s and it is discovered that there are other species in the cosmos that is worth conquering over.\n ");
    printf ("                         This led to the creation of the IMPERIUM OF MAN.\n\n\n");

    printf ("The story will continue as we strive for the domination over other species.\n\n\n"); // UNLOCK ASCENSION AND IMPERIUM OF MAN

    printf ("------------------------------------------------------------------------------------------------------------\n\n");



}

void characters ()
{
    printf ("------------------------------------------------------------------------------------------------------------\n\n");
    printf ("King Faeron\n");
    printf ("Queen Vivi\n");
    printf ("Noble Hasea\n");
    printf ("Noble Gilde\n");
    printf ("General Zamoun\n");
    printf ("Equerry Polriso\n");
    printf ("High Priest Weevil\n");
    printf ("Old Man Sedo\n");
    printf ("Envoy Halbert\n");
    printf ("------------------------------------------------------------------------------------------------------------\n\n");


}

void how_to_play ()
{
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

void achievements ()
{
    





}

void save_progress (){
    /*FILE* fptr; 

    char user_progress [1000]; 

    printf ("What is your name? ", user_progress);
    scanf (user_progress, fptr);

    fptr = fopen(".txt", "w");
    
    if (fptr != NULL){
        printf ("%s", user_progress);
    }
    else {
        printf ("dafdsfds");
    }

    fclose(fptr); */


}
