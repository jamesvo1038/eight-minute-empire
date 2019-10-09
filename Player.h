#pragma once
#include <vector>
#include <string>
#include "Cards.h"

// Class that represents a player, playable character in the game
class Player
{
	// All the private variables can only be accessed internally
private:
	// Player id
	int* id;
	// Player Score
	int* score = 0;
	// Player Counter
	int* objCounter = 0;
	
	std::vector<Resource*> resources; /**the resources that a given player has.*/
	std::vector<City*> cities; /**the cities that a player owns.*/
	std::vector<Army*> armies; /**the armies that a player has.*/
	std::vector<Card*> cards; /**the cards that a player has.*/
	int* coins;
	
public:

	/**Default Constructor*/
	Player();

	/**Set the player up with their colour*/
	Player(std::string);

	/**Get the amount of money a player has*/
	int getPlayersMoney();

	/**Get the colour for a given player*/
	std::string getPlayerColour();

	/**Pay Coin*/
	void payCoins(int amount)

	/**Armies Destructor*/
	void destroyArmy();

	/**The resource for the player by type*/
	Resource* getResourceByType(std::string);

	/**Get all resources that a player own*/
	std::vector<Resource*> getResources();

	/**Buy a resource for a given player*/
	bool buyResources(Resource* res);

	/**Place a resource, ie remove a resource for the player*/
	Resource* placeResource(std::string res);

	/**Get all the cities a player owns*/
	std::vector<City*> getCities();

	/**Build a city and add it to the owned cities*/
	bool buildCity(City* city);

	/**Get all the countries that a player owns*/
	std::vector<Countries*> getCountries;

	/*Set the colour of the player*/
	void setPlayerColor(std::string c);

	/*Return the number of countries a player possesses*/
	int getNbCountries();

	/*Prints the player's Name, Money, Cities, Armies*/


	/*PayCoin(), PlaceNewArmies(), MoveArmies(),
MoveOverLand(). BuildCity(), and DestroyArmy().*/
};

