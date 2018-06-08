#include <iostream>

namespace Anniversary
{
    class Event
    {
        int  year;
        int  month;
        int  day;
        std::string title;
        std::string comment;

    public:
        Event(std::string yyyymmdd, std::string title="", std::string comment="")
        {
            year  = std::stoi(  yyyymmdd.substr(0,4)  );
            month = std::stoi(  yyyymmdd.substr(4,2)  );
            day   = std::stoi(  yyyymmdd.substr(6,2)  );

            this->title = title;
            this->comment = comment;
        }
        
        // worthless but important getter
        int getYear()   {  return year;  }
        int getMonth()  {  return month; }
        int getDay()    {  return day;   }
        std::string getComment() { return comment; };

        void setComment( std::string );
    };
}