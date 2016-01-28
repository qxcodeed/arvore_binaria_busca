#ifndef BTREE_H
#define BTREE_H

#include <sstream>

#include <iostream>
#include "node.h"
#include "../libs/btreeview.h"


//arvore binaria de busca
class bstree
{

public:
    bnode * root{nullptr};

    bstree()
    {
    }

    //construtor de copia
    //btree(const btree &other);

    //desaloca todos os nós
    ~bstree(){
        this->clear();
    }

    void gambi_fill(){
        root = new bnode(6);
        root->left = new bnode(3);
        root->left->right = new bnode(4);
        auto nove = new bnode(9);
        root->right = nove;
        nove->left = new bnode(7);
        nove->right = new bnode(10);
        nove->right->right = new bnode(11);
    }

//    //retorna a quantidade de elementos da arvore
//    int size();

//    //retorna a altura da arvore
//    int altura();

//    //preenche o vetor utilizando o percurso pre-order
//    //std::vector<int> pre_order();

//    //imprime a arvore na saida padrao
//    void print();

//    //imprime a arvore formatada
//    void printTree();

    bnode * _insert(bnode *node, int value){
        if(node == nullptr)
            return new bnode(value);

        //o seguinte comando desenha a arvore
        my_tview->paint_tree(root);
        //o seguinte comando desenha o no em superposicao dada a cor, o valor
        //e o no sobre o qual ele deve estar em cima
        my_tview->focus_node(node, 'b', value);
        //o seguinte comando mostra o que foi desenhado
        my_player->show();

        if(value > node->value)
            node->right = _insert(node->right, value);
        if(value < node->value)
            node->left = _insert(node->left, value);
        return node;
    }

    //insere o valor usando o algoritmo de inserção
    //em árvore binária de busca
    void insert(int value){
        root = _insert(root, value);
    }

//    //gera uma string que representa a árvore
//    std::string serialize();

//    //apaga a arvore atual e monta uma nova árvore através da string
//    //que foi resultado da serialização
//    void load(std::string tree);
    
    void _clear(bnode *node){
        if(node == nullptr)
            return;
        _clear(node->left);
        _clear(node->right);
        delete(node);
    }

//    //apaga e desaloca todos os nós da árvore incluindo o root
//    //é utilizado no destrutor e antes do load
    void clear(){
        _clear(root);
        root = nullptr;
    }

//    //metodo para recursao recursiva
//    bnode *_remove(bnode *node, int value);

//    //remove a chave usando o algoritmo de remoção em árvore binária
//    //de busca
//    bool remove(int value);

//    //busca o no utilizando o algoritmo da busca em árvore binária de busca
//    bnode *find(int value);

//    //retorna a altura do no passado
//    int altura_node(bnode * node);

//    //retorna a soma de todos os elementos a partir de node incluindo node
//    int soma(bnode * node);

//    //retorna o menor nó de uma árvore não ordenada
//    bnode * min(bnode * node);

//    //inverte os nós filhos da esquerda com os da direita
//    void reflexao(bnode * node);

//    //a arvore eh balanceada se a diferenca entre as alturas dos filhos
//    //esquerda e direita for máximo 1
//    int eh_balanceada();
};















#endif // BTREE_H
