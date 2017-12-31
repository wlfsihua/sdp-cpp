/* -----------------------------------------------------------------------------
 * Rule_extn_addr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_extn_addr_hpp
#define Rule_extn_addr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_extn_addr : public Rule
{
public:
  Rule_extn_addr(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_extn_addr(const Rule_extn_addr& rule);

  Rule_extn_addr& operator=(const Rule_extn_addr& rule);

  const Rule_extn_addr* clone(void) const;

  static const Rule_extn_addr* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */