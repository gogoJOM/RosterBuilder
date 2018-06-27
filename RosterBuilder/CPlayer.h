#pragma once
#include <string>
#include "config.h"

class CPlayer {
public:
	CPlayer(const std::string& a_name,
			const int a_pts,
			const double a_value,
			const int a_games,
			const Club a_club);
private:
	std::string m_name;
	int m_pts;
	double m_value;
	int m_games;
	Club m_club;
};