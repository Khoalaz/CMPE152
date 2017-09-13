#include "Token.h"

token::token()
{
	text = "";
	value = NULL;
}


/*
	Calls the superclass 'source' for its currentChar function
*/

char token::currentChar()
{
	return source::currentChar();
}


/*
	Calls the superclass 'source' for its nextChar function
*/
char token::nextChar()
{
	return source::nextChar();
}


