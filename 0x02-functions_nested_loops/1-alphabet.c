/*
 * File: 1-alphabet.c
 * Auth: Annie Pulcherie
 */

#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	while (letter <= 'z'){
		_putchar(letter);
		letter++;
	  }
	
	_putchar('\n');
}
