#include "Entity.h"
#include "BEngine.h"

#include <iostream>

Entity::Entity()
{
	x = 0;
	y = 0;
	width = 0;
	height = 0;
	layer = 0;
	this->type = "none";
}

Entity::Entity(double x, double y)
{
	this->x = x;
	this->y = y;
	width = 0;
	height = 0;
	layer = 0;
	this->type = "none";
}

void Entity::added()
{
	//
}

void Entity::update()
{
	//
}

void Entity::removed()
{
	//
}

void Entity::render(sf::RenderTexture* Buffer)
{
	sf::RectangleShape rect(sf::Vector2f(width, height));
	rect.setFillColor(sf::Color(255, 40, 255, 255));
	rect.setPosition(this->x, this->y);
	Buffer->draw(rect);
}

bool Entity::collide(std::string type, double x, double y)
{
	int width = this->width;
	int height = this->height;

	return BEngine::world()->collide(type, x, y, width, height);
}
