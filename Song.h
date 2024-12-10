#pragma once
#include <unordered_map>

#include <string>
#include <vector>
#include <numeric>
#include <stdlib.h>


class Song {
public:
	Song();
	Song(std::string _name);
	int showId();
	std::string showName();
private:
	std::string name;
	int sid;
};

typedef struct node	//songMap2存储的结点（可以考虑只存储歌名string节省空间）
{
	Song song;
	struct node* next;
}SM2LinkNode;

std::unordered_map<size_t, Song> songMap1;//id找歌
size_t currentId;

std::unordered_map<size_t, SM2LinkNode> songMap2;//名字找歌
std::hash<std::string>nameHash;