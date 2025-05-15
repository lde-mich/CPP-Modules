# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 11:01:56 by lde-mich          #+#    #+#              #
#    Updated: 2023/10/26 11:06:10 by lde-mich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= $(wildcard *.cpp)

OBJS			= $(SRCS:.cpp=.o)


CC				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98

NAME			= Harl2.0

%.o:%.cpp
				$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:			$(NAME)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re bonus