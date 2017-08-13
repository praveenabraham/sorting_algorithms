#ifndef SORTING_UTILS_H_
#define SORTING_UTILS_H_

namespace sorting {
  namespace utils {

    template <typename C>
    void Print(const C& container) {
      for (auto i: container) {
        std::cout << i << " ";
      }
      std::cout << std::endl;
    }

  }
}

#endif
