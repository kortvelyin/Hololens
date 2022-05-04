#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000018 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000021 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000022 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000026 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000027 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000028 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000029 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000033 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000034 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000051 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000052 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000056 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000058 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000060 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000065 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000067 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000069 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006E System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000070 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000072 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000073 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000074 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000075 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000077 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007A TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007C System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007E System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007F System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000081 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000083 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000085 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000086 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000087 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000088 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x00000089 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000008A System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000008B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008C TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008D System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000008E System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x0000008F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000090 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000091 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000092 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000093 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000094 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000095 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000096 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000097 System.Void System.Linq.Set`1::Resize()
// 0x00000098 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000099 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000009A System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009B System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009C System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009D System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000009F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A0 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A1 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A2 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A3 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A4 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A5 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A6 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A7 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A8 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000A9 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000AA System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000AB System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AC System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AD System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AE System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000AF TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B0 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000B1 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000B5 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000B7 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000B8 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000B9 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000BA System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000BB System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BC System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000C5 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C6 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C7 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000CA System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000CB T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CC System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000CD System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[205] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[205] = 
{
	6697,
	6697,
	6929,
	6929,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6599,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[68] = 
{
	{ 0x02000004, { 102, 4 } },
	{ 0x02000005, { 106, 9 } },
	{ 0x02000006, { 117, 7 } },
	{ 0x02000007, { 126, 10 } },
	{ 0x02000008, { 138, 11 } },
	{ 0x02000009, { 152, 9 } },
	{ 0x0200000A, { 164, 12 } },
	{ 0x0200000B, { 179, 1 } },
	{ 0x0200000C, { 180, 2 } },
	{ 0x0200000D, { 182, 12 } },
	{ 0x0200000E, { 194, 8 } },
	{ 0x0200000F, { 202, 11 } },
	{ 0x02000010, { 213, 12 } },
	{ 0x02000011, { 225, 12 } },
	{ 0x02000012, { 237, 6 } },
	{ 0x02000013, { 243, 2 } },
	{ 0x02000015, { 245, 8 } },
	{ 0x02000017, { 253, 3 } },
	{ 0x02000018, { 258, 5 } },
	{ 0x02000019, { 263, 7 } },
	{ 0x0200001A, { 270, 3 } },
	{ 0x0200001B, { 273, 7 } },
	{ 0x0200001C, { 280, 4 } },
	{ 0x0200001D, { 284, 23 } },
	{ 0x0200001F, { 307, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 1 } },
	{ 0x06000017, { 51, 5 } },
	{ 0x06000018, { 56, 3 } },
	{ 0x06000019, { 59, 2 } },
	{ 0x0600001A, { 61, 1 } },
	{ 0x0600001B, { 62, 2 } },
	{ 0x0600001C, { 64, 4 } },
	{ 0x0600001D, { 68, 4 } },
	{ 0x0600001E, { 72, 4 } },
	{ 0x0600001F, { 76, 3 } },
	{ 0x06000020, { 79, 3 } },
	{ 0x06000021, { 82, 1 } },
	{ 0x06000022, { 83, 1 } },
	{ 0x06000023, { 84, 3 } },
	{ 0x06000024, { 87, 3 } },
	{ 0x06000025, { 90, 2 } },
	{ 0x06000026, { 92, 2 } },
	{ 0x06000027, { 94, 5 } },
	{ 0x06000028, { 99, 3 } },
	{ 0x06000039, { 115, 2 } },
	{ 0x0600003E, { 124, 2 } },
	{ 0x06000043, { 136, 2 } },
	{ 0x06000049, { 149, 3 } },
	{ 0x0600004E, { 161, 3 } },
	{ 0x06000053, { 176, 3 } },
	{ 0x0600009C, { 256, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[309] = 
{
	{ (Il2CppRGCTXDataType)2, 6883 },
	{ (Il2CppRGCTXDataType)3, 26691 },
	{ (Il2CppRGCTXDataType)2, 10870 },
	{ (Il2CppRGCTXDataType)2, 10129 },
	{ (Il2CppRGCTXDataType)3, 45971 },
	{ (Il2CppRGCTXDataType)2, 7567 },
	{ (Il2CppRGCTXDataType)2, 10162 },
	{ (Il2CppRGCTXDataType)3, 46015 },
	{ (Il2CppRGCTXDataType)2, 10142 },
	{ (Il2CppRGCTXDataType)3, 45987 },
	{ (Il2CppRGCTXDataType)2, 6884 },
	{ (Il2CppRGCTXDataType)3, 26692 },
	{ (Il2CppRGCTXDataType)2, 10901 },
	{ (Il2CppRGCTXDataType)2, 10175 },
	{ (Il2CppRGCTXDataType)3, 46031 },
	{ (Il2CppRGCTXDataType)2, 7593 },
	{ (Il2CppRGCTXDataType)2, 10207 },
	{ (Il2CppRGCTXDataType)3, 46195 },
	{ (Il2CppRGCTXDataType)2, 10191 },
	{ (Il2CppRGCTXDataType)3, 46106 },
	{ (Il2CppRGCTXDataType)2, 1180 },
	{ (Il2CppRGCTXDataType)3, 176 },
	{ (Il2CppRGCTXDataType)3, 177 },
	{ (Il2CppRGCTXDataType)2, 3901 },
	{ (Il2CppRGCTXDataType)3, 16718 },
	{ (Il2CppRGCTXDataType)2, 1181 },
	{ (Il2CppRGCTXDataType)3, 186 },
	{ (Il2CppRGCTXDataType)3, 187 },
	{ (Il2CppRGCTXDataType)2, 3916 },
	{ (Il2CppRGCTXDataType)3, 16725 },
	{ (Il2CppRGCTXDataType)3, 51402 },
	{ (Il2CppRGCTXDataType)2, 1223 },
	{ (Il2CppRGCTXDataType)3, 376 },
	{ (Il2CppRGCTXDataType)3, 51419 },
	{ (Il2CppRGCTXDataType)2, 1231 },
	{ (Il2CppRGCTXDataType)3, 412 },
	{ (Il2CppRGCTXDataType)2, 8262 },
	{ (Il2CppRGCTXDataType)3, 36275 },
	{ (Il2CppRGCTXDataType)2, 8263 },
	{ (Il2CppRGCTXDataType)3, 36276 },
	{ (Il2CppRGCTXDataType)3, 21941 },
	{ (Il2CppRGCTXDataType)3, 51337 },
	{ (Il2CppRGCTXDataType)2, 1184 },
	{ (Il2CppRGCTXDataType)3, 235 },
	{ (Il2CppRGCTXDataType)3, 51458 },
	{ (Il2CppRGCTXDataType)2, 1234 },
	{ (Il2CppRGCTXDataType)3, 435 },
	{ (Il2CppRGCTXDataType)3, 51355 },
	{ (Il2CppRGCTXDataType)2, 1212 },
	{ (Il2CppRGCTXDataType)3, 334 },
	{ (Il2CppRGCTXDataType)3, 51409 },
	{ (Il2CppRGCTXDataType)3, 15484 },
	{ (Il2CppRGCTXDataType)2, 3695 },
	{ (Il2CppRGCTXDataType)2, 4430 },
	{ (Il2CppRGCTXDataType)2, 4776 },
	{ (Il2CppRGCTXDataType)2, 5026 },
	{ (Il2CppRGCTXDataType)2, 1581 },
	{ (Il2CppRGCTXDataType)3, 3170 },
	{ (Il2CppRGCTXDataType)3, 3171 },
	{ (Il2CppRGCTXDataType)2, 7568 },
	{ (Il2CppRGCTXDataType)3, 28894 },
	{ (Il2CppRGCTXDataType)3, 51362 },
	{ (Il2CppRGCTXDataType)2, 1215 },
	{ (Il2CppRGCTXDataType)3, 348 },
	{ (Il2CppRGCTXDataType)2, 5927 },
	{ (Il2CppRGCTXDataType)2, 4196 },
	{ (Il2CppRGCTXDataType)2, 4446 },
	{ (Il2CppRGCTXDataType)2, 4778 },
	{ (Il2CppRGCTXDataType)2, 5928 },
	{ (Il2CppRGCTXDataType)2, 4197 },
	{ (Il2CppRGCTXDataType)2, 4447 },
	{ (Il2CppRGCTXDataType)2, 4779 },
	{ (Il2CppRGCTXDataType)2, 5929 },
	{ (Il2CppRGCTXDataType)2, 4198 },
	{ (Il2CppRGCTXDataType)2, 4448 },
	{ (Il2CppRGCTXDataType)2, 4780 },
	{ (Il2CppRGCTXDataType)2, 4449 },
	{ (Il2CppRGCTXDataType)2, 4781 },
	{ (Il2CppRGCTXDataType)3, 16719 },
	{ (Il2CppRGCTXDataType)2, 5926 },
	{ (Il2CppRGCTXDataType)2, 4445 },
	{ (Il2CppRGCTXDataType)2, 4777 },
	{ (Il2CppRGCTXDataType)2, 2719 },
	{ (Il2CppRGCTXDataType)2, 4425 },
	{ (Il2CppRGCTXDataType)2, 4426 },
	{ (Il2CppRGCTXDataType)2, 4774 },
	{ (Il2CppRGCTXDataType)3, 16717 },
	{ (Il2CppRGCTXDataType)2, 4424 },
	{ (Il2CppRGCTXDataType)2, 4773 },
	{ (Il2CppRGCTXDataType)3, 16716 },
	{ (Il2CppRGCTXDataType)2, 4195 },
	{ (Il2CppRGCTXDataType)2, 4444 },
	{ (Il2CppRGCTXDataType)2, 4194 },
	{ (Il2CppRGCTXDataType)3, 51315 },
	{ (Il2CppRGCTXDataType)3, 15483 },
	{ (Il2CppRGCTXDataType)2, 3694 },
	{ (Il2CppRGCTXDataType)2, 4428 },
	{ (Il2CppRGCTXDataType)2, 4775 },
	{ (Il2CppRGCTXDataType)2, 5025 },
	{ (Il2CppRGCTXDataType)2, 4475 },
	{ (Il2CppRGCTXDataType)2, 4787 },
	{ (Il2CppRGCTXDataType)3, 16962 },
	{ (Il2CppRGCTXDataType)3, 26693 },
	{ (Il2CppRGCTXDataType)3, 26695 },
	{ (Il2CppRGCTXDataType)2, 867 },
	{ (Il2CppRGCTXDataType)3, 26694 },
	{ (Il2CppRGCTXDataType)3, 26703 },
	{ (Il2CppRGCTXDataType)2, 6887 },
	{ (Il2CppRGCTXDataType)2, 10143 },
	{ (Il2CppRGCTXDataType)3, 45988 },
	{ (Il2CppRGCTXDataType)3, 26704 },
	{ (Il2CppRGCTXDataType)2, 4538 },
	{ (Il2CppRGCTXDataType)2, 4836 },
	{ (Il2CppRGCTXDataType)3, 16733 },
	{ (Il2CppRGCTXDataType)3, 51277 },
	{ (Il2CppRGCTXDataType)2, 10192 },
	{ (Il2CppRGCTXDataType)3, 46107 },
	{ (Il2CppRGCTXDataType)3, 26696 },
	{ (Il2CppRGCTXDataType)2, 6886 },
	{ (Il2CppRGCTXDataType)2, 10130 },
	{ (Il2CppRGCTXDataType)3, 45972 },
	{ (Il2CppRGCTXDataType)3, 16732 },
	{ (Il2CppRGCTXDataType)3, 26697 },
	{ (Il2CppRGCTXDataType)3, 51276 },
	{ (Il2CppRGCTXDataType)2, 10176 },
	{ (Il2CppRGCTXDataType)3, 46032 },
	{ (Il2CppRGCTXDataType)3, 26710 },
	{ (Il2CppRGCTXDataType)2, 6888 },
	{ (Il2CppRGCTXDataType)2, 10163 },
	{ (Il2CppRGCTXDataType)3, 46016 },
	{ (Il2CppRGCTXDataType)3, 28955 },
	{ (Il2CppRGCTXDataType)3, 13424 },
	{ (Il2CppRGCTXDataType)3, 16734 },
	{ (Il2CppRGCTXDataType)3, 13423 },
	{ (Il2CppRGCTXDataType)3, 26711 },
	{ (Il2CppRGCTXDataType)3, 51278 },
	{ (Il2CppRGCTXDataType)2, 10208 },
	{ (Il2CppRGCTXDataType)3, 46196 },
	{ (Il2CppRGCTXDataType)3, 26724 },
	{ (Il2CppRGCTXDataType)2, 6890 },
	{ (Il2CppRGCTXDataType)2, 10194 },
	{ (Il2CppRGCTXDataType)3, 46109 },
	{ (Il2CppRGCTXDataType)3, 26725 },
	{ (Il2CppRGCTXDataType)2, 4541 },
	{ (Il2CppRGCTXDataType)2, 4839 },
	{ (Il2CppRGCTXDataType)3, 16738 },
	{ (Il2CppRGCTXDataType)3, 16737 },
	{ (Il2CppRGCTXDataType)2, 10145 },
	{ (Il2CppRGCTXDataType)3, 45990 },
	{ (Il2CppRGCTXDataType)3, 51284 },
	{ (Il2CppRGCTXDataType)2, 10193 },
	{ (Il2CppRGCTXDataType)3, 46108 },
	{ (Il2CppRGCTXDataType)3, 26717 },
	{ (Il2CppRGCTXDataType)2, 6889 },
	{ (Il2CppRGCTXDataType)2, 10178 },
	{ (Il2CppRGCTXDataType)3, 46034 },
	{ (Il2CppRGCTXDataType)3, 16736 },
	{ (Il2CppRGCTXDataType)3, 16735 },
	{ (Il2CppRGCTXDataType)3, 26718 },
	{ (Il2CppRGCTXDataType)2, 10144 },
	{ (Il2CppRGCTXDataType)3, 45989 },
	{ (Il2CppRGCTXDataType)3, 51283 },
	{ (Il2CppRGCTXDataType)2, 10177 },
	{ (Il2CppRGCTXDataType)3, 46033 },
	{ (Il2CppRGCTXDataType)3, 26731 },
	{ (Il2CppRGCTXDataType)2, 6891 },
	{ (Il2CppRGCTXDataType)2, 10210 },
	{ (Il2CppRGCTXDataType)3, 46198 },
	{ (Il2CppRGCTXDataType)3, 28956 },
	{ (Il2CppRGCTXDataType)3, 13426 },
	{ (Il2CppRGCTXDataType)3, 16740 },
	{ (Il2CppRGCTXDataType)3, 16739 },
	{ (Il2CppRGCTXDataType)3, 13425 },
	{ (Il2CppRGCTXDataType)3, 26732 },
	{ (Il2CppRGCTXDataType)2, 10146 },
	{ (Il2CppRGCTXDataType)3, 45991 },
	{ (Il2CppRGCTXDataType)3, 51285 },
	{ (Il2CppRGCTXDataType)2, 10209 },
	{ (Il2CppRGCTXDataType)3, 46197 },
	{ (Il2CppRGCTXDataType)3, 16729 },
	{ (Il2CppRGCTXDataType)3, 16730 },
	{ (Il2CppRGCTXDataType)3, 16741 },
	{ (Il2CppRGCTXDataType)3, 379 },
	{ (Il2CppRGCTXDataType)3, 378 },
	{ (Il2CppRGCTXDataType)2, 4527 },
	{ (Il2CppRGCTXDataType)2, 4828 },
	{ (Il2CppRGCTXDataType)3, 16731 },
	{ (Il2CppRGCTXDataType)2, 4564 },
	{ (Il2CppRGCTXDataType)2, 4868 },
	{ (Il2CppRGCTXDataType)3, 381 },
	{ (Il2CppRGCTXDataType)2, 1090 },
	{ (Il2CppRGCTXDataType)2, 1224 },
	{ (Il2CppRGCTXDataType)3, 377 },
	{ (Il2CppRGCTXDataType)3, 380 },
	{ (Il2CppRGCTXDataType)3, 414 },
	{ (Il2CppRGCTXDataType)2, 4530 },
	{ (Il2CppRGCTXDataType)2, 4830 },
	{ (Il2CppRGCTXDataType)3, 416 },
	{ (Il2CppRGCTXDataType)2, 863 },
	{ (Il2CppRGCTXDataType)2, 1232 },
	{ (Il2CppRGCTXDataType)3, 413 },
	{ (Il2CppRGCTXDataType)3, 415 },
	{ (Il2CppRGCTXDataType)3, 237 },
	{ (Il2CppRGCTXDataType)2, 9356 },
	{ (Il2CppRGCTXDataType)3, 41979 },
	{ (Il2CppRGCTXDataType)2, 4520 },
	{ (Il2CppRGCTXDataType)2, 4823 },
	{ (Il2CppRGCTXDataType)3, 41980 },
	{ (Il2CppRGCTXDataType)3, 239 },
	{ (Il2CppRGCTXDataType)2, 856 },
	{ (Il2CppRGCTXDataType)2, 1185 },
	{ (Il2CppRGCTXDataType)3, 236 },
	{ (Il2CppRGCTXDataType)3, 238 },
	{ (Il2CppRGCTXDataType)3, 437 },
	{ (Il2CppRGCTXDataType)3, 438 },
	{ (Il2CppRGCTXDataType)2, 9360 },
	{ (Il2CppRGCTXDataType)3, 41984 },
	{ (Il2CppRGCTXDataType)2, 4533 },
	{ (Il2CppRGCTXDataType)2, 4832 },
	{ (Il2CppRGCTXDataType)3, 41985 },
	{ (Il2CppRGCTXDataType)3, 440 },
	{ (Il2CppRGCTXDataType)2, 865 },
	{ (Il2CppRGCTXDataType)2, 1235 },
	{ (Il2CppRGCTXDataType)3, 436 },
	{ (Il2CppRGCTXDataType)3, 439 },
	{ (Il2CppRGCTXDataType)3, 336 },
	{ (Il2CppRGCTXDataType)2, 9358 },
	{ (Il2CppRGCTXDataType)3, 41981 },
	{ (Il2CppRGCTXDataType)2, 4523 },
	{ (Il2CppRGCTXDataType)2, 4825 },
	{ (Il2CppRGCTXDataType)3, 41982 },
	{ (Il2CppRGCTXDataType)3, 41983 },
	{ (Il2CppRGCTXDataType)3, 338 },
	{ (Il2CppRGCTXDataType)2, 858 },
	{ (Il2CppRGCTXDataType)2, 1213 },
	{ (Il2CppRGCTXDataType)3, 335 },
	{ (Il2CppRGCTXDataType)3, 337 },
	{ (Il2CppRGCTXDataType)3, 350 },
	{ (Il2CppRGCTXDataType)2, 860 },
	{ (Il2CppRGCTXDataType)3, 352 },
	{ (Il2CppRGCTXDataType)2, 1216 },
	{ (Il2CppRGCTXDataType)3, 349 },
	{ (Il2CppRGCTXDataType)3, 351 },
	{ (Il2CppRGCTXDataType)2, 10917 },
	{ (Il2CppRGCTXDataType)2, 2720 },
	{ (Il2CppRGCTXDataType)3, 15524 },
	{ (Il2CppRGCTXDataType)2, 3711 },
	{ (Il2CppRGCTXDataType)2, 11354 },
	{ (Il2CppRGCTXDataType)3, 41976 },
	{ (Il2CppRGCTXDataType)3, 41977 },
	{ (Il2CppRGCTXDataType)2, 5043 },
	{ (Il2CppRGCTXDataType)3, 41978 },
	{ (Il2CppRGCTXDataType)2, 766 },
	{ (Il2CppRGCTXDataType)2, 1189 },
	{ (Il2CppRGCTXDataType)3, 256 },
	{ (Il2CppRGCTXDataType)3, 36250 },
	{ (Il2CppRGCTXDataType)2, 8264 },
	{ (Il2CppRGCTXDataType)3, 36277 },
	{ (Il2CppRGCTXDataType)2, 1582 },
	{ (Il2CppRGCTXDataType)3, 3172 },
	{ (Il2CppRGCTXDataType)3, 36256 },
	{ (Il2CppRGCTXDataType)3, 13366 },
	{ (Il2CppRGCTXDataType)2, 897 },
	{ (Il2CppRGCTXDataType)3, 36251 },
	{ (Il2CppRGCTXDataType)2, 8259 },
	{ (Il2CppRGCTXDataType)3, 3599 },
	{ (Il2CppRGCTXDataType)2, 1604 },
	{ (Il2CppRGCTXDataType)2, 2910 },
	{ (Il2CppRGCTXDataType)3, 13384 },
	{ (Il2CppRGCTXDataType)3, 36252 },
	{ (Il2CppRGCTXDataType)3, 13361 },
	{ (Il2CppRGCTXDataType)3, 13362 },
	{ (Il2CppRGCTXDataType)3, 13360 },
	{ (Il2CppRGCTXDataType)3, 13363 },
	{ (Il2CppRGCTXDataType)2, 2906 },
	{ (Il2CppRGCTXDataType)2, 10975 },
	{ (Il2CppRGCTXDataType)3, 16727 },
	{ (Il2CppRGCTXDataType)3, 13365 },
	{ (Il2CppRGCTXDataType)2, 4354 },
	{ (Il2CppRGCTXDataType)3, 13364 },
	{ (Il2CppRGCTXDataType)2, 4203 },
	{ (Il2CppRGCTXDataType)2, 10910 },
	{ (Il2CppRGCTXDataType)2, 4478 },
	{ (Il2CppRGCTXDataType)2, 4789 },
	{ (Il2CppRGCTXDataType)3, 15503 },
	{ (Il2CppRGCTXDataType)2, 3704 },
	{ (Il2CppRGCTXDataType)3, 17633 },
	{ (Il2CppRGCTXDataType)3, 17634 },
	{ (Il2CppRGCTXDataType)3, 17639 },
	{ (Il2CppRGCTXDataType)2, 5037 },
	{ (Il2CppRGCTXDataType)3, 17636 },
	{ (Il2CppRGCTXDataType)3, 52496 },
	{ (Il2CppRGCTXDataType)2, 2914 },
	{ (Il2CppRGCTXDataType)3, 13414 },
	{ (Il2CppRGCTXDataType)1, 4345 },
	{ (Il2CppRGCTXDataType)2, 10923 },
	{ (Il2CppRGCTXDataType)3, 17635 },
	{ (Il2CppRGCTXDataType)1, 10923 },
	{ (Il2CppRGCTXDataType)1, 5037 },
	{ (Il2CppRGCTXDataType)2, 11352 },
	{ (Il2CppRGCTXDataType)2, 10923 },
	{ (Il2CppRGCTXDataType)2, 4485 },
	{ (Il2CppRGCTXDataType)2, 4794 },
	{ (Il2CppRGCTXDataType)3, 17640 },
	{ (Il2CppRGCTXDataType)3, 17638 },
	{ (Il2CppRGCTXDataType)3, 17637 },
	{ (Il2CppRGCTXDataType)2, 654 },
	{ (Il2CppRGCTXDataType)3, 13427 },
	{ (Il2CppRGCTXDataType)2, 876 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	205,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	68,
	s_rgctxIndices,
	309,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
