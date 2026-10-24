NAME			:= ex00
CXX				:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98
SRC				:= main.cpp Animal.cpp Cat.cpp Dog.cpp
OBJ				:= $(SRC:.cpp=.o)
HEADER		:= Animal.hpp Cat.hpp Dog.hpp


all: $(NAME)

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAFS) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	MAKE $(NAME)

.PHONY: clean fclean re
