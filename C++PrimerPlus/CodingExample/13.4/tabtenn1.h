//tabtenn0.h -- a table-tennis base class
#ifndef TABTENN0_H_
#define TABTENN0_H_
#include <string>
using std::string;
// simple base class
class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer (const string& fn = "none",
		       const string& ln = "none",
		       bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; };
    void ResetTable(bool v) { hasTable = v; };
};

// simple derived class
class RatedPlayer : public TableTennisPlayer
{
private:
    unsigned int rating;    // add a data member
public:
    RatedPlayer(unsigned int r = 0,
        const string& fn = "none",
        const string& ln = "none",
        bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer& tp);
    unsigned int Rating() const { return rating; }  // 返回选手的评分
    void ResetRating(unsigned int r) { rating = r;}    // 重置选手的评分
};

#endif