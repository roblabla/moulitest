# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/18 09:55:13 by yyang             #+#    #+#              #
#    Updated: 2015/02/08 14:15:50 by juschaef         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
                                                       #
# **************************************************************************** #

#===============================================================================
# REQUIRED CONFIGS
#===============================================================================

NAME = test.out

#===============================================================================
# DEFAULTS
#===============================================================================
POST_PATTERN = ""
CC_DEBUG = -g
CC_FLAGS = -Werror -Wextra -Wall

FRAMEWORK_PATH = v3/
PATTERN ?= spec.c$$
define FIRST_RULE
	make exec_tests
endef

all:
	$(FIRST_RULE)

MT_SOURCES_PREFIXED = $(addprefix $(MT_RENDU_PATH)/, $(MT_SOURCES))
MT_HEADERS_PREFIXED = $(addprefix -I $(MT_RENDU_PATH)/, $(MT_HEADERS))

TESTS_PATH = $(MT_RENDU_PATH)
CC_LIBFT_LIB_DEFAULT = -L $(LIBFT_PATH) -lft
CC_FRAMEWORK_LIB = -L$(FRAMEWORK_PATH) -lmt_framework
CC_INCLUDES = -I . -I $(FRAMEWORK_PATH)/includes $(MT_HEADERS_PREFIXED)
TEST_FILES = $(shell find $(TESTS_PATH) -name "*.spec.c" -type f -follow -print | grep -e $(PATTERN) | grep -e $(POST_PATTERN))

CC_SOURCE = $(TEST_FILES) main.c $(MT_SOURCES_PREFIXED)
LIBFT_PATH = $(MT_RENDU_PATH)/libft
ADD_TESTS = $(shell echo "$(TEST_FILES)" | perl -pe "s/.*?\/([^\/ ]*)\.spec\.c/MT_ADD_SUITE\(mt, \1, suite_\1); /g")
PROTOTYPES = $(shell echo "$(TEST_FILES)" | perl -pe "s/.*?\/([^\/ ]*)\.spec\.c/MT_ADD_PROTO\(\1\); /g")
CC_DEFINES = -DPROTOTYPES="$(PROTOTYPES)" -DADD_TESTS="$(ADD_TESTS)" -DRENDU_PATH="\"$(MT_RENDU_PATH)\""

exec_tests:
	echo "$(MT_HEADERS_PREFIXED)"
	make -k -C $(FRAMEWORK_PATH)
	gcc $(CC_FLAGS) $(CC_DEBUG) $(CC_INCLUDES) $(CC_DEFINES) $(CC_SOURCE) -o $(NAME) $(CC_FRAMEWORK_LIB) $(CC_LIBS)
	./$(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	make -k -C $(MT_RENDU_PATH) fclean
	make -k -C $(FRAMEWORK_PATH) fclean
	rm -f $(NAME)

re: clean fclean all project
