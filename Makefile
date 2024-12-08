menuconfig:
	menuconfig

genconfig:
	genconfig

defconfig:
	defconfig

HTML_FILE := ./doc/html/index.html 

doc:
#	rm -a doc
	doxygen && start $(HTML_FILE)