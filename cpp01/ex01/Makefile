NAME			= ZombieHorde

INC_PATH	= ./inc/

SRC				= main.cpp
SRC				+= Zombie.cpp
SRC				+= zombieHorde.cpp

OBJS_DIR	= obj
OBJS			= $(addprefix $(OBJS_DIR)/,$(SRC:.cpp=.o))

CC				= c++ -Wall -Wextra -Werror -std=c++98
RM				= rm -rf
MKDIR			= mkdir -p
ECHO			= echo
INC       = -I$(INC_PATH)

BLUE			= \033[38;2;78;76;118m
PURPLE		= \033[38;2;144;133;188m
LPINK			= \033[38;2;242;203;224m
PINK			= \033[38;2;203;109;154m
DPINK			= \033[38;2;143;71;123m

RESET			= \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(INC) $(OBJS) -o $(NAME)
	@$(ECHO) "$(BLUE)Compilation completed$(RESET)"


$(OBJS_DIR)/%.o: %.cpp
	@$(MKDIR) $(dir $@)
	@$(CC) -c $< -o $@
	@$(ECHO) "$(PURPLE)Compiling...$(RESET)"

clean:
	@$(RM) $(OBJS)
	@$(ECHO) "$(LPINK)Objects removed successfully$(RESET)"

fclean: clean
	@$(RM) $(NAME) $(OBJS_DIR)
	@$(ECHO) "$(PINK)Program removed successfully$(RESET)"

re: fclean all
	@$(ECHO) "$(DPINK)Re-compile was successful$(RESET)"

.PHONY: all clean fclean re
