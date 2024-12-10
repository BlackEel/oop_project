#pragma once

#include <string>
#include <vector>
#include <numeric>

#include "Song.h"

class SongList {
public:
	SongList(std::string _listname);
	void addSongToList(std::string _name);
	void deleteSongInList(int _id, std::vector<Song>& _songlist);
	virtual void removeList();
private:
	std::string listname;
	std::vector<Song> Songs;
};

SongList::SongList(std::string _listname)
{
	listname = _listname;
}

class LoveList : public SongList {
public:
	virtual void removeList();

};

