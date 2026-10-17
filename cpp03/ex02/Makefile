NAME			:= ex02 
CXX				:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std+=98
SRC				:= main.cpp
OBJ				:= $(SRC:.cpp=.o)
HEADER		:= ClapTrap.hpp ScavTrap.hpp

all: $(NAME)

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean

	
.PHONY: all clean fclean re
