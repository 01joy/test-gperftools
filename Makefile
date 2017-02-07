MAKE := make

all:
	cd complex && $(MAKE)
	cd main && $(MAKE)

clean:
	cd complex && $(MAKE) clean
	cd main && $(MAKE) clean
	rm -fr ./build/*
