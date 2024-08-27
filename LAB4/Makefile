
CC = arm-none-eabi-gcc

CFLAGS = -mcpu=cortex-m4 -mthumb

SRCS = $(wildcard *.c)

# OBJS = $(addsuffix .o, $(basename $(SRCS)))
OBJS = $(patsubst  %.c, $(OBJDIR)/%.o, $(SRCS))
$(shell mkdir -p $(dir $(OBJS)) > '/dev/null')

OBJDIR = $(build)

RM = rm - rf

all $(OBJS)

$(OBJDIR)/%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) build/*.o