#include<fmt/core.h>
#include<iostream>
#include<string>
#include<sstream>
#include<curlpp/cURLpp.hpp>
#include<curlpp/Options.hpp>

#define PORT 80
namespace  design {
		std::string _uri_pre{"https://"};
		std::string _uri_end{".com"};
		template<typename charT>
		std::basic_ostream<charT> &getfulluri(std::basic_ostream<charT> &val) {
			std::string _uri_end{".com"};
			val << _uri_pre << _uri_end;
			return val;
		}
		class utils_ {
			std::string s = fmt::format("nigger");
			public:
			utils_(std::string frm) :  s{fmt::format("{}{}{}", _uri_pre, frm, _uri_end)} {}
			template<typename charT>
			std::basic_ostream<charT> &operator<<(std::basic_ostream<charT> &params) {
				params  << std::string{"nigger"};
				return params;
			}
			template<typename charT>
			std::basic_ostream<charT> &operator>>(std::basic_ostream<charT> &params) {
				std::cout << s;
				return params;
			}
				
		};
		template<typename T>
		class test : public std::basic_ostream<T> {
			std::string str;
			public:
			test() = default;
			test(std::string s) : str{s} {}
			template<typename charT>
			std::basic_ostream<charT> &operator<<(std::basic_ostream<charT>& val) {
					return val << "nigger";	
			}
		};
		namespace curl__ {
			class reqs {
				private:
					std::string s;
					std::stringstream os;
				
				public:
				reqs(std::string site) : s{site} {}
				void mk_req() {
					using namespace curlpp;
					Cleanup cleanup__;
					Options::Url *r1 = new  Options::Url(s);
					os << *r1;
					std::cout << (r1==NULL);
				}
			};
		};
};

void example() {
	std::ostream *stream = &(std::cout << design::getfulluri << "fuck");
	design::test<char> t("fuck");
	design::utils_ u(std::string{"fuck"});
	u >> std::cout << " patxio";
} 


int main() {
	design::curl__::reqs c(std::string{"https://patxiofuckfuck.com"});
	c.mk_req();
	//std::cout << t << "char";
	return 0;
}
