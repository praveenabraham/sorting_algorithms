#ifndef _INSERTION_SORT_H
#define _INSERTION_SORT_H

namespace sorting {
  template <typename It, typename Pred=std::less<typename std::iterator_traits<It>::value_type>>
  void InsertionSort(It begin, It end, Pred pred=Pred())
  {
    if (std::distance(begin, end) < 1)
      return;

    for (auto it=std::next(begin, 1); it!=end; ++it)
    {
      for (auto it2=it; pred(*it2, *std::next(it2, -1)); --it2)
      {
        std::swap(*it2, *std::next(it2, -1));
      }
    }

  }
}

#endif
