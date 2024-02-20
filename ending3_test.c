#include <stdio.h>

int main ()
{
    int ending3_choice1, ending3_choice2, ending3_choice3, ending3_choice4;

    printf ("\n\n************************Equerry Polriso************************\n\n\n");

    printf ("Your highness, this is dire!\n\n");

    do
    {
        printf ("(1) What? What? OR (2) Uuuh..\n");
        printf ("Choice: ");
        scanf ("%d", &ending3_choice1);

        if (ending3_choice1 == 1 || ending3_choice1 == 2)
        {
            printf ("\n\n************************Equerry Polriso************************\n\n\n");

            printf ("\n\nNoble Hasea... I think, turned against us alongside the militia that we entrusted him.\n\n");

            do 
            {
                printf ("(1) Fight them OR (2) Defeat them\n");
                printf ("Choice: ");
                scanf ("%d", &ending3_choice2);

                if (ending3_choice2 == 1 || ending3_choice2 == 2)
                {
                    printf ("\n\n************************Equerry Polriso************************\n\n\n");

                    printf ("\n\nOur army was fighting them but they are..\n\n");

                    do 
                    {
                        printf ("(1) They are? OR (2) Continue\n");
                        printf ("Choice: ");
                        scanf ("%d", &ending3_choice3);

                        if (ending3_choice3 == 1 || ending3_choice3 == 2)
                        {
                            printf ("\n\n************************Equerry Polriso************************\n\n\n");

                            printf ("\n\nThey are different, they are immortal, they can't die.\n\n");

                            do
                            {
                                printf ("(1) Impossible OR (2) What do you mean?\n");
                                printf ("Choice: ");
                                scanf ("%d", &ending3_choice4);

                                if (ending3_choice4 == 1 || ending3_choice4 == 2)
                                {
                                    printf ("\n\n************************Equerry Polriso************************\n\n\n");

                                    printf ("The only way for them to die was to target their brains. ");
                                    printf ("However, once dead, their entire body will turn into a ");
                                    printf ("morphed beasts that can eat through any metals.");
                                    printf ("Our militia was dwindling, I don't how long we can fend them off.\n\n\n");
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

    printf ("\n\n\n----------The militia was overpowered by Noble Hasea and the entire kingdom is in hysteria-----------\n\n"); 
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("Noble Hasea has reached the castle and invites you to join him in the hive.\n");
    printf ("He offer you a slug and order you to put it into your mouth.\n\n\n"); //Unlock 
    return 0;
}