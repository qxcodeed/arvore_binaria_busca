#include <iostream>
#include "binaria/btree.h"
#include "libs/btreeview.h"

using namespace std;

int main()
{
    srand(time(NULL));
    my_player->set_buffer_size(100);
    bstree tree;
    int value;

    for(int i = 0; i < 30; i++){
        value = rand();
        tree.insert(value % 30);
        my_tview->paint_tree(tree.root);
        //my_painel->draw(sf::CircleShape(rand() % 300));
        my_player->show();

    }
    my_player->wait();




    return 0;
}

