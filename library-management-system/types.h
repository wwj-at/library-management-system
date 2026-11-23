#pragma once
#include <string>
#include <ctime>

//存书籍信息
struct bookInfo{
	std::string isbn;
	std::string title;
	std::string author;
	int copyNum;//当前库存数 
	int totalNum;//总数目 
};

//存借阅记录信息
struct recordInfo{
	std::string reader;
	time_t recordTime;//借阅时间 
	bool isReturned;//是否归还 
};

//存借阅信息
struct takeInfo{
	std::string reader;
};


