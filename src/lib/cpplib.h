#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>

/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  std::string PrintHelloWorld();

  // Print your self-introduction
  std::string PrintIntro();
  
  // Climbing Stairs
  int climbStairs(int n);
  
  // // Flatten a 2D vector
  std::vector<int> Flatten2DVector(const std::vector<std::vector<int>>&input);
  private : 
};

#endif
