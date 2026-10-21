NAME			:= ex03
CXX				:= c++ 
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98
SRC       := main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ       := $(SRC:.cpp=.o)
HEADER    := ClapTrap.hpp ScavTrap.hpp FragTrap.hpp


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
	$(MAKE) all

.PHONY: all clean fclean re
