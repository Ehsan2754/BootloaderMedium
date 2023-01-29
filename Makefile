
build: bootloader medium
# Bootloader Target
bootloader:
	cd Boards/F4Host && make clean && make -j8 

# Medium Target
medium:
	cd Boards/F3Medium && make clean && make -j8 

# Documentation target
docs: FORCE
	doxygen Doxyfile


# Force target
.PHONY: FORCE

# *** EOF ***