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
        Event(std::string yyyymmdd, std::string title, std::string comment);
        
        // worthless but important getter
        int getYear();
        int getMonth();
        int getDay();
        std::string getTitle();
        std::string getComment();

        void setComment( std::string title );
    };
}