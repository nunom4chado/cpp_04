NAME		= 	poly

CXX			= 	c++
CXXFLAGS	= 	-Wall -Wextra -Werror -std=c++98 -g

SRCS		:= 	main.cpp\
				Animal.cpp\
				Dog.cpp\
				Cat.cpp\
				WrongAnimal.cpp\
				WrongCat.cpp\
				Brain.cpp

HEADERS		:=	Animal.hpp\
				Dog.hpp\
				Cat.hpp\
				WrongAnimal.hpp\
				WrongCat.hpp\
				Brain.hpp

OBJDIR		:= 	obj
OBJ 		:= 	$(SRCS:%.cpp=$(OBJDIR)/%.o)


# ---------------------------------------------------------------------------- #
#                                  BASE RULES                                  #
# ---------------------------------------------------------------------------- #
all: $(NAME)

$(NAME): $(HEADERS) $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p '$(@D)'
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

# ---------------------------------------------------------------------------- #
#                                 FORMAT RULES                                 #
# ---------------------------------------------------------------------------- #
format:
	clang-format -style=file -i ${SRCS} ${HEADERS}

# ---------------------------------------------------------------------------- #
#                                 LINTER RULES                                 #
# ---------------------------------------------------------------------------- #
lint:
	clang-tidy ${HEADERS} -checks=-*,cppcoreguidelines-*,readability-*
	clang-tidy ${SRCS} -checks=-*,cppcoreguidelines-*,readability-*

# ------------------------------- END OF RULES ------------------------------- #

.PHONY: all clean fclean re format lint
