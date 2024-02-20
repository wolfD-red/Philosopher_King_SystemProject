#include <stdio.h>

int main ()
{
    int ending1_choice1;
    int ending1_choice2;
    int ending1_choice3;


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

    


    
    

/*
░░░░░░░░░░░░░░░▒███▓▒░░░░░░░░░░░░░░
░░░░░░░░░░░░▒█████████▓▒░░░░░░░░░░░
░░░░░░░░░▒█████▓▓▓▓▓▓█████▒░░░░░░░░
░░░░░░▒███████▓▒▒▒▒▒▒▓███████▒░░░░░
░░░▒█████████▓▒▒▒▒▒▒▒▒▓█████████▓░░
▓██████████████▓▒▒▒▒▓█████████████▓
██████████████▓▓░░░░▒▓▓████████████
█████████████▓▒▒▒▒▒▒▒▒▓████████████
███▓█████████▒▒▒▒▓▓▒▒▒▒████████████
█▓▓▓▓▓██████▓▒▓▒▒▓▓▒▒▓▒▓██████▓▓▓▓█
████▓▓██████▒▓▓▓▒▓▓▒▓█▓▓██████▓████
████▓▓▓████▓▓▓▓▓▒▓▓▒▓██▓▓████▓▓████
█████▓▓▓▓▓▓▓▓▓▓▓▒▓▓▒▓▓▓▓▓▓▓▓▓▓▓████
█▓▓▓▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓█
█▓▓▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓█
▒▓█▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░░▒▒▒▓▓▓
░░░▒▓██▓▓▓▓▓▒▒░░░░░░░▒▒▒▒▒▒▒▒▓█▓▒░░
░░░░░░▒▒▓▓▓▓▓▒░░░░░░▒▓▓▓▓▓▓▓▒▒░░░░░
░░░░░░░░░░░▓███▓▓▓▓▓████▓▒░░░░░░░░░
░░░░░░░░░░░░░░▓█████▓▓▒░░░░░░░░░░░░
*/






    return 0;
}