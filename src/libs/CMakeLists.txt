add_library(soc_network_manager network_manager.cpp network_manager.hpp)
add_library(soc_search_and_replace ../utils/search_and_replace.cpp ../utils/search_and_replace.hpp)

install (TARGETS soc_network_manager  DESTINATION lib)
