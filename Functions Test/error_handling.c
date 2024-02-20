#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void after_choice_clear ()
{
    system ("cls");
}


void before_print_text ()
{
    while (getchar() != '\n');
}

int choice_checker_chstrint1() {
    int overall_choice;
    char user_input[99];

    do 
    {
        printf("Choice: ");
        fgets(user_input, sizeof(user_input), stdin);

        if (sscanf(user_input, "%d", &overall_choice) != 1) {
            continue;
        }

        if (overall_choice != 1 && overall_choice != 2){
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
        printf("Choice: ");
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

void menu_panel_connector ();
void menu_panel ();
void characters ();
void how_to_play ();

int main ()
{
    menu_panel_connector ();

    printf ("FUCK\n");
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
void characters ()
{
    after_choice_clear ();
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

