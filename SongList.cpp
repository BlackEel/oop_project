#include <string>
#include <vector>
#include <numeric>

#include "Song.h"
#include "SongList.h"

void SongList::addSongToList(std::string _name)	//������������赥�����Ľ���
{
	Song song(_name);
	Songs.push_back(song);
}

void SongList::deleteSongInList(int _id, std::vector<Song>& _songlist)
{
	for (auto iter = _songlist.begin(); iter != _songlist.end(); iter++)
	{
		if ((*iter).showId() == _id)
		{
			_songlist.erase(iter);
		}
	}
}

void LoveList::removeList()
{

}