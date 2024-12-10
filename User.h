#pragma once

#include <string>
#include <vector>
#include <numeric>

#include "SongList.h"
#include "Song.h"

class User {
public:
	void addSongToLove(std::string name);
	void deleteSongInList(int _id, SongList& _songlist);
	void deleteSongList(SongList& _songlist);
	void clear(std::string _name);
	void createSong(std::string _name);
	void createSongList(std::string _name);
	void message(std::string _name);
	//void searchSong();

};
