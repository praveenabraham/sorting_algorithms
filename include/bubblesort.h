#ifndef BUBBLE_SORT_H_
#define BUBBLE_SORT_H_

namespace sorting {

  template <typename It, typename Pred=std::less<typename std::iterator_traits<It>::value_type>>
  void BubbleSort(It begin, It end, Pred pred=Pred()) {

    if (std::distance(begin, end) < 1)
      return;

    bool swap = true;
    auto ite  = end;

    while (swap) {
      swap = false;
      std::advance(ite, -1);

      for (auto it=begin; it!=ite; ++it) {
        auto next = std::next(it, 1);
        if (pred(*next, *it)) {
          std::swap(*it, *next);
          swap = true;
        }
      }
    }

  }

}

#endif
