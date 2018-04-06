#include "stdafx.h"
#include <iostream>
#include "DeckOfCards.h"
#include <time.h>
#include <stdio.h>

DeckOfCards::DeckOfCards() {
	for (int suit1 = 0; suit1 < 4; suit1++)
		for (int face1 = 0; face1 < 13; face1++)
			deck.push_back(Card(face1, suit1));
}

void DeckOfCards::shuffle(int times) {
	//Use the seed to random
	unsigned seed = (unsigned)time(NULL);
	srand(seed);

	int take;
	for (int i = 0; i < times; i++) {
		take = rand() % 52;
		Card temp = deck[0];
		deck[0] = deck[take];
		deck[take] = temp;
	}
}

Card DeckOfCards::dealCard() {
	if (moreCard()) {
		currentCard++;
	}
	return deck[currentCard - 1];
}

bool DeckOfCards::moreCard() {
	bool m = false;
	if (currentCard<52) {
		m = true;
	}
	else {
		m = false;
	}
	return m;
}