#ifndef __SONG_H__
#define __SONG_H__

#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include "priority_queue.h"

using namespace std;

class Song {
  public:
    std::string artist,title;
    int count;

    Song() { }
    Song(const Song &s) : artist(s.artist), title(s.title), count(s.count) { }
    Song(std::string artist,std::string title,int count) :  artist(artist), title(title), count(count) { }

    friend std::ostream& operator<<(std::ostream &out,const Song &s) {
      return out << "Artist: " << s.artist << " Title: " << s.title << " count: " << s.count;
    }

};

//  you have to write something below this line 
//  you *MIGHT* have to change the declaration of pq1 and pq2
struct comp1{
  bool operator() (Song &a, Song &b){
    return (a.artist > b.artist || (a.artist == b.artist && a.title > b.title));
  }
};
struct comp2{
   bool operator() (Song &a, Song &b){
    return (a.count < b.count || (a.count == b.count && a.artist > b.artist) || (a.count == b.count && a.artist == b.artist && a.title > b.title));
  }
};
CP::priority_queue<Song,comp1> pq1;
CP::priority_queue<Song,comp2> pq2;

#endif
