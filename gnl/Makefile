# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 22:49:22 by pin3dev           #+#    #+#              #
#    Updated: 2024/10/09 00:34:19 by pin3dev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libgnl.a
TEST_EXEC = testergnl

################################################################################
# 						Compiler and Flags	Variables						   #
################################################################################

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I inc
RM = rm -f
RMD = rm -rf

################################################################################
# 							Dir	Path	Variables 							   #
################################################################################

SRCDIR = src
OBJDIR = obj
TESTDIR = test

################################################################################
# 							Libft Variables 								   #
################################################################################

LIBFT_DIR = ../../42_Libft/libft 
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_REPO = git@github.com:pin3dev/42_Libft.git

################################################################################
# 							Files	Path	Variables 						   #
################################################################################

SRC =   $(SRCDIR)/get_next_line.c \
        $(SRCDIR)/get_next_line_utils.c 

OBJS = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

################################################################################
# 							Manual	Targets		 							   #
################################################################################

all: $(OBJDIR) $(LIBFT) $(NAME)

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(RMD) $(OBJDIR)
	@echo "Object files removed"

fclean: clean
	@$(RM) $(NAME) 
	@$(RM) $(TEST_EXEC) 
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@$(RMD) ../../42_Libft/
	@echo "$(NAME) removed"

re: fclean all

################################################################################
# 							Test Target 		 							   #
################################################################################


test: all
	@$(CC) $(CFLAGS) -o $(TEST_EXEC) $(TESTDIR)/test.c -L. -lgnl -L$(LIBFT_DIR) -lft
	@echo "Running tests..."
	@./$(TEST_EXEC)

################################################################################
# 						Auto Targets 				 						   #
################################################################################

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< into $@"

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created"

$(LIBFT):
	@if [ ! -d $(LIBFT_DIR) ]; then \
		echo "Cloning libft from pin3dev repo..."; \
		git clone $(LIBFT_REPO) ../../42_Libft; \
	fi
	@$(MAKE) -C $(LIBFT_DIR)

################################################################################
# 										PS		 	 						   #
################################################################################

.PHONY: all clean fclean re test
