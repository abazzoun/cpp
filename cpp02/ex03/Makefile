NAME			:= ex03
CXX				:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98
SRC				:= main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJ				:= $(SRC.c=.o)

%.o: %.c
	$(CXX) $(CXXFLAGS) $< -c $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean
	$(MAKE) all

.PHONY: all clean fclean re
