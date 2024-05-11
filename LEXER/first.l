%option noyywrap

%{
#include <stdio.h>
%}

%%
"int"                   { printf("Keyword: %s\n", yytext); }
"float"                 { printf("Keyword: %s\n", yytext); }
"char"                  { printf("Keyword: %s\n", yytext); }
"if"                    { printf("Keyword: %s\n", yytext); }
"else"                  { printf("Keyword: %s\n", yytext); }
"while"                 { printf("Keyword: %s\n", yytext); }
"for"                   { printf("Keyword: %s\n", yytext); }
"return"                { printf("Keyword: %s\n", yytext); }
"("                     { printf("Open Parenthesis\n"); }
")"                     { printf("Close Parenthesis\n"); }
"{"                     { printf("Open Brace\n"); }
"}"                     { printf("Close Brace\n"); }
";"                     { printf("Semicolon\n"); }
","                     { printf("Comma\n"); }
[0-9]+                  { printf("Number: %s\n", yytext); }
[a-zA-Z_][a-zA-Z0-9_]*  { printf("Identifier: %s\n", yytext); }
"//"(.)*\n     ;            { / Ignore comments */ }
[ \t\n]+       ;               { / Ignore single-line comments */ }
.                       { /* Ignore other characters */ }
%%

int main() {
    yylex();
    return 0;
}