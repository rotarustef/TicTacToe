#include "../include/game.h"

//if(strcmp(argv[1],"-e")==0){
const char menu[] = {"Usage TTT.exe [options]\n"
    "Options:\n"
    "  --help\tDisplay the help message.\n"
    "  --level\tSet a difficulty level(1-10).\n"
    "  --version\tDisplay the game version.\n"
    "  --howto\tExplains the game."};
    
const char info[] ={
        "   -------------\n"
        "3  | X |   |   |\n"
        "   -------------\n"
        "2  |   | O |   |\n"
        "   -------------\n"
        "1  | X |   |   |\n"
        "   -------------\n"
        "     1   2   3"
    };
    







int main(int argc, char *argv[], char **envp) {
    Game TTT;
    Entity player;

    TTT.initGame(player);

    if (player.bot()) {
        Entity player2;
        std::cout << "Player2: " << std::endl;
        player2.setInfo();
    }
    else {
        Entity bot("Bot", 1, 0, 1);
    }



    char map[MAX_MAP][MAX_MAP];
    TTT.clearMap(map);
    //TTT.displayMap(map, size);
    

    TTT.writeMap(map);



     

    //puts(info);




    // if (argc != 1){
    //     std::cout << "argc: %d | argv: %s", argc, argv[1]);
    //     printf_s( "\nEnvironment variables:\n" );
    //     while( *envp != NULL )
    //         printf_s( "  %s\n", *(envp++) );
    // }
    
    // const char *str = "--l test -f test";
    // std::cout << "Opt: %c", getopt(argc,argv,"l"));
    

    return 0;
}

