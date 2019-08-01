
#include <cstdio>
#include <string>
//Header file for parser
#include "exprtk.hpp"
#include <iostream>
#include<vector>

using namespace std;

//The parser uses templates
template <typename T>
double *function_x(string c)
{
   //Declarations
   std::string expression_string = c;

   T x;
   exprtk::symbol_table<T> symbol_table;
   symbol_table.add_variable("x",x);

   exprtk::expression<T> expression;
   expression.register_symbol_table(symbol_table);

   exprtk::parser<T> parser;
   parser.compile(expression_string,expression);

   //Dynamically allocating array for passing array to main function
   double *y_value = new double[20001];
   int i;

   for (x = T(-6), i = 0; x <= T(6); x += T(0.001), i++)
   {
      //We have to use explicit type casting to convert the T data type to double;
      y_value[i] = double(expression.value());
      //For debugging
      //cout << y_value[i] << endl;

   }

   return y_value;

}
