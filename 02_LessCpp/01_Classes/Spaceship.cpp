#include "Spaceship.h"

Spaceship::Spaceship() {
	m_Alive = true;
	m_Ammo = 100;
	m_Health = 100;
}

Spaceship::Spaceship(int a_Health, int a_Ammo)
	:	m_Alive(true),
		m_Health(m_Health),
		m_Ammo(a_Ammo)
{}

Spaceship::~Spaceship() {

}

//TODO copy constructor
//TODO Destructor

int Spaceship::Shoot() {
	m_Ammo -= 10;

	return 10 * 2;
}

// Test with class
// Get rid of magic numbers
// Prove it works