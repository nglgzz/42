QMK_PATH := "$$HOME/projects/qmk_firmware"
KEYBOARD_PATH := $(QMK_PATH)/keyboards/handwired/42

flash: build
	qmk flash -kb handwired/42 -km default

build: clean
	mkdir $(KEYBOARD_PATH)
	cp -r keyboard.json keymaps $(KEYBOARD_PATH)
	qmk compile -kb handwired/42 -km default

clean:
	if [ -d $(KEYBOARD_PATH) ]; then rm -r $(KEYBOARD_PATH); fi
	qmk clean

init:
	qmk setup

update-qmk:
	cd $(QMK_PATH) && git pull
