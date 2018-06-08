#include <iostream>

namespace Anniversary
{
    class Event
    {
        int  year;
        int  month;
        int  day;
        std::string comment;

    public:
        Event(std::string yyyymmdd)
        {
            year  = std::stoi(  yyyymmdd.substr(0,4)  );
            month = std::stoi(  yyyymmdd.substr(3,2)  );
            day   = std::stoi(  yyyymmdd.substr(5,4)  );
        }
        
        // worthless but important getter
        int getYear()   {  return year;  }
        int getMonth()  {  return month; }
        int getDay()    {  return day;   }
        std::string getComment() { return comment; };

        void setComment( std::string );
    };
}