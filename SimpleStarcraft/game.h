#pragma once

#include "entitycontroller.h"

class Game : public GameObject
{
protected:
    std::vector<std::shared_ptr<Unit>> units;
	std::vector<std::shared_ptr<Structure>> structures;
	std::vector<std::shared_ptr<Resource>> resources;

	std::vector<std::shared_ptr<Entity>> selectedEntities;

	EntityController ec;

	Vector mousePosition;
	Vector selectionStart;
	bool selecting = false;
    
public:
    Game();

	void printSelected() const;

	void setMousePosition(const Vector& mousePosition_);

	void startSelection();

	void endSelection();
    
    void action();

	bool isSelecting() const;
    
    virtual void update(float dt) override;
    
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states = sf::RenderStates::Default) const override;
};