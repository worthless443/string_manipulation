#include<string>
#include<iostream>
#include<vector>
#include<fmt/include/fmt/core.h>

// ----- concepts ----- //
template<typename T>
concept cons = requires(T a) {
	std::is_trivial_v<T>;
};
template<typename T>
concept is_CharT = requires(T a) {
	std::is_same<std::basic_string_view<T>,  std::string>::value;
};
// ----- concepts ----- //
namespace std {
template<typename T>
struct F {
	public:
		int x;
	F operator<<(F a){
		return *this;
	}
	};
	template<typename T>
		std::basic_ostream<T> &test(std::basic_ostream<T> &t) {
			return t << "nigger";
	};
};
namespace URI {	
	const char *uri = "curl.org";
	const char *uri_pre = "https://www.";
	std::string  uri_params =fmt::format("{}{}");
	std::basic_string_view<char> str{"tes"};
	//using iterator = std::basic_string_view<std::vector<char>>::iterator;
	template<cons T>
	class mK_iter {
		using iterator = typename std::basic_string_view<T>::iterator;
		iterator iter;
		public:
			iterator begin() {
				return iter;
			}

			iterator end() {
				return iter;	
			}
	}	;
	void do_iter() {
		//mK_iter<std::string>	itr; //constrans not statisfied
		//for(auto i : itr) i.size();
	}
};
int main() {
auto get_newclass = [&]<class T>() {
	std::F<T> f;
	return std::F<T>() << f; 
};
std::basic_string<char> *v;
fmt::basic_format_parse_context<std::string>::iterator iter{v}; //erros out
	return 0;
}

