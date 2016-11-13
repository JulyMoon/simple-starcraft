#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

class Vector
{
private:
	float x;
	float y;

public:
	Vector(float x = 0, float y = 0);

	Vector(float angle, float length, int);
	
	Vector(const sf::Vector2i& a);

	float getX() const;

	float getY() const;

	float getAngle() const;

	float getLength() const;

	Vector& operator+=(const Vector& a);

	Vector& operator-=(const Vector& a);

	Vector& operator*=(float a);

	const Vector operator+(const Vector& a) const;

	const Vector operator-(const Vector& a) const;

	float operator*(const Vector& a) const;

	const Vector operator*(float a) const;

	const Vector operator-() const;

	bool operator==(const Vector& a) const;

	bool operator!=(const Vector& a) const;

	friend std::ostream& operator<<(std::ostream& a, const Vector& b);

	const Vector normalized() const;
};