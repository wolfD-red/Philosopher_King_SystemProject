#include <stdio.h>

void ending1 ();
void pick_traitor ();

int main  ()
{
    int alibi_choice, alibi2_gilde, alibi2_hasea; 
    int lvl2_story_choice;
    

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

            pick_traitor ();
                             
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

    return 0;
}


void ending1 ()
{
    int ending1_choice1, ending1_choice2, ending1_choice3;

    printf ("\n\n                         ************ Equerry Polriso ************\n\n\n");    
    printf ("Your Highness! .... From the far east, an ominous gigantic boat made out of \n ");
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

void pick_traitor () // conclusion of level 2
{
    int lvl3_story_choice_connector1;
   
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