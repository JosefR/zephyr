zephyr_library()

zephyr_library_sources_ifdef(CONFIG_HDC1080 hdc1080.c)
