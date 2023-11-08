# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 09:12:06 by jkollner          #+#    #+#              #
#    Updated: 2023/11/08 09:13:33 by jkollner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = bureaucrat
cc = c++
cflags = -Wall -Werror -Wextra -std=c++98
src = main.cpp Bureaucrat.cpp
obj = ${src:.cpp=.o}

all: ${name}

${name}: ${obj}
	${cc} ${cflags} ${obj} -o ${name}

%.o: %.cpp
	$(cc) $(cflags) $< -c -o $@

clean:
	rm -f ${obj}

fclean: clean
	rm -f ${name}

re:	fclean all

.PHONY: all re clean fclean
