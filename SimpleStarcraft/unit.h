#pragma once

#include "entity.h"

class Unit : public Entity
{
protected:
	Vector destination;
	Vector moveVector;
	float moveSpeed;
	bool moving = false;

	Unit(const Vector& position_, int size_, float maxHealth_, float moveSpeed_, const sf::Color& color_, const EntityType& type_);

public:
    virtual void update(float dt) override;
	
	virtual void move(const Vector& location);

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states = sf::RenderStates::Default) const override;
	
	float getMovespeed() const;
	
	bool isMoving() const;
};