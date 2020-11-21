#ifndef LEPTJSON_H__
#define LEPTJSON_H__
/* 定义一个lept_type 枚举类型 其取值只能是以下变量 */
typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT } lept_type;
/* 定义一个结构体lept_value */
typedef struct {
    lept_type type;
}lept_value;
/*
OK              代表成功
EXPECT          代表空格
INVALID         代表非法值
NOT_SINGULAR    代表字符串不唯一
*/
enum {
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};
/* 这里传入一个字符串指针json进行解析， V 是根节点指针 */
int lept_parse(lept_value* v, const char* json);

lept_type lept_get_type(const lept_value* v);

#endif /* LEPTJSON_H__ */
