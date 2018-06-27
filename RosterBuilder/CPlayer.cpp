#include "CPlayer.h"

CPlayer::CPlayer(const std::string& a_name,
				 const int a_pts,
				 const double a_value,
				 const int a_games,
				 const Club a_club)
				: m_name(a_name)
				, m_pts(a_pts)
				, m_value(a_value)
				, m_games(a_games)
				, m_club(a_club)
{}