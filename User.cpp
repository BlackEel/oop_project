#include <unordered_map>
#include <iostream>

#include "User.h"
#include "Song.h"

void User::addSongToLove(std::string _name)
{
    size_t hashValue = nameHash(_name); //字符串（歌名）转化为哈希值
    if (songMap2.count(hashValue) == 0)
    {
        SM2LinkNode* L = (SM2LinkNode*)malloc(sizeof(SM2LinkNode));
        L->next = NULL;
        songMap2.emplace(hashValue, L);
        SM2LinkNode *L1 = (SM2LinkNode*)malloc(sizeof(SM2LinkNode));
        L1->song = Song(_name);
        L1->next = NULL;
        L->next = L1;
    }
    else
    {
        SM2LinkNode* L1 = (SM2LinkNode*)malloc(sizeof(SM2LinkNode));
        L1->song = Song(_name);
        L1->next = NULL;
        songMap2[hashValue].next = L1;

    }

    songMap1.emplace(currentId, Song(_name));   //自增ID作为哈希值
    std::cout << "添加歌曲: " << _name << "，ID: " << currentId << std::endl;
    currentId++; //对吗？
}

void deleteSongOfLove(std::string _name)
{
    size_t hashValue = nameHash(_name); //******************************************************查找特定名字的歌
    SM2LinkNode* p = songMap2[hashValue].next;
    while (p != NULL)
    {
        if (p->song.showName() == _name)
        {
            songMap1.erase()
        }
    }
}