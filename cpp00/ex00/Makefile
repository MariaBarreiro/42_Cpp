NAME			= megaphone

SRC				= megaphone.cpp
OBJS_DIR	= obj
OBJS			= $(addprefix $(OBJS_DIR)/,$(SRC:.cpp=.o))

CC				= c++ -Wall -Wextra -Werror -std=c++98
RM				= rm -rf
MKDIR			= mkdir -p
ECHO			= echo

GREEN   = \033[38;5;108m
BLUE    = \033[38;5;110m
BROWN   = \033[38;5;137m
YELLOW   = \033[38;5;221m

B_GREEN  = \033[1;38;5;108m
B_BLUE   = \033[1;38;5;110m
B_BROWN  = \033[1;38;5;137m
B_YELLOW = \033[1;38;5;180m

RESET   = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
	@$(ECHO) "$(GREEN)Compilation $(B_GREEN)completed$(RESET)"


$(OBJS_DIR)/%.o: %.cpp
	@$(MKDIR) $(dir $@)
	@$(CC) -c $< -o $@
	@$(ECHO) "$(YELLOW)Compiling...$(RESET)"

clean:
	@$(RM) $(OBJS)
	@$(ECHO) "$(BLUE)Objects removed $(B_BLUE)successfully$(RESET)"

fclean: clean
	@$(RM) $(NAME) $(OBJS_DIR)
	@$(ECHO) "$(BROWN)Program removed $(B_BROWN)successfully$(RESET)"

re: fclean all
	@$(ECHO) "$(BLUE)Re-compile was $(B_BLUE)successful$(RESET)"

.PHONY: all clean fclean re




