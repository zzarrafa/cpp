# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/16 14:23:05 by zzarrafa          #+#    #+#              #
#    Updated: 2021/07/03 16:27:56 by zzarrafa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cpp

SRC = *.cpp



all:$(NAME)

$(NAME):
			@g++ -Wall -Werror -Wextra  $(SRC) -o $(NAME)


fclean:
	@rm -f $(NAME)

re: fclean all
