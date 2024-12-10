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

typedef struct node	//songMap2�洢�Ľ�㣨���Կ���ֻ�洢����string��ʡ�ռ䣩
{
	Song song;
	struct node* next;
}SM2LinkNode;

std::unordered_map<size_t, Song> songMap1;//id�Ҹ�
size_t currentId;

std::unordered_map<size_t, SM2LinkNode> songMap2;//�����Ҹ�
std::hash<std::string>nameHash;