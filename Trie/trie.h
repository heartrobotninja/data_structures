/* A standard implementation of an ASCII trie. */
#ifndef TRIE_H_
#define TRIE_H_

#include <string>
#include <vector>

namespace hrn {

struct TrieNode {
  TrieNode(char _c) : c(_c);
  TrieNode parent;
  std::vector<TrieNode> children;
  char c;
  bool terminal;
}

// Create Iterator Class for Traversing Dictionary

class Trie {
 public:
  void Insert(std::string s);
  bool Search(std::string s);
  bool Delete(std::string s);
  bool Partial(std::string s);

 private:
  TrieNode root;
}
}  // namespace hrn
#endif  // TRIE_H_