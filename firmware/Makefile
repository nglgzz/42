QMK_PATH := ./qmk_firmware
KEYBOARD_PATH := $(QMK_PATH)/keyboards/42

all:
	if [ -d $(KEYBOARD_PATH) ]; then rm -r $(KEYBOARD_PATH); fi
	mkdir $(KEYBOARD_PATH)
	cp -r 42.h  config.h  keymaps rules.mk $(KEYBOARD_PATH)
	cd $(QMK_PATH) && sudo make 42:default:avrdude

clean:
	rm -r $(KEYBOARD_PATH)
	cd $(QMK_PATH) && make clean

update-qmk:
	git submodule foreach git pull origin master
	cd $(QMK_PATH) && make git-submodule

