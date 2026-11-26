#pragma once
#include "status.h"
#include "types.h" 
#include <string>
#include <vector>

// 本模块内部维护唯一的哈希表实例，外部只能通过以下函数访问
TableStatus insertBook(const bookInfo&);//插入一本书籍,由文件层调用 
TableStatus addRecord(const std::string& isbn,const recordInfo&);//写入一条借阅记录,由文件层和业务层调用 
TableStatus getBookCount(int &num);//获取所有书籍的数目,由文件层调用 
TableStatus collectAllBooks(std::vector<bookInfo>&);//获取所有书籍的信息，会先清空传入的vector，由文件层调用 
TableStatus collectRecord(const std::string& isbn,std::vector<recordInfo>&);//获取某本书的所有借阅记录,由文件层和业务层调用 
TableStatus findBook(const std::string& isbn,bookInfo&);//获取某本书的信息，由业务层调用 
TableStatus takeOneCopy(const std::string& isbn);//取出一本书，由业务层调用
TableStatus putBackOneCopy(const std::string& isbn);//放回一本书，由业务层调用(依赖closeRecord先校验)
TableStatus closeRecord(const std::string& isbn,const takeInfo&);//将借阅记录标为已还，由业务层调用
