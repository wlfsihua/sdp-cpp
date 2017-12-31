/* -----------------------------------------------------------------------------
 * Rule_reg_name.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_reg_name_hpp
#define Rule_reg_name_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_reg_name : public Rule
{
public:
  Rule_reg_name(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_reg_name(const Rule_reg_name& rule);

  Rule_reg_name& operator=(const Rule_reg_name& rule);

  const Rule_reg_name* clone(void) const;

  static const Rule_reg_name* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */