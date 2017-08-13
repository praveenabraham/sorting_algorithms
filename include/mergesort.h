#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_

namespace sorting {
  template <typename It, typename Pred=std::less<typename std::iterator_traits<It>::value_type>>
  void MergeSort(It begin, It end, Pred pred=Pred())
  {
    const int size = std::distance(begin, end);
    if (size <= 1)
      return;

    auto middle = std::next(begin, size/2);
    MergeSort(begin, middle, pred);
    MergeSort(middle, end, pred);

    std::inplace_merge(begin, middle, end, pred);
  }
}

#endif
