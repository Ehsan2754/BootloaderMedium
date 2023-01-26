# Medium Target
medium:
	cd Boards/F3Medium && make clean && make -j8

# Documentation target
docs: FORCE
	doxygen Doxyfile
	firefox ./docs/index.html

# Force target
.PHONY: FORCE

# *** EOF ***