QMK_PATH := ./qmk_firmware

init:
	git clone https://github.com/qmk/qmk_firmware $(QMK_PATH)
	cd $(QMK_PATH)
	make git-submodule

load:
	make handwired/42:default:avrdude
