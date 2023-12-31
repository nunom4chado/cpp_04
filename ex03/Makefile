NAME		= 	interface

CXX			= 	c++
CXXFLAGS	= 	-Wall -Wextra -Werror -std=c++98 -g

SRCS		:= 	AMateria.cpp\
				Character.cpp\
				Cure.cpp\
				Ice.cpp\
				main.cpp\

HEADERS		:=	AMateria.hpp\
				Character.hpp\
				Cure.hpp\
				Ice.hpp\
				ICharacter.hpp\
				IMateriaSource.hpp\
				MateriaSource.hpp\

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
