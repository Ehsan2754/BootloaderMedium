# Medium Target
bootloader:
	cd Boards/F4Host && make clean && make -j8 

medium:
	cd Boards/F3Medium && make clean && make -j8 

# Documentation target
docs: FORCE
	doxygen Doxyfile


# Force target
.PHONY: FORCE

# *** EOF ***