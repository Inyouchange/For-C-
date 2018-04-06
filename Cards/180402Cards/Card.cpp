#include "stdafx.h"
#include <iostream>
#include "Card.h" 
#include <string>
#include <stdio.h>
using namespace std;
string const Card::faceNames[] = {
	"Ace", "Deuce", "Three", "Four",
	"Five", "Six", "Seven", "Eight",
	"Nine", "Ten", "Jack", "Queen", "King" };

string const Card::suitNames[] = {
	"Spades", "Hearts", "Diamonds", "Clubs" };

Card::Card(int face, int suit) {
	this->face = face;
	this->suit = suit;
}

int Card::getFace() const {
	return face;
}

int Card::getSuit() const {
	return suit;
}
string Card::toString() {
	return suitNames[suit] + " of " + faceNames[face];
}