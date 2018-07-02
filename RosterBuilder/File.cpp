#include "File.h"
#include <fstream>
#include <cmath>

void read_info(vec_player& a_data, const std::string& a_filename)
{
	std::ifstream infile(a_filename);

	std::string name;
	int pts, games, club;
	double pts_per_game;

	while (infile >> name >> pts >> pts_per_game >> club) {
		games = round(1.0 * pts / pts_per_game);
		a_data.push_back(CPlayer(name, pts, 0.0, games, static_cast<Club>(club)));
	}
}