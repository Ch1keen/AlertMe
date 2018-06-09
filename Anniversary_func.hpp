#include "Anniversary.hpp"

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
    else
    {
        this->comment = comment;
    }

    return;
}