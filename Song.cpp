#include <string>
#include <vector>
#include <numeric>

#include "Song.h"

Song::Song(std::string _name)
{
	name = _name;
	sid = currentId;
}

int Song::showId()
{
	return sid;
}

std::string Song::showName()
{
	return name;
}

void searchSong()
{

}

