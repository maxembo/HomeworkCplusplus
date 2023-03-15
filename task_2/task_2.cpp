#include <iostream>
#include "Components.h"

int main()
{
	Window* window = new Window();
	Panel* panel = new Panel();
	Inscription* inscription = new Inscription();
	Button* button = new Button();
	List* list = new List();
	Line* line = new Line();

	window->AddComponent(line);
	window->AddComponent(button);
	panel->AddComponent(button);
	panel->AddComponent(list);
	window->AddComponent(inscription);

	window->Print();
	panel->Print();

	delete window;
	delete panel;
	delete inscription;
	delete button;
	delete list;
	delete line;
	return 0;
}