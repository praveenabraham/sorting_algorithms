#ifndef SECLECTION_SORT_H_
#define SECLECTION_SORT_H_

namespace sorting {
  template <typename It, typename Pred=std::less<typename std::iterator_traits<It>::value_type>>
  void SelectionSort(It begin, It end, Pred pred=Pred())
  {
    if (std::distance(begin, end) < 1)
      return;

    for (auto it=begin; it!=end; ++it)
    {
      std::swap(*it, *std::min_element(it, end, pred));
    }
  }
}

#endif
