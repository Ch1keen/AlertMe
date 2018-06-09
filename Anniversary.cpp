#include "Anniversary.hpp"

// worthless but important 'getter'
int         Anniversary::Event::getYear()    {  return year;  }
int         Anniversary::Event::getMonth()   {  return month; }
int         Anniversary::Event::getDay()     {  return day;   }
std::string Anniversary::Event::getTitle()   {  return title; };
std::string Anniversary::Event::getComment() {  return comment; };

Anniversary::Event::Event(std::string yyyymmdd,
                          std::string title,
                          std::string comment)
{
    year  = std::stoi(  yyyymmdd.substr(0,4)  );
    month = std::stoi(  yyyymmdd.substr(4,2)  );
    day   = std::stoi(  yyyymmdd.substr(6,2)  );

    this->title = title;
    Anniversary::Event::setComment( comment );
}
        
void Anniversary::Event::setComment( std::string comment )
{
    if( !comment.compare("") )
    {
        {
        comment += std::to_string(year);
            comment += "년 ";
            comment += std::to_string(month);
            comment += "월 ";
            comment += std::to_string(day);
            comment += "일 오늘은 ";
            comment += title;
            comment += "의 생일입니다.\n";
            comment += "축하해줍시다.";
        }
    }
    this->comment = comment;

    return;
}