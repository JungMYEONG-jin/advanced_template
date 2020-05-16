#include <iostream>
#include <string>
#include <tuple>


using namespace std;



template<typename TupleType ,int n = tuple_size<TupleType>::value>
void tuple_print(const TupleType& t)
{
	if constexpr (n > 1) {
		tuple_print<TupleType, n - 1>(t);
	}
	cout << get<n - 1>(t) << endl;
}


int main()
{
	auto t1 = make_tuple(2121, "Gare", false, 3.3);
	tuple_print(t1);
}