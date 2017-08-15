#ifndef _HEAP_SORT_H
#define _HEAP_SORT_H

namespace sorting {
  template <typename It, typename Pred=std::less<typename std::iterator_traits<It>::value_type>>
  void HeapSort(It begin, It end, Pred pred=Pred())
  {
    std::make_heap(begin, end);
    std::sort_heap(begin, end);
  }
}

#endif
