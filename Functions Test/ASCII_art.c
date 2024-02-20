#include <stdio.h>
/*void military_icon ();
void food_icon ();
void happiness_icon ();
void gold_icon ();
*/

//ASCII art
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

//characters
void high_priest_weevil_portrait ();
void king_faeron_portrait ();
void noble_gilde_portrait ();
void noble_hasea_portrait ();
void equerry_polriso_portrait ();
void envoy_halbert ();
void queen_vivi_portrait ();
void old_man_sedo_portrait ();
void general_zamoun_icon ();
void voice_universe ();

int main (){

  return 0;
}
/*
// status icons
void military_icon ()
{
printf("  :.        .:\n");    
printf("    ^7~::  ::~7^\n");     
printf("     .77~..~!7.\n");      
printf("        ^!!^\n");         
printf("      :^^..^^:\n");       
printf("    :^:.    .:^:\n");     
printf("    .          .\n");     
}

void food_icon ()
{            
printf("   .!^.:\n");        
printf("  .:5#PG~\n");       
printf("    ~GBPB?\n");      
printf("     .5BP#J\n");     
printf("      .5BP#7\n");    
printf("       :GBGG\n");    
printf("        ^?J^\n");    
printf("          :.\n");    
printf("          ..\n");   
}

void happiness_icon ()
{
printf(" .~!~^^^^^^~!~.\n");    
printf(" .!~:  ~:  :~  :~!.\n");  
printf(":?.   J@B .#@?   .?^\n"); 
printf("Y.    !#Y  5#~    .Y\n"); 
printf("J  ~P^        ~P^  J\n"); 
printf("Y. .G.        ^P  .Y\n"); 
printf("^?. ~J~.    .!Y^ .?^\n"); 
printf(" .!~..~!!!!!!~.:~!.\n");  
printf("   .~~~^^^^^^~~~.\n");    
}

void gold_icon ()
{
printf("      .::....\n");        
printf("    :~~^~~~~~^:.\n");     
printf("   ^!^^!!!~~!!~^.\n");    
printf("  .7^^!!~~!!!!!~^.\n");   
printf("  :7^~!!~~~~~!!!^.\n");   
printf("  .7^^!!!!!!~~!~^.\n");   
printf("   ^!^^!!!~~!!~^.\n");    
printf("    :~~^~~~~~^:.\n");     
printf("      .::....\n");     
}
*/
// game start
void lead_king ()
{
printf ("\t\t\t\t\t              .              .^.\n");   
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
printf ("\t\t\t\t\t            ::.\n");              
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
printf ("\t\t\t\t\t       .^^.\n");                  
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
printf ("\t\t\t\t\t        ...^:^...\n");        
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
printf ("\t\t\t\t\t         :G^\n");                  
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
printf ("\t\t\t\t\t@@@@@@@#PY?777?YP#@@@@@@@\n");
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
printf ("\t\t\t\t\t    ..  ..\n");                
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
printf ("\t\t\t\t\t                ^  :5:\n");  
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
printf ("\t\t\t\t\t                :!7^:\n");     
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
printf ("\t\t\t\t\t            ::\n");
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
printf ("\t\t\t\t\t .:.:..:..........^BB^.\n"); 
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
printf ("\t\t\t\t\t      .\n");           
printf ("\t\t\t\t\t             .\n");           
printf ("\t\t\t\t\t      ..   :^^~~~^^^^^^.\n"); 
printf ("\t\t\t\t\t  .. ....:?Y55Y5PP55P5Y?\n"); 
printf ("\t\t\t\t\t    ......^7JYJJ????J7~.\n"); 
printf ("\t\t\t\t\t             .     :\n");     
printf ("\t\t\t\t\t           .      .:\n");     
printf ("\t\t\t\t\t           .\n");             
}

void from_above1 (){
printf ("\t\t\t\t\t        ..:^::.\n");         
printf ("\t\t\t\t\t ^!!!7777?JYJJ????7!~~^:\n"); 
printf ("\t\t\t\t\t ^!!7??7J5P555YYJ?7~^~~:\n"); 
printf ("\t\t\t\t\t.       .^^^^^^^.\n");        
}

void from_above2(){
printf ("\t\t\t\t\t             ..\n");       
printf ("\t\t\t\t\t     ..... .:!YGBBG5!.\n");   
printf ("\t\t\t\t\t  .:......:^~Y#&&#&&#G.\n");  
printf ("\t\t\t\t\t          :~ ^#&&B#P55^:\n"); 
printf ("\t\t\t\t\t       .:^^.?G&@#BBGP55Y:\n");
printf ("\t\t\t\t\t.:^~~~~^^!JG&#B&&GG^\n");     
printf ("\t\t\t\t\t~5?!!!7J55J~:5Y7Y#G7\n");     
printf ("\t\t\t\t\t :~777!^.   .^7~:~~^...\n");  
}

void slugs1 (){
printf ("\t\t\t\t\t            .\n");            
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
printf ("\t\t\t\t\t .:        .:!~^.\n");        
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
printf ("\t\t\t\t\t                 :7:\n");                 
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
printf ("\t\t\t\t\t          :~\n");              
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
printf ("\t\t\t\t\t        ...\n");                      
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

//characters
void high_priest_weevil_portrait ()
{

printf ("\t\t\t\t            .^:\n");             
printf ("\t\t\t\t            :75PGY^\n");          
printf ("\t\t\t\t         !7JPGGGG#B5J~\n");        
printf ("\t\t\t\t         ~GGGB5Y5G#BBY\n");        
printf ("\t\t\t\t         ^GGGB55YPB#BB:\n");       
printf ("\t\t\t\t         JBGGBP55PB#B#!\n");       
printf ("\t\t\t\t        :BBGGBPP5PB#B&?\n");       
printf ("\t\t\t\t       .5#BGGBPP5PB#B#G\n");       
printf ("\t\t\t\t     :!YGBBPPGGPPG##B##J:\n");     
printf ("\t\t\t\t   .!PGP5GBPPPGPPGB#B&#BP:\n");    
printf ("\t\t\t\t  :GBPPGGGBG55G####&&##B#P.\n");   
printf ("\t\t\t\t  JBGBGGBBBGPPGBBB#######G.\n");   
printf ("\t\t\t\t .PGGBBGBBBGPPPBBGB#####B#?\n");   
printf ("\t\t\t\t :GGGBBBBBBBPPPGBGB#####B#B^\n");    

}
void king_faeron_portrait (){
printf ("\t\t\t\t   :7??!~:.        :^~!~.\n");
printf ("\t\t\t\t   .!YB&#BGPJ~:~7JPB&BY~\n");
printf ("\t\t\t\t      .7B####BB#B&&#?.\n");   
printf ("\t\t\t\t        :5#BBGGB&#5^\n");     
printf ("\t\t\t\t         .G#GY?G#~\n");       
printf ("\t\t\t\t         .BGGPJG?\n");        
printf ("\t\t\t\t         YBGGGPP\n");         
printf ("\t\t\t\t     .!YYPPPGB##5:\n");       
printf ("\t\t\t\t    ^5G5?7?J5#&#&P~\n");      
printf ("\t\t\t\t   ^BG5YJJJ?7?YG#&#^\n");     
printf ("\t\t\t\t  .GBGPB##G55Y5GPG&Y\n");     
printf ("\t\t\t\t  5#BGBB#&#GGGBBBB#B.\n");    
printf ("\t\t\t\t 7&#BB###&#BBG#####&7\n");   
}
void noble_gilde_portrait (){
printf ("\t\t\t\t ?Y!~~7J?77~.\n");     
printf ("\t\t\t\t   JBGPPGGGJP#G:\n");    
printf ("\t\t\t\t    .~P&BGGJ7J5:\n");    
printf ("\t\t\t\t      ~Y555J??5^\n");    
printf ("\t\t\t\t     ~YB#BBGYPP:\n");    
printf ("\t\t\t\t    !BBBBBBBGBB!\n");    
printf ("\t\t\t\t  .7PJYYPPP5PG##~\n");   
printf ("\t\t\t\t^JJY?^^^!J555PB&#P7\n"); 
printf ("\t\t\t\t:5PYJ!7!!7JYPP5B##G.\n");
printf ("\t\t\t\t 75YYY5P5Y5PPGGGBBP\n"); 
printf ("\t\t\t\t.5P55Y5BB5Y5PPBGBBG:\n");
printf ("\t\t\t\t YBGP5PB#5555PBGGBB?\n");
}
void noble_hasea_portrait (){
printf ("\t\t\t\t        :~^.  .^^.\n");  
printf ("\t\t\t\t       ..^JGJ755\n");    
printf ("\t\t\t\t       .7GBBGG##J\n");   
printf ("\t\t\t\t  :!!!?P##BP?JJB&G!.\n");
printf ("\t\t\t\t   ^?G####BP?!?PY7!:\n");
printf ("\t\t\t\t      .7G#BPGGG!\n");    
printf ("\t\t\t\t      :YGGG5P##5\n");    
printf ("\t\t\t\t   ~PGGBP555GB##!:\n");  
printf ("\t\t\t\t.?GB#BBBGGGGGBBB#BY:\n");
printf ("\t\t\t\t ~&#GGB####B#B####^\n"); 
printf ("\t\t\t\t !&B#&#B##GBBB###B:\n"); 
printf ("\t\t\t\t 7&#&&&&#BGGBB###B^\n");
printf ("\t\t\t\t Y&#&&&&#B#BBB#&&#7\n"); 
}
void equerry_polriso_portrait (){
printf ("\t\t\t\t    .!?JJ?!:\n");      
printf ("\t\t\t\t    .~YBPJ??JYY.\n");    
printf ("\t\t\t\t   :?~~YBGYJ5YG7\n");    
printf ("\t\t\t\t   :Y!JJGG55YYP^\n");    
printf ("\t\t\t\t   YBB#GPPPY5G7\n");   
printf ("\t\t\t\t   ~GP55PPGB##&B:\n");   
printf ("\t\t\t\t:!?5?77^7Y555G#&BJ^\n"); 
printf ("\t\t\t\t:PP5J!?~~7?YPPPB##G\n"); 
printf ("\t\t\t\t !555Y5P5Y5PPGGGBB5\n"); 
printf ("\t\t\t\t YP555PBB5Y5PPBGBBG.\n");
printf ("\t\t\t\t YBGP5G##5555PBGBBB7\n");
}
void envoy_halbert (){
printf ("\t\t\t\t       .JGBBG5!\n");     
printf ("\t\t\t\t       P@@&&#P#?\n");    
printf ("\t\t\t\t      !@&#G5YJPB.\n");   
printf ("\t\t\t\t     .G&&#Y!!JPB.\n");   
printf ("\t\t\t\t    :B&&##G55G&7\n");   
printf ("\t\t\t\t    !PB##BGGB##~\n");    
printf ("\t\t\t\t   7YJ5PPPGPGBBP7.\n");  
printf ("\t\t\t\t  ~5YYP5~?YPGPPG5~\n"); 
printf ("\t\t\t\t  ?5YYBGYJPGGGGGG7\n"); 
printf ("\t\t\t\t  J5?!G&##BBBBBBG~\n");  
}
void queen_vivi_portrait (){
printf ("\t\t\t\t ..:^~!!7?!^7?!^.\n");  
printf ("\t\t\t\t.!JY5PPP5YJJY55PP5?.\n");
printf ("\t\t\t\t   .:^~7GPY??JP?:..\n"); 
printf ("\t\t\t\t        ~GP5YJ5:\n");    
printf ("\t\t\t\t       .JP5PYJJ\n");     
printf ("\t\t\t\t      ~YPP5P55Y.\n");    
printf ("\t\t\t\t :~!?5#5J555PGY:\n");    
printf ("\t\t\t\t ~YPY?J5PPGGGBG5!\n");   
printf ("\t\t\t\t  7#5YY77?Y5Y5PGG.\n");  
printf ("\t\t\t\t  7BYGBJ~7J?!^!JP.\n");  
printf ("\t\t\t\t  ?#PGBY??5P577JG7\n");  
printf ("\t\t\t\t  Y#B5BY?JGPGJ?YPB~\n"); 
}
void old_man_sedo_portrait (){
printf ("\t\t\t\t       .7Y55YY?.\n");    
printf ("\t\t\t\t       ?GPYYPPPY.\n");   
printf ("\t\t\t\t       .Y5555Y5P:\n");   
printf ("\t\t\t\t      .!PG5555GG^\n");   
printf ("\t\t\t\t   :7JPBGPPPGBBB^\n");   
printf ("\t\t\t\t !PBBB5J?JYPGBB#BP?.\n");
printf ("\t\t\t\t?#BPY?7!?JY5PB#####7\n");
printf ("\t\t\t\t7#PYJJ555PGGPG#####7\n");
printf ("\t\t\t\t5#G5PBGPGGBBGG#####5\n");
}
void general_zamoun_icon (){
printf ("\t\t\t\t ~:   .:~!J~\n");       
printf ("\t\t\t\t  GP   ^5J7YP7\n");      
printf ("\t\t\t\t .BP   :Y57?PP\n");      
printf ("\t\t\t\t :#P    7#G5G?\n");      
printf ("\t\t\t\t!J#GP7^YBB#B#~\n");      
printf ("\t\t\t\t7##B#BGGBBP##5J^\n");    
printf ("\t\t\t\t!G55#BP77?PGGB&&P^\n");  
printf ("\t\t\t\t:5J7P##P!7YGGB##&G\n");  
printf ("\t\t\t\t ?GYP&#B555PBB####:\n"); 
printf ("\t\t\t\t 7BPP#BBGBPGGB##B&?\n"); 
printf ("\t\t\t\t .5BG###&#GB#####&P\n"); 
printf ("\t\t\t\t  5BGB&&&##&&&&&###^\n");
printf ("\t\t\t\t  .YBB#&&#&&&&&&##&7\n");
}
void voice_universe (){
printf ("\t\t\t\t        .::::.\n");          
printf ("\t\t\t\t         ..!Y~~^\n");         
printf ("\t\t\t\t         ..J55^~:\n");        
printf ("\t\t\t\t      ... :!7YY:~^\n");       
printf ("\t\t\t\t   :^!!:..:^^!5~~?~:.\n");    
printf ("\t\t\t\t   .  ~!:.^~~!5?77:\n");      
printf ("\t\t\t\t      .:~^~?7?5Y!.\n");       
printf ("\t\t\t\t       :^^Y5JY55.:~::\n");    
printf ("\t\t\t\t    ~!~777J55G5J?7!557\n");   
printf ("\t\t\t\t    7Y777?JPGGGYG?7~Y?:\n");  
printf ("\t\t\t\t   .YJ: !7YGPPB?~7 ^J5^\n");  
printf ("\t\t\t\t   ~G?. ~^~^?#J~^^.~JY\n");   
printf ("\t\t\t\t   .YJ^. :::YP^..  :JY.\n");  
printf ("\t\t\t\t    ^Y^:  .?!.!    :Y?.\n");  
printf ("\t\t\t\t     !J^  ^^  .    ^5~\n");   
printf ("\t\t\t\t      ^7!          :Y:\n");   
printf ("\t\t\t\t        :.          ^:\n"); 
}