#ifndef QUICK_SORT_H_
#define QUICK_SORT_H_

namespace sorting {
  template <typename It, typename Pred=std::less<typename std::iterator_traits<It>::value_type>>
  void QuickSort(It begin, It end, Pred pred=Pred())
  {
    if (std::distance(begin, end) <= 1)
      return;

    typedef typename std::iterator_traits<It>::value_type value_type;
    auto const not_pred = [&pred](value_type const &first, value_type const &second) { return !pred(second, first); };
    auto pivot = *std::next(begin, std::distance(begin,end)/2);

    It middle1 = std::partition(begin, end, std::bind(pred, std::placeholders::_1, pivot));
    It middle2 = std::partition(middle1, end, std::bind(not_pred, std::placeholders::_1, pivot));

    QuickSort(begin, middle1);
    QuickSort(middle2, end);
  }
}

#endif
