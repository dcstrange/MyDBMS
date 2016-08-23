#include "stdlib.h"
#include "string.h"

// 属性类型
enum ATTR_TYPE
{
    INT  = 1,
    SHORT = 2,
    LONG = 3,
    FLOAT = 4,
    DOUBLE = 5,
    CHAR = 6,
    BYTE = 7,
    DATE = 8,
    TIME = 9,
    BLOB = 100
    UNKNOW = 0
};

// 关系中单个属性信息
struct AttributeDesc
{
    char attr_name[50];
    long attr_size;
    int attr_type;
    int attr_isfixsize;
};

// Create an specific  attribute description item 
struct AttributeDesc CreateAttrDesc(char * name, long size,enum ATTR_TYPE type, int isfixsize)
{
    struct AttributeDesc attrDesc;
    strcpy(attrDesc.attr_name,name);
    attrDesc.attr_size = size;
    attrDesc.attr_type = type;
    attrDesc.attr_isfixsize = isfixsize;
    return attrDesc;
}
