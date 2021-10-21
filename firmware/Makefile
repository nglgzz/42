QMK_PATH := ./qmk_firmware
KEYBOARD_PATH := $(QMK_PATH)/keyboards/handwired/42

build: clean
	mkdir $(KEYBOARD_PATH)
	cp -r 42.h  config.h  keymaps rules.mk $(KEYBOARD_PATH)
	cd $(QMK_PATH) && make handwired/42:default:flash

clean:
	if [ -d $(KEYBOARD_PATH) ]; then rm -r $(KEYBOARD_PATH); fi
	cd $(QMK_PATH) && make clean

init:
	git clone https://github.com/qmk/qmk_firmware || true
	cd $(QMK_PATH) && make git-submodule

update-qmk:
	cd $(QMK_PATH) && git pull
