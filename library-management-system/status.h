#pragma once
enum class TableStatus{
	OK,//成功 
	NOT_FOUND,//键不存在 
	DUPLICATE,//键已存在 
	NO_COPY,//库存已为零  
	NO_UNRETURNED,//没有未还的记录 
	OUT_OF_MEMORY//分配失败 
};

enum class BusinessStatus{
	OK,//借阅成功
	BOOK_NOT_FOUND,//没有这本书
	NO_AVAILABLE_COPY,//这本书暂时都已借出
	ALREADY_BORROWED_BY_USER,//已被同一人借阅，不能再借
	NO_ACTIVE_RECORD,//这本书没有被借出过
	INVALID_INPUT,//借阅人不能为空
	INTERNAL_ERROR,//系统错误
};

enum class FileStatus{
	OK,//成功 
	CANNOT_OPEN,//文件打开失败 
	WRITE_FAILED//文件写入失败 
};

/*
这边给Z写其加载文件时的返回结构体 ，读入几本 / 跳过几行 / 首个坏行行号 
*/ 

