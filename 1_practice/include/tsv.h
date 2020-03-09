#ifndef INC_1_PRACTICE_TSV_H
#define INC_1_PRACTICE_TSV_H

#include <string>

namespace tsv
{

std::string getColumn(const std::string& line, size_t pos);

void setColumn(std::string& line, size_t pos, const std::string& value);

void deleteColumn(std::string& line, size_t pos);

}

#endif //INC_1_PRACTICE_TSV_H
