#include <stdio.h>

void menu_panel ();
void characters ();
void how_to_play ();
void status (/*parameter*/);
void achievements (/*parameter*/);
void save_progress (/*parameter*/);
void game_m (/*parameter*/);

int main (){

    int menu_choice;
    do {
    menu_panel ();
    scanf ("%d", menu_choice);

    if (menu_choice == 1)
    {


    }
    else if (menu_choice ==  2)
    {


    }
    else if (menu_choice == 3)
    {

    }
    else if (menu_choice == 4)
    {


    }
    else if (menu_choice == 5)
    {


    }
    else 
    {
        printf ("Invalid Choice. Choose again");

    }
   
    } while (menu_choice != 5);


    













    return 0;
}

void menu_panel (){

    printf ("(1) Start\n");
    printf ("(2) How To Play\n");
    printf ("(3) Characters\n");
    printf ("(4) Achievements\n");
    printf ("(5) Exit\n");
    

}

void characters (){





}



void how_to_play (){





}

void achievements (){





}

void status (){




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

void game_m (){




    
}