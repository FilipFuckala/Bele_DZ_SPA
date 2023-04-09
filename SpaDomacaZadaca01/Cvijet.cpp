#include "Cvijet.h"

Cvijet::Cvijet(RenderWindow* window)
{
	this->window = window;
}

void Cvijet::make_sun()
{
	// ovo je sunce u pozadini
	CircleShape sun(45.f, 20);
	sun.setFillColor(Color::Yellow);
	sun.setPosition(35.f, 35.f);
	sun.setOutlineThickness(5.f);
	sun.setOutlineColor(Color::Red);
	window->draw(sun);
}

void Cvijet::make_pestle()
{
	// ovo je tucak cvijeta
	CircleShape pestle(70.f, 70);
	pestle.setFillColor(Color::Green);
	pestle.setPosition(342.f, 80.f);
	pestle.setOutlineColor(Color::Yellow);
	pestle.setOutlineThickness(80.f);
	window->draw(pestle);
}

void Cvijet::make_line()
{
	//ovo je sabljuka cvijeta
	RectangleShape line(Vector2f(25.f, 300.f));
	line.setPosition(400.f, 300.f);
	line.setFillColor(Color::Green);
	window->draw(line);
}

void Cvijet::make_leaf1()
{
	//ovo je desni list
	ConvexShape leaf1(4);
	leaf1.setFillColor(Color::Green);
	leaf1.setPosition(300.f, 300.f);
	leaf1.setPoint(0, Vector2f(100.f, 200.f));
	leaf1.setPoint(1, Vector2f(250.f, 100.f));
	leaf1.setPoint(2, Vector2f(400.f, 100.f));
	leaf1.setPoint(3, Vector2f(250.f, 200.f));
	window->draw(leaf1);
}

void Cvijet::make_leaf2()
{
	//ovo je lijevi list
	ConvexShape leaf2(4);
	leaf2.setFillColor(Color::Green);
	leaf2.setPosition(330.f, 700.f);
	leaf2.setPoint(0, Vector2f(250.f, 200.f));
	leaf2.setPoint(1, Vector2f(400.f, 100.f));
	leaf2.setPoint(2, Vector2f(250.f, 100.f));
	leaf2.setPoint(3, Vector2f(100.f, 200.f));
	leaf2.rotate(230);
	window->draw(leaf2);
}

void Cvijet::draw()
{
	make_sun();
	make_pestle();
	make_line();
	make_leaf1();
	make_leaf2();
}
