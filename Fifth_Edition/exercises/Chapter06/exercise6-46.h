// Requirements for constexpr functions:
//
//   * the return type and the type of each parameter must be a literal.
//   * the function body must contain exactly one return statement.
//
// Here, string is not a literal type, so the function cannot be a constexpr
// function.

#include <string>

constexpr bool isShorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}
