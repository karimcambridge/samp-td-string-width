#include <a_samp>


static const TDCharacterDefaultWidth[4] = {27, 20, 27, 20};

static const TDCharacterWidth[4][176] = {
	{
		 0,  12,  12,  12,  12,  12,  12,  12,
		12,  12,  12,  12,  12,  12,  12,  12,
		12,  12,  12,  12,  12,  12,  12,  12,
		12,  12,  12,  12,  12,  12,  12,  12,
		12,  13,  13,  28,  28,  28,  28,   8,	//   ! " £ $ % & '
		17,  17,  30,  28,  28,  12,   9,  21,  // ( ) * + , - . /
		28,  14,  28,  28,  28,  28,  28,  28,  // 0 1 2 3 4 5 6 7
		28,  28,  13,  13,  30,  30,  30,  30,  // 8 9 : ; < = > ?
		10,  25,  23,  21,  24,  22,  20,  24,  // - A B C D E F G
		24,  17,  20,  22,  20,  30,  27,  27,  // H I J K L M N O
		26,  26,  24,  23,  24,  31,  23,  31,  // P Q R S T U V W
		24,  23,  21,  28,  33,  33,  14,  28,  // X Y Z & \   i _
		10,  11,  12,   9,  11,  10,  10,  12,  // ! a b c d e f g
		12,   7,   7,  13,   5,  18,  12,  10,  // h i j k l m n o
		12,  11,  10,  12,   8,  13,  13,  18,  // p q r s t u v w
		17,  13,  12,  30,  30,  37,  35,  37,  // x y z
		25,  25,  25,  25,  33,  21,  24,  24,	// Ą Į Ā Ć Ę Ē Č É
		24,  24,  17,  17,  17,  17,  27,  27,	// Ź Ė Ģ Ķ Ī Ļ Ņ Ó
		27,  27,  31,  31,  31,  31,  11,  11,	// Ō Ö ŝ Ś Ū Ü ß ą
		11,  11,  11,  20,   9,  10,  10,  10,	// į ĝ ć ę ē ĝ é ź
		10,   7,   7,   7,   7,  10,  10,  10,	// ė ģ ķ ī ļ ņ ó ŝ
		10,  13,  13,  13,  13,  27,  12,  30	// ö ł ś ū ü Ñ ñ ¿
	}, {
		 0,  15,  15,  15,  15,  15,  15,  15,
		15,  15,  15,  15,  15,  15,  15,  15,
		15,  15,  15,  15,  15,  15,  15,  15,
		15,  15,  15,  15,  15,  15,  15,  15,
		15,   9,  17,  27,  20,  34,  23,  12,	//   ! " £ $ % & '
		12,  12,  21,  20,  12,  14,  12,  15,	// ( ) * + , - . /
		23,  15,  21,  21,  21,  21,  21,  21,	// 0 1 2 3 4 5 6 7
		20,  21,  12,  12,  24,  24,  24,  19,	// 8 9 : ; < = > ?
		10,  22,  19,  19,  22,  16,  19,  24,	// tmA B C D E F G
		22,  11,  16,  21,  15,  28,  24,  27,	// H I J K L M N O
		20,  25,  19,  19,  18,  23,  23,  31,	// P Q R S T U V W
		23,  19,  21,  21,  13,  35,  11,  21,	// X Y Z       ! _
		10,  19,  20,  14,  20,  19,  13,  20,	// ! a b c d e f g
		19,   9,   9,  19,   9,  29,  19,  21,	// h i j k l m n o
		19,  19,  15,  15,  14,  18,  19,  27,	// p q r s t u v w
		20,  20,  17,  21,  17,  20,  15,  15,	// x y z     $ [ ]
		22,  22,  22,  22,  29,  19,  16,  16,	// À Ý Â Ã Æ Ç È É
		16,  16,  11,  11,  11,  11,  27,  27,	// Ê Ë Ì Ý Î Ý Ò Ó
		27,  27,  23,  23,  23,  23,  20,  19,	// Ô Ö Ù Ú Û Ü ß à
		19,  19,  19,  30,  14,  19,  19,  19,	// á â ã æ ç è é ê
		19,   9,   9,   9,   9,  21,  21,  21,	// ë ì í î ï ò ó ô
		21,  18,  18,  18,  18,  24,  19,  19	// ö ù ú û ü Ñ ñ ¿
	}, {
		 0,  15,  23,  15,  21,  21,  21,  21,
		21,  21,  20,  21,  12,  12,  24,  24,
		24,  19,  10,  22,  19,  19,  22,  16,
		19,  24,  22,  11,  16,  21,  15,  28,
		12,  13,  13,  28,  37,  28,  30,   8,	//   ! " £ $ % & '
		17,  17,  30,  28,  28,  12,   9,  21,  // ( ) * + , - . /
		27,  16,  27,  27,  27,  27,  27,  27,  // 0 1 2 3 4 5 6 7
		27,  27,  18,  13,  30,  30,  30,  30,  // 8 9 : ; < = > ?
		10,  29,  26,  25,  28,  26,  25,  27,  // - A B C D E F G
		28,  12,  24,  25,  24,  30,  27,  29,  // H I J K L M N O
		26,  26,  25,  26,  25,  26,  28,  32,  // P Q R S T U V W
		27,  26,  26,  28,  33,  33,  10,  28,  // X Y Z & \   i _
		10,  29,  26,  25,  28,  26,  25,  27,  // ! a b c d e f g
		28,  12,  24,  25,  24,  30,  27,  29,  // h i j k l m n o
		26,  26,  25,  26,  25,  26,  28,  32,  // p q r s t u v w
		27,  26,  26,  30,  30,  37,  35,  37,  // x y z
		29,  29,  29,  29,  33,  25,  26,  26,	// Ą Į Ā Ć Ę Ē Č É
		26,  26,  14,  14,  14,  14,  29,  29,	// Ź Ė Ģ Ķ Ī Ļ Ņ Ó
		29,  29,  26,  26,  26,  26,  21,  29,	// Ō Ö ŝ Ś Ū Ü ß ą
		29,  29,  29,  33,  25,  26,  26,  26,	// į ĝ ć ę ē ĝ é ź
		26,  14,  14,  14,  14,  29,  29,  29,	// ė ģ ķ ī ļ ņ ó ŝ
		29,  26,  26,  26,  26,  25,  25,  30	// ö ł ś ū ü Ñ ñ ¿
	}, {
		 0,   9,   9,  18,  18,  18,  18,  18,
		18,  18,  18,  19,  19,  19,   0,   9,
		 9,   9,   9,  18,  18,  18,  18,  18,
		18,  18,  18,  19,  19,  19,   0,   9,
		15,  10,  17,  27,  20,  34,  23,  10,	//   ! " £ $ % & '
		15,  15,  21,  20,  12,  14,   9,  15,	// ( ) * + , - . /
		20,  18,  19,  19,  21,  19,  19,  19,	// 0 1 2 3 4 5 6 7
		19,  19,  16,  12,  24,  24,  24,  21,	// 8 9 : ; < = > ?
		10,  19,  19,  19,  20,  19,  16,  19,	// tmA B C D E F G
		19,   9,  19,  20,  14,  29,  19,  19,	// H I J K L M N O
		19,  19,  19,  19,  21,  19,  20,  32,	// P Q R S T U V W
		21,  19,  19,  21,  13,  35,  10,  21,	// X Y Z       ! _
		10,  19,  19,  19,  20,  19,  16,  19,	// ! a b c d e f g
		19,   9,  19,  20,  14,  29,  19,  19,	// h i j k l m n o
		19,  19,  19,  19,  21,  19,  20,  32,	// p q r s t u v w
		21,  19,  19,  21,  17,  20,  15,  15,	// x y z     $ [ ]
		19,  19,  19,  19,  29,  19,  19,  19,	// À Ý Â Ã Æ Ç È É
		19,  19,   9,   9,   9,   9,  19,  19,	// Ê Ë Ì Ý Î Ý Ò Ó
		19,  19,  19,  19,  19,  19,  19,  19,	// Ô Ö Ù Ú Û Ü ß à
		19,  19,  19,  29,  19,  19,  19,  19,	// á â ã æ ç è é ê
		19,   9,   9,   9,   9,  19,  19,  19,	// ë ì í î ï ò ó ô
		19,  19,  19,  19,  19,  21,  21,  19	// ö ù ú û ü Ñ ñ ¿
	}
};

static const TDFont3CharacterInlineWidth[32] = {
     0, 255,   0,   0, 128,  63, 147,  36,
    19,  64,   0,   0,   0,   0,   0,   0,
    32,  68,   0,   0,   0,   0,   0,   0,
     0,   0,   0,   0,   0,   0,   0,   0
};


stock GetTextDrawCharacterWidth(character, font, bool:proportional = true) {
	if (!(0 <= font <= 3) || !(0 <= character < 176)) {
		return 0;
	}

	new width;

	if (!proportional || character >= sizeof(TDCharacterWidth[])) {
		width = TDCharacterDefaultWidth[font];
	} else {
		width = TDCharacterWidth[font][character];
	}

	return width;
}


stock GetTextDrawStringWidth(const string[], font, outline = 0, bool:proportional = true) {
    new other, result, width;

    for (new i, j = strlen(string); i < j; i++) {
        if (string[i] == '~') {
            other = strfind(string, "~", .pos = i + 1);

            if (other == -1) {
                return GetTextDrawLineWidth("Error: unmatched tilde", font, outline, proportional);
            }

            if (other == i + 2 && string[i + 1] == 'n') {
                if (result < width) {
                    result = width;
                }

                width = 0;
            } 

            i = other + 1;
        } else {
            if (font == 3 && (0 < string[i] < 32) && i != j - 1 && strfind(string, "~n~", .pos = i + 1) != i + 1) {
                width += TDFont3CharacterInlineWidth[string[i]];
            } else {
                width += GetTextDrawCharacterWidth(string[i], font, proportional);
            }
        }
    }

    if (result < width) {
        result = width;
    }

    return result + (outline * 2);
}


stock GetTextDrawLineWidth(const string[], font, outline = 0, bool:proportional = true) {
    new other, width;

    for (new i, j = strlen(string); i < j; i++) {
        if (string[i] == '~') {
            other = strfind(string, "~", .pos = i + 1);

            if (other == -1) {
                return GetTextDrawLineWidth("Error: unmatched tilde", font, outline, proportional);
            }

            i = other + 1;
        } else {
            if (font == 3 && (0 < string[i] < 32) && i != j - 1) {
                width += TDFont3CharacterInlineWidth[string[i]];
            } else {
                width += GetTextDrawCharacterWidth(string[i], font, proportional);
            }
        }
    }

    return width + (outline * 2);
}