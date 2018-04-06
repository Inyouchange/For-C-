#ifndef DeckOfCards_h
#define DeckOfCards_h
#include <vector>
#include "Card.h"
using namespace std;

class DeckOfCards {
public:
	DeckOfCards();
	void shuffle(int times);
	Card dealCard();
	bool moreCard();
private:
	vector<Card> deck;
	int currentCard = 0;
};
#endif
