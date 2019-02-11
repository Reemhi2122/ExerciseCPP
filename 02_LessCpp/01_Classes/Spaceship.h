#pragma once

class Spaceship 
{
public:
	Spaceship();
	Spaceship(int a_Health, int a_Ammo);
	Spaceship(Spaceship& ship);

	~Spaceship();

	void Hit(int a_Dmg);
	int Shoot();

	int GetHealth();
	int GetAmmo();
	bool IsAlive();

private:
	int m_Health;
	int m_Ammo;
	bool m_Alive;

};