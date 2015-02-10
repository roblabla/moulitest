# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yyang <yyang@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/18 09:55:13 by yyang             #+#    #+#              #
#    Updated: 2015/02/10 18:59:17 by yyang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CLEAN THIS CODE BITCH !!

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

FRAMEWORK_PATH = framework/
PATTERN ?= spec.c$$
define FIRST_RULE
	make exec_tests
endef

all:
	$(FIRST_RULE)
	
MT_SOURCES_PREFIXED = $(addprefix $(MT_RENDU_PATH)/, $(MT_SOURCES))
MT_HEADERS_PREFIXED = $(addprefix -I $(MT_RENDU_PATH)/, $(MT_HEADERS))
# MT_TESTS_PREFIXED = $(addprefix $(MT_RENDU_PATH)/, $(MT_TESTS_FIND_PATTERN))

TESTS_PATH = $(MT_RENDU_PATH)
CC_FRAMEWORK_LIB = -L $(FRAMEWORK_PATH) -lmt_framework
CC_INCLUDES = -I . -I $(FRAMEWORK_PATH)/includes $(MT_HEADERS_PREFIXED)
TEST_FILES = $(shell find $(TESTS_PATH) -type f -follow -print | grep $(MT_TESTS_GREP_PATTERN))
# TEST_FILES = $(MT_TESTS_PREFIXED)

CC_SOURCE = $(TEST_FILES) main.c $(shell ls $(MT_SOURCES_PREFIXED) | grep -v $(MT_TESTS_GREP_PATTERN))
ADD_TESTS = $(shell echo "$(TEST_FILES)" | perl -pe "s/.*?\/([^\/ ]*)\.spec\.c/MT_ADD_SUITE\(mt, \1, suite_\1); /g")
PROTOTYPES = $(shell echo "$(TEST_FILES)" | perl -pe "s/.*?\/([^\/ ]*)\.spec\.c/MT_ADD_PROTO\(\1\); /g")
CC_DEFINES = -DPROTOTYPES="$(PROTOTYPES)" -DADD_TESTS="$(ADD_TESTS)" -DRENDU_PATH="\"$(MT_RENDU_PATH)\"" -D __MOULITEST__

exec_tests:
	echo "$(TEST_FILES)"
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
