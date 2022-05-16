typedef struct _CONSOLE_SCREEN_BUFFER_INFO {
	COORD      dwSize;
	COORD      dwCursorPosition;
	WORD       wAttributes;
	SMALL_RECT srWindow;
	COORD      dwMaximumWindowSize;
} CONSOLE_SCREEN_BUFFER_INFO;