#include "Pony.hpp"
#include <iostream>
#include <string>

 void ponyOnTheHeap(void)
 {
	Pony	* red = new Pony("heap");
	delete red;
 }

 void ponyOnTheStack(void)
 {
	Pony	green = Pony("stack");
 }

int			main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}