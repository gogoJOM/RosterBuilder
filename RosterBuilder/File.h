#pragma once
#include <vector>
#include "CPlayer.h"

typedef std::vector<CPlayer> vec_player;

void read_info(vec_player& a_data, const std::string& a_filename);