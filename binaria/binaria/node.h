#ifndef NODE_H
#define NODE_H

#include <SFML/System/Vector2.hpp>

//essas variaveis sao utilizadas para o desenho
struct nodeview{
    sf::Vector2f _pos;
    float _asa_esq;
    float _asa_dir;
    char color{'g'};
};

struct bnode : public nodeview{
    bnode(int value){
        this->value = value;
    }

    int value;
    bnode *left{nullptr};
    bnode *right{nullptr};
};
#endif // NODE_H
