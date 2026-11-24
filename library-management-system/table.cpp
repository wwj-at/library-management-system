#include "table.h"



//插入一本书籍,由文件层调用 
TableStatus insertBook(const bookInfo&){
	return TableStatus::OK;
}

//写入一条借阅记录,由文件层和业务层调用 
TableStatus addRecord(const std::string& isbn,const takeInfo&){
	return TableStatus::OK;
}

//获取所有书籍的数目,由文件层调用 
TableStatus getBookCount(int &num){
	return TableStatus::OK;
}

//获取所有书籍的信息，会先清空传入的vector，由文件层调用 
TableStatus collectAllBooks(std::vector<bookInfo>&){
	return TableStatus::OK;
}

//获取某本书的所有借阅记录,由文件层和业务层调用 
TableStatus collectRecord(const std::string& isbn,std::vector<recordInfo>&){
	return TableStatus::OK;
}

//获取某本书的信息，由业务层调用 
TableStatus findBook(const std::string& isbn,bookInfo&){
	return TableStatus::OK;
}

//取出一本书，由业务层调用
TableStatus takeOneCopy(const std::string& isbn){
	return TableStatus::OK;
}

//放回一本书，由业务层调用(依赖closeRecord先校验)
TableStatus putBackOneCopy(const std::string& isbn){
	return TableStatus::OK;
}

//将借阅记录标为已还，由业务层调用
TableStatus closeRecord(const std::string& isbn,const takeInfo&){
	return TableStatus::OK;
}






