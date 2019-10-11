//
// Created by james on 2019-10-11.
//
#include <string>
#include <vector>
#include "Country.h"
#include "Card.h"
#include "Biding.h"
#include "Resource.h"
#include "Player.h"
#include "Army.h"

using namespace std;

Player::Player (int* playerID)
{
    this->playerID = playerID;
    coins = 0;
    score = 0;

    *objCounter++;
    switch (*objCounter)
    {
        case 1:
            *color = "Red";
            break;
        case 2:
            *color = "Blue";
            break;
        case 3:
            *color = "Green";
            break;
        case 4:
            *color = "Yellow";
            break;
        case 5:
            *color = "White";
            break;
        default:
            *color = "";
            break;

    }

    // Add 14 army man to player
    for(int i = 0; i < 14; i++)
    {
        armies.push_back(new Army(playerID, color));
    }
};

int Player::getScore()
{
    return *score;
}

int Player::getCoins()
{
    return *coins;
}

Player::Player (int playerID)
{
    this->playerID = &playerID;
    coins = 0;
//    playerArmies = 0;
}

//void Player::supply()
//{
//    int numbOfPlayers = 0;
//
//    if (numbOfPlayers == 5)
//    {
//        *coins = 8;
//    }
//    else if (numbOfPlayers == 4)
//    {
//        *coins = 9;
//    }
//    else if (numbOfPlayers == 3)
//    {
//        *coins = 11;
//    }
//    else
//    {
//        *coins = 14;
//    }
//}


void Player::payCoins(int* cost)
{
    this->coins = this->coins - *cost;
}

void Player::placeNewArmies()
{}