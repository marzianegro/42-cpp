# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnegro <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 18:25:00 by mnegro            #+#    #+#              #
#    Updated: 2023/12/10 16:43:58 by mnegro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### PHONY TARGET ###
.PHONY: all clean fclean re

### SILENT TARGET ###
.SILENT:

### VARIABLES (DEFINITION) ###
NAME = FragTrap

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

#### TARGETS ####
SRCS = ClapTrap.cpp FragTrap.cpp main.cpp ScavTrap.cpp

OBJS = ${SRCS:.cpp=.o}

### (EXPLICIT) RULES ###
%.o: %.cpp
	@echo "${YELLOW}Compiling:${WHITE} $< ${DEF_COLOR}"
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
	@echo "Rule '${GREEN}all${DEF_COLOR}' for mandatory ${NAME} executed successfully!"

all:	${NAME}

clean:
	${RM} ${OBJS}
	@echo "Rule '${GREEN}clean${DEF_COLOR}' for ${NAME} executed successfully!"

fclean:
	${RM} ${OBJS} ${NAME}
	@echo "Rule '${GREEN}fclean${DEF_COLOR}' for ${NAME} executed successfully!"

re:	fclean all
	@echo "Rule '${GREEN}re${DEF_COLOR}' for ${NAME} executed successfully!"

### (BRIGHT) COLORS ###
DEF_COLOR = \033[0;39m
BLACK = \033[1;90m
RED = \033[1;91m
GREEN = \033[1;92m
YELLOW = \033[1;93m
BLUE = \033[1;94m
MAGENTA = \033[1;95m
CYAN = \033[1;96m
WHITE = \033[1;97m
