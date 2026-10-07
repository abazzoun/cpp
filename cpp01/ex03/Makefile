NAME			:= ex03
CXX				:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98
SRC				:= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ				:= $(SRC:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
