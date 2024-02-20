#include <stdio.h>

int main ()
{
    int ending2_choice1;
    int ending2_choice2;
    int ending2_choice3;

    printf ("\n\nYour Highness!!\n\n");
    do 
    {
        printf ("(1) What is it? OR (2) What happened?\n");
        printf ("Choice: ");
        scanf ("%d", &ending2_choice1);

        if (ending2_choice1 == 1 || ending2_choice1 == 2)
        {
            printf ("\n\n\nFor days now, commoners and nobles are dying from an unknown disease. It is spreading like wild fire.\n");
            printf ("Bodies continue to drop dead as if flowers suddenly withering in an instant.\n");
            printf ("Symptoms before the sudden death was non existence aside from ");       
            printf ("a red-ish bump that will appear after dying.\n\n");

            do
            {
            printf ("(1) Where is Noble Gilde? OR (2) Order Noble Gilde and the Physicians to find a cure.\n");
            printf ("Choice: ");
            scanf ("%d", &ending2_choice2);

                if (ending2_choice2 == 1 || ending2_choice2 == 2)
                {
                    printf ("\n\n\nNoble Gilde was nowhere to be found, your Highness.\n\n");

                    do
                    {
                        printf ("(1) What?! OR (2) The physicians?\n");
                        printf ("Choice: ");
                        scanf ("%d", &ending2_choice3);

                        if (ending2_choice3 == 1 || ending2_choice3 == 2)
                        {
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
    } while (ending2_choice1 != 2 || ending2_choice1 != 1); 

    printf ("\n\n\n\n----------The entire population was eradicated by an unknown disease.-----------\n\n");  
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("");
    printf ("For some reason, the disease doesn't affect you. What's a king without jurisdiction?\n\n\n"); // Unlock The King Without a Kingdom & The Javorian Fox

    return 0;
}