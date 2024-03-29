#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


bool isDelimiter(char ch) {
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}' ||
        ch == '{' || ch == '}' || ch == '(' || ch == ')') {
        return true;
    }
    return false;
}



bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == '>' || ch == '<' ||
        ch == '=')
        return (true);
    return (false);
}


bool validIdentifier(char* str)
{
    if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
        str[0] == '3' || str[0] == '4' || str[0] == '5' ||
        str[0] == '6' || str[0] == '7' || str[0] == '8' ||
        str[0] == '9' || isDelimiter(str[0]) == true)
        return (false);
    return (true);
}


bool isKeyword(char* str)
{

    if (!strcmp(str, "if") || !strcmp(str, "else") ||
        !strcmp(str, "while") || !strcmp(str, "do") ||
        !strcmp(str, "break") ||!strcmp(str, "continue") || !strcmp(str, "int")
        || !strcmp(str, "double") || !strcmp(str, "float")
        || !strcmp(str, "return") || !strcmp(str, "char")
        || !strcmp(str, "case") || !strcmp(str, "char")
        || !strcmp(str, "sizeof") || !strcmp(str, "long")
        || !strcmp(str, "short") || !strcmp(str, "typedef")
        || !strcmp(str, "switch") || !strcmp(str, "unsigned")
        || !strcmp(str, "void") || !strcmp(str, "static")
        || !strcmp(str, "struct") || !strcmp(str, "goto")
        || !strcmp(str, "#include"))
        return (true);
    return (false);
}


bool isInteger(char* str)
{
    int i, len = strlen(str);

    if (len == 0)
        return (false);
    for (i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2'
            && str[i] != '3' && str[i] != '4' && str[i] != '5'
            && str[i] != '6' && str[i] != '7' && str[i] != '8'
            && str[i] != '9' || (str[i] == '-' && i > 0))
            return (false);
    }
    return (true);
}


bool isRealNumber(char* str)
{
    int i, len = strlen(str);
    bool hasDecimal = false;

    if (len == 0)
        return (false);
    for (i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2'
            && str[i] != '3' && str[i] != '4' && str[i] != '5'
            && str[i] != '6' && str[i] != '7' && str[i] != '8'
            && str[i] != '9' && str[i] != '.' ||
            (str[i] == '-' && i > 0))
            return (false);
        if (str[i] == '.')
            hasDecimal = true;
    }
    return (hasDecimal);
}


char* subString(char* str, int left, int right)
{
    int i;
    char* subStr = (char*)malloc(
                sizeof(char) * (right - left+2));

    for (i = left; i <= right; i++)
        subStr[i - left] = str[i];
    subStr[right - left + 1] = '\0';
    return (subStr);
}


void parse(char* str) {
    int left = 0, right = 0;
    int len = strlen(str);

    while (right <= len && left <= right) {
        if (!isDelimiter(str[right])) {
            right++;
        } else if (left == right) {
            if (isOperator(str[right])) {
                printf("Type: OPERATOR, '%c'\n", str[right]);
            } else if (str[right] == '<' || str[right] == '>' ||
                       str[right] == '{' || str[right] == '}' ||
                       str[right] == '(' || str[right] == ')') {
                printf("Type: DELIMITER, '%c'\n", str[right]);
            }
            right++;
            left = right;
        } else if (right == len || left != right) {
            char* subStr = subString(str, left, right - 1);

            if (isKeyword(subStr)) {
                printf("Type: KEYWORD, '%s'\n", subStr);
            } else if (isInteger(subStr)) {
                printf("Type: CONSTANT, '%s'\n", subStr);
            } else if (validIdentifier(subStr)) {
                printf("Type: IDENTIFIER, '%s'\n", subStr);
            } else {
                printf("Type: NOT IDENTIFIER, Lexeme: '%s'\n", subStr);
            }
            left = right;
        }
    }
}


int main()
{

    char str[100];
    printf("Enter the String: \n");
    scanf("%[^\n]s", &str);
    parse(str);

    return (0);
}
