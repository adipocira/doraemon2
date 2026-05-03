WARNINGS_CHECK ?= 0

UNAME_S := $(shell uname -s)
ifeq ($(OS),Windows_NT)
	DETECTED_OS  := windows
	PIGMENT64_OS := x86_64-pc-windows-gnu
else ifeq ($(UNAME_S),Linux)
	DETECTED_OS  := linux
	PIGMENT64_OS := x86_64-unknown-linux-musl
else ifeq ($(UNAME_S),Darwin)
	DETECTED_OS  := macos
	PIGMENT64_OS := x86_64-apple-darwin
endif


WGET_FLAGS  ?=
ifneq ($(WARNINGS_CHECK), 0)
    WGET_FLAGS += --quiet
endif

KMC_DIR         := gcc_kmc/$(DETECTED_OS)/2.7.2
KMC_GCC         := $(KMC_DIR)/gcc
KMC_BINUTILS    := $(KMC_DIR)/as

all: $(KMC_GCC)

clean:
	@$(RM) -rf $(KMC_DIR)

distclean: clean
	@$(RM) -rf ido

.PHONY: all clean distclean


$(KMC_GCC): | $(KMC_DIR)
	wget https://github.com/decompals/mips-gcc-2.7.2/releases/latest/download/gcc-2.7.2-$(DETECTED_OS).tar.gz
	tar xf gcc-2.7.2-$(DETECTED_OS).tar.gz -C $(KMC_DIR)
	$(RM) gcc-2.7.2-$(DETECTED_OS).tar.gz

$(KMC_BINUTILS): | $(KMC_DIR)
	wget https://github.com/decompals/mips-binutils-2.6/releases/latest/download/binutils-2.6-$(DETECTED_OS).tar.gz
	tar xf binutils-2.6-$(DETECTED_OS).tar.gz -C $(KMC_DIR)
	$(RM) binutils-2.6-$(DETECTED_OS).tar.gz

$(KMC_DIR):
	mkdir -p $@

distclean: clean
