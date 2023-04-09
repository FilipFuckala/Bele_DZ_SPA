#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Cvijet
{
private:
	RenderWindow* window;

public:
	Cvijet(RenderWindow* window);
	void make_sun();
	void make_pestle();
	void make_line();
	void make_leaf1();
	void make_leaf2();
	void draw();

};

