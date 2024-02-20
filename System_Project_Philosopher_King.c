#include <stdio.h>

void menu_panel ();
void characters ();
void how_to_play ();
void status (/*parameter*/);
void achievements (/*parameter*/);
void save_progress (/*parameter*/);
void rando_events (/*parameter*/);
void game_story_connector (int lvl2_story_choice_connector, int lvl3_story_choice_connector1, int lvl3_story_choice_connector2, int lvl2_story_choice);
void game_start ();
void game_lvl1 ();
void game_lvl2 (int lvl2_story_choice_connector, int lvl3_story_choice_connector1, int lvl3_story_choice_connector2, int lvl2_story_choice);
void alibi_traitor (int lvl2_story_choice, int lvl3_story_choice_connector1);
void pick_traitor (int lvl3_story_choice_connector1);
void noblehasea_path (int noblehasea_path_choice);
void noblegilde_path (int noblegilde_path_choice);
void game_lvl3 ();
void ending1 ();




int main (){

    int menu_choice;
    int quit_choice;
    
    /*for function "connector"*/
    int lvl2_story_choice, lvl2_story_choice_connector;
    int lvl3_story_choice_connector1, lvl3_story_choice_connector2;
    int noblehasea_path_choice, noblegilde_path_choice;


    do 
    {
        do 
        {
            printf ("\nPhilosopher King");
            menu_panel ();
            scanf ("%d", &menu_choice);

            if (menu_choice == 1)
            {
                game_story_connector (lvl2_story_choice_connector, lvl3_story_choice_connector1, lvl3_story_choice_connector2, lvl2_story_choice);
            }
            else if (menu_choice ==  2)
            {
                how_to_play ();
            }
            else if (menu_choice == 3)
            {
                characters ();
            }
            else if (menu_choice == 4)
            {


            }
            else if (menu_choice == 5)
            {
               do 
                { 
                printf ("\n\nAre you sure you want to quit the game?\n\n");
                printf ("(1)Yes \n(2)No\n");
                printf ("Choice:");
                scanf ("%d", &quit_choice);

                
                if (quit_choice == 1)
                {
                    break;
                }
                else if (quit_choice == 2)
                {
                    
                }
                else 
                {
                    printf ("\n\nChoose again.\n\n");
                }
                } while (quit_choice != 2);
            }
            else 
            {
                printf ("\n\nChoose again.\n\n");

            }
   
        } while (menu_choice != 5);

    } while (quit_choice == 2);  


    













    return 0;
}

void menu_panel (){

    printf ("\n\n\n(1) Start\n");
    printf ("(2) How To Play\n");
    printf ("(3) Characters\n");
    printf ("(4) Achievements\n");
    printf ("(5) Exit\n");
    printf ("Choice:");
    

}

void characters ()
{
    printf ("\n\n\n\n");
    printf ("King Faeron\n");
    printf ("Queen Vivi\n");
    printf ("Noble Hasea\n");
    printf ("Noble Gilde\n");
    printf ("General Zamoun\n");
    printf ("Equerry Polriso\n");
    printf ("High Priest Weevil\n");
    printf ("Old Man Sedo\n");
    printf ("Envoy Halbert\n");
    printf ("\n\n\n\n");

}



void how_to_play ()
{
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
    printf ("remember that each decision has consequences.\n\n\n\n");

}

void achievements ()
{
    printf ("");





}

void status ()
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

void rando_events ()
{


}

void game_start ()
{
    int gs_choice;
    int gs_choice2;
    int gs_choice3;

    printf ("\nThere was once a man; ");
    printf ("\na man born in a forgotten time, created by a force of unknown origin.\n");
    printf ("He would cross the ages knowing his main purpose: ");
    printf ("Lead humanity as the greatest empire in the cosmos.\n\n\n");
    do 
    {
        printf ("\n\n--------Voice of the Universe--------\n");
        printf ("\nAre you ready?\n");
        printf ("\n(1) Yes OR (2) No\n");
        printf ("Choice: ");
        scanf ("%d", &gs_choice);

        if (gs_choice == 1)
        {
            printf ("\nGreat! Lead this civilization just like you did with many others.\n\n");
            break;
        }
        else if (gs_choice == 2)
        {
            do
            {
                printf ("\nWhy? You already did this before.\n");
                printf ("\n(1) Before? OR (2) Did What?\n");
                printf ("Choice: ");
                scanf ("%d", &gs_choice2);

                if (gs_choice2 == 1)
                {
                    printf ("\nYes! Just lead this civilization just like you did with the others.\n");
                    printf ("Just make sure you keep in check of the status of your empire so you don't die.\n");
                    break;
                }
                else if (gs_choice2 == 2)
                {
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
        printf ("\nYou will wake up in 14th Century as a King of a unified world under one rule.\n");
        printf ("You manage to conquer the world which conquerors like Julius Caesar, Alexander the Great and Genghis Khan cannot do.\n");
        printf ("Now, the only task left is to manage your empire well and fend off any humans who tries to cut off your reign. ...\n\n");
        printf ("\n\n                                          OR is it only humans?\n\n");

        printf ("(1) What do you mean? OR (2) I will\n");
        printf ("Choice: ");
        scanf ("%d", &gs_choice3);

        if (gs_choice3 == 1 || gs_choice3 == 2)
        {
        printf ("\n\nThe Voice of the Universe disappeared and it went silent for a while. \n");
        printf ("Thereafter, you woke up in your throne.\n\n");
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

    printf ("\n\n                                          [LEVEL 1] \n\n\n\n");




    /*1st turn*/
    printf ("");

    /*2nd turn*/
    printf ("");

    /*3rd turn*/
    printf ("");

    /*4th turn*/
    printf ("");

    /*5th turn*/
    printf ("");

    /*6th turn*/
    printf ("");

    /*7th turn*/
    printf ("");

    /*8th turn*/
    printf ("");

    /*9th turn*/
    printf ("");

    /*10th turn*/
    printf ("");

    /*11th turn*/
    printf ("");

    /*12th turn*/
    
    do
    {
        printf ("");
        printf ("\n\nYour highness, there's a problem!\n\n");
        printf ("\n\n(1) Problem? OR (2) What is it?\n");
        printf ("Choice: ");
        scanf ("%d", &lvl1_story_choice);

        if (lvl1_story_choice == 1)
        {   
            printf ("\n\nYes! Apparently, I\'m afraid that there was a traitor.\n");
            printf ("Our servants said they heard people at night sneaking out.\n");
            break;
        }
        else if (lvl1_story_choice == 2)
        {
            printf ("\n\nOur servants suspect that there could be a suspicious person or group inside our castle.\n");
            printf ("They heard people whispering and sneaking out at night.\n");
            break;
        }
        else
        {
            
        }
    } while (lvl1_story_choice != 2);

    printf ("Should we investigate it?\n");
    printf ("(1) Yes OR (2) No\n");
    printf ("Choice: ");
}

void game_lvl2 (int lvl2_story_choice_connector, int lvl3_story_choice_connector1, int lvl3_story_choice_connector2, int lvl2_story_choice)
{
    
    int lvl2_status_choice;
    int lvl2_story_choice2;
    
    
        printf ("\n\n                                          [LEVEL 2] \n\n\n\n");

        printf ("\n\n                                          --------Equerry Polriso--------\n");
    do
    {
        if (lvl2_story_choice_connector == 1) //YES
        {
            printf ("Your highness, our investigation got its fruition!\n");
            printf ("We have a lead on who could be the traitor.\n");
            printf (" We asked the servants and they said that they saw Noble Gilde and Noble Hasea ");
            printf ("at different occasions late at night with their own servants ");
            printf ("doing something and look like they are in a hurry.\n\n");

            alibi_traitor (lvl2_story_choice, lvl3_story_choice_connector1);

        }
        else if (lvl2_story_choice_connector == 2) //NO
        {
            printf ("Your highness, I am certain there was a traitor and our servants can attest to my claims.\n\n");
            printf ("(1) Go on OR (2) You're being paranoid, Polriso.\n");
            printf ("Choice: ");
            scanf ("%d", &lvl2_story_choice2);
            
            if (lvl2_story_choice2 == 1) //GO ON
            {
                printf ("\n\n\nThe servants said that they saw Noble Gilde and Noble Hasea ");
                printf ("at different occasions late at night with their own servants doing ");
                printf ("something and look like they are in a hurry.\n\n");

                alibi_traitor (lvl2_story_choice, lvl3_story_choice_connector1);

                
            }
            else if (lvl2_story_choice2 == 2) // YOU'RE BEING PARANOID POLRISO
            {
                //King Faeron
                printf ("\"It's probably nothing Noble Gilde nor Noble Hasea won't do such thing.\"\n");
                //Equerry Polriso
                printf ("But, Your Highness \n");
                //King Faeron
                printf ("\"It's okay, Polriso. You can stop with the traitor accusations.\"\n\n");
                //General Zamoun
                printf ("Just in case, should we heighten the security of the castle, Your Highness?\n");
                printf ("(1) YES OR (2) NO\n");
                printf ("Choice: ");
                scanf ("%d", &lvl3_story_choice_connector2);
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
}

void game_lvl3 ()
{
    printf ("gaga");

}

void game_story_connector (int lvl2_story_choice_connector, int lvl3_story_choice_connector1, int lvl3_story_choice_connector2, int lvl2_story_choice)
{
    
    game_start ();

    game_lvl1 ();

    scanf ("%d", &lvl2_story_choice_connector);

    game_lvl2 (lvl2_story_choice_connector, lvl3_story_choice_connector1, lvl3_story_choice_connector2, lvl2_story_choice);

    game_lvl3 ();
}

void alibi_traitor (int lvl2_story_choice, int lvl3_story_choice_connector1)
{
    int alibi_choice, alibi2_gilde, alibi2_hasea; 

    do
    {
        printf ("\nIt's either Noble Gilde or Noble Hasea.\n\n\n");
        printf ("(1) Summon them and have them explain themselves! OR (2) It's probably nothing.\n");
        printf ("Choice: ");
        scanf ("%d", &lvl2_story_choice);

        if (lvl2_story_choice == 1) /*SUMMON THEM*/
        {
            do 
            {
                printf ("\"Explain yourselves!!\"\n\n");
                printf ("(1) Noble Gilde OR (2) Noble Hasea\n");
                printf ("Choice: ");
                scanf ("%d", &alibi_choice);

                if (alibi_choice == 1)
                {
                    NobleGilde:
                    printf ("----------Noble Gilde----------\n\n");
                    printf ("I sentenced my physician to death and burn its collection of herbs ");
                    printf ("and medicinal plant s because I found out that he is giving wrong consultations on me.\n\n");

                    printf ("I don't want such physicians to get near you as it might endanger your life.\n");
                    printf ("We've gone to the castle at night to collect the herbs ");
                    printf ("and medicinal plants that physician gave to the castle and eradicate it ourselves.\n\n");
                    
                    printf ("I don't want you to know my incompetence at managing such problematic physician.\n\n\n");
                    
                    do
                    {
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
                    printf ("----------Noble Hasea----------\n\n");
                    printf ("I found out that the general of my army was partaking in selling weapons without my knowledge ");
                    printf ("and our armory was almost emptied so I ordered him to be executed.\n\n");

                    printf ("The reason I went to the castle late at night with my servants is to check on the main castle's armory ");
                    printf ("as I am afraid that it might be also been tampered by my corrupt general. ");
                    printf ("Turns out everything is fine.\n\n");
                    
                    printf ("I don't want you to found out all about this so I kept it a secret, your Highness.\n\n\n");
                    
                    do 
                    {
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

            pick_traitor (lvl3_story_choice_connector1);
                             
        }
        else if (lvl2_story_choice == 2) /*IT'S PROBABLY NOTHING*/
        {
            ending1 ();
            break;
        }
        else
        {

        }

        if (alibi_choice == 1 || alibi_choice == 2)
        {
            break;
        }
    } while (lvl2_story_choice != 2);    
}

void pick_traitor (int lvl3_story_choice_connector1)
{
    do
    {
        printf ("\n\n\n..........................................................................................\n\n\n");
        printf ("\n\n                         ************ Equerry Polriso ************\n\n\n");    
        printf ("Who is the traitor, Your highness?\n");
        printf ("(1) Noble Gilde OR (2) Noble Hasea\n");
        printf ("Choice: ");
        scanf ("%d", &lvl3_story_choice_connector1);
        
    
        if (lvl3_story_choice_connector1 == 1)
        {
            printf ("\n\n<><><><><><><><><><>Noble Gilde was put to a public execution.<><><><><><><><><><>\n\n");
            break;
        }  
        else if (lvl3_story_choice_connector1 == 2)
        {
            printf ("\n\n<><><><><><><><><><>Noble Hasea was put to a public execution.<><><><><><><><><><>\n\n"); 
            break;             
        }
        else
        {
        
        }
    } while (lvl3_story_choice_connector1 != 2);
}

void ending1 ()
{
    int ending1_choice1, ending1_choice2, ending1_choice3;

    printf ("\n\n                         ************ Equerry Polriso ************\n\n\n");    printf ("Your Highness! .... From the far east, an ominous gigantic boat made out of \n ");
    printf ("metal is afloat in the skies.\n\n");

    do
    {
        printf ("(1) What kind of black magic is it? OR (2) Are you out of your mind?\n");
        printf ("Choice: ");
        scanf ("%d", &ending1_choice1);

        if (ending1_choice1 == 1 || ending1_choice1 == 2)
        {
            printf ("\n\n                         ************ Equerry Polriso ************\n\n\n");
            printf ("Your highness, this is for real.\n");
            printf (" From it, a bunch of neo-humans with unusually glowing armor descent.\n\n");

            do 
            {
                printf ("(1) Humans? OR (2) Wha--?\n");
                printf ("Choice: ");
                scanf ("%d", &ending1_choice2);

                if (ending1_choice2 == 1 || ending1_choice2 == 2)
                {
                    printf ("\n\n                         ************ Equerry Polriso ************\n\n\n");
                    printf ("Our militia are currently fending them off.\n");
                    printf ("However, our numbers are dwindling. Our mightiest warriors are falling like flies.\n\n");

                    do
                    {
                        printf ("(1) Impossible OR (2) Do something!\n");
                        printf ("Choice: ");
                        scanf ("%d", &ending1_choice3);

                        if (ending1_choice3 == 1 || ending1_choice3 == 2)
                        {
                            printf ("\n\n                                         ************ Equerry Polriso ************\n\n\n");
                            printf ("Our mighty swords and arrow can't faze nor scratch them.\n");
                            printf (" In addition, their weapons are out of this world, it spurs out balls of fire.\n");
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

    printf("\n\n\n#######################GAME OVER#######################\n\n\n");
    printf ("----------Your kingdom was taken over by unknown species.-----------\n\n");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("A technologically advanced of unknown species take over your kingdom and soon the entire world.\n");
    printf ("The entire humanity became a servitude under a space fairing alien.\n\n");

}

void noblehasea_path (int noblehasea_path_choice)
{
    printf ("\n\n                                         ************ Noble Hasea ************\n");

    printf ("May I request an additional militia and equipment for my army, your highness. ");
    printf ("I want to further conquer the outskirts of the world for you.\n");

    do
    {
        printf ("(1) Yes, that would be nice. OR (2) No, that's a waste of time.\n");
        printf ("Choice: ");
        scanf ("%d", &noblehasea_path_choice);

        if (noblehasea_path_choice == 1)
        {
            ending3 ();
        }
        else if (noblehasea_path_choice == 2)
        {
            ending4 ();
        }
        else
        {

        }
    } while (noblehasea_path_choice != 2);
}

void noblegilde_path (int noblegilde_path_choice)
{
    printf ("\n\n                                         ************ Noble Gilde ************\n");

    printf ("May I request more physicians to work under my command, Your Highness?\n");
    printf ("I might discover a cure for uncurable diseases or even discover immortality. ");
    printf ("I will call it THE JAVORIAN MEDICINE.\n\n");

    do
    {
        rintf ("(1) That's interesting, yes. OR (2) Nonsense, no.");
        printf ("Choice: ");
        scanf ("%d", &noblegilde_path_choice);

        if (noblegilde_path_choice == 1)
        {
            ending2 ();
        }
        else if (noblegilde_path_choice == 2)
        {
            ending4 ();
        }
        else
        {

        }
    } while (noblegilde_path_choice != 2);
    





}

void ending2 ()
{

}

void ending3 ()
{


}
void ending4 ()
{


}




// printf ("\n\n                                         ************ King Faeron ************\n");
// printf ("\n\n                                         ************ Equerry Polriso ************\n");
// printf ("\n\n                                         ************ Noble Gilde ************\n");
// printf ("\n\n                                         ************ Noble Hasea ************\n");
// printf ("\n\n                                         ************ Queen Vivi ************\n");
// printf ("\n\n                                         ************ General Zamoun ************\n");
// printf ("\n\n                                         ************ High Priest Weevil ************\n");
// printf ("\n\n                                         ************ Old Man Sedo ************\n");
// printf ("\n\n                                         ************ Envoy Halbert ************\n");

















































































/*Add daw ng special characters in bit.*/
