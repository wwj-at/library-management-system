#pragma once
#include "status.h"
#include "types.h"
#include <vector>

//存bookInfo和这本书的借阅记录records[]
struct bookDetail{
	bookInfo book;
	std::vector<recordInfo> records;
};
