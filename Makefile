Src_dir=src
Source=strmpl nigger
CXX_FLAGS=-I./fmt/include -L./fmt -lfmt  -I./curlpp/include 
LIB_FILES=/usr/lib/x86_64-linux-gnu/libcurl-gnutls.so.4.6.0 curlpp/libcurlpp.a
.PHONY: $(Source)
$(Source):
	g++ $(Src_dir)/$(patsubst %,%.cpp,$(@)) -std=c++17   -o $@ $(CXX_FLAGS) $(LIB_FILES)
