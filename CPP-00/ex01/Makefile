# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 11:21:57 by lde-mich          #+#    #+#              #
#    Updated: 2023/10/05 16:11:36 by lde-mich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= PhoneBook.cpp Contact.cpp main.cpp \

OBJS			= $(SRCS:.cpp=.o)


CC				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98

NAME			= phonebook

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