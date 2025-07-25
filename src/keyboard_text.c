#include "global.h"

// Easy Chat keyboard
#if GAME_LANGUAGE == LANGUAGE_SPANISH
const u8 gText_EasyChatKeyboard_ABCDEFothers[] = _("{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 26}D{CLEAR 6}E{CLEAR 6}F{CLEAR 26}otros");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
const u8 gText_EasyChatKeyboard_ABCDEFothers[] = _("{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 26}D{CLEAR 6}E{CLEAR 6}F{CLEAR 26}altro");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
const u8 gText_EasyChatKeyboard_ABCDEFothers[] = _("{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 26}D{CLEAR 6}E{CLEAR 6}F{CLEAR 26}autres");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
const u8 gText_EasyChatKeyboard_ABCDEFothers[] = _("{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 26}D{CLEAR 6}E{CLEAR 6}F{CLEAR 26}mehr");
#else
const u8 gText_EasyChatKeyboard_ABCDEFothers[] = _("{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 26}D{CLEAR 6}E{CLEAR 6}F{CLEAR 26}others");
#endif
const u8 gText_EasyChatKeyboard_GHIJKL[] = _("{CLEAR 11}G{CLEAR 6}H{CLEAR 6}I{CLEAR 26}J{CLEAR 6}K{CLEAR 6}L");
const u8 gText_EasyChatKeyboard_MNOPQRS[] = _("{CLEAR 11}M{CLEAR 6}N{CLEAR 6}O{CLEAR 26}P{CLEAR 6}Q{CLEAR 6}R{CLEAR 6}S{CLEAR 26} ");
const u8 gText_EasyChatKeyboard_TUVWXYZ[] = _("{CLEAR 11}T{CLEAR 6}U{CLEAR 6}V{CLEAR 26}W{CLEAR 6}X{CLEAR 6}Y{CLEAR 6}Z{CLEAR 26} ");

// Naming Screen keyboard
#if GAME_LANGUAGE == LANGUAGE_FRENCH
const u8 gText_NamingScreenKeyboard_abcdef[] = _("{CLEAR 11}a{CLEAR 6}b{CLEAR 6}c{CLEAR 6}d{CLEAR 20}e{CLEAR 7}f{CLEAR 6}g{CLEAR 6}h{CLEAR 20}.");
const u8 gText_NamingScreenKeyboard_ghijkl[] = _("{CLEAR 12}i{CLEAR 7}j{CLEAR 7}k{CLEAR 7}l{CLEAR 20}m{CLEAR 7}n{CLEAR 6}o{CLEAR 6}p{CLEAR 20},");
const u8 gText_NamingScreenKeyboard_mnopqrs[] = _("{CLEAR 11}q{CLEAR 7}r{CLEAR 7}s{CLEAR 7}t{CLEAR 20}u{CLEAR 6}v{CLEAR 6}w{CLEAR 6}x{CLEAR 20} ");
const u8 gText_NamingScreenKeyboard_tuvwxyz[] = _("{CLEAR 11}y{CLEAR 6}z{CLEAR 6} {CLEAR 6} {CLEAR 20}-{CLEAR 6} {CLEAR 6} {CLEAR 6} {CLEAR 20} ");
const u8 gText_NamingScreenKeyboard_ABCDEF[] = _("{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 6}D{CLEAR 20}E{CLEAR 6}F{CLEAR 6}G{CLEAR 6}H{CLEAR 20}.");
const u8 gText_NamingScreenKeyboard_GHIJKL[] = _("{CLEAR 11}I{CLEAR 6}J{CLEAR 6}K{CLEAR 6}L{CLEAR 20}M{CLEAR 6}N{CLEAR 6}O{CLEAR 6}P{CLEAR 20},");
const u8 gText_NamingScreenKeyboard_MNOPQRS[] = _("{CLEAR 11}Q{CLEAR 6}R{CLEAR 6}S{CLEAR 6}T{CLEAR 20}U{CLEAR 6}V{CLEAR 6}W{CLEAR 6}X{CLEAR 20} ");
const u8 gText_NamingScreenKeyboard_TUVWXYZ[] = _("{CLEAR 11}Y{CLEAR 6}Z{CLEAR 6} {CLEAR 6} {CLEAR 20}-{CLEAR 6} {CLEAR 6} {CLEAR 6} {CLEAR 20} ");
const u8 gText_NamingScreenKeyboard_01234[] = _("{CLEAR 11}0{CLEAR 16}1{CLEAR 16}2{CLEAR 16}3{CLEAR 16}4{CLEAR 16} ");
const u8 gText_NamingScreenKeyboard_56789[] = _("{CLEAR 11}5{CLEAR 16}6{CLEAR 16}7{CLEAR 16}8{CLEAR 16}9{CLEAR 16} ");
const u8 gText_NamingScreenKeyboard_Symbols1[] = _("{CLEAR 11}!{CLEAR 16}?{CLEAR 16}♂{CLEAR 16}♀{CLEAR 16}/{CLEAR 16} ");
const u8 gText_NamingScreenKeyboard_Symbols2[] = _("{CLEAR 11}…{CLEAR 16}“{CLEAR 16}”{CLEAR 18}‘{CLEAR 18}'{CLEAR 18} ");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
const u8 gText_NamingScreenKeyboard_abcdef[] = _("{CLEAR 11}a{CLEAR 6}b{CLEAR 6}c{CLEAR 6}d{CLEAR 20}e{CLEAR 7}f{CLEAR 6}g{CLEAR 6}h{CLEAR 20}.");
const u8 gText_NamingScreenKeyboard_ghijkl[] = _("{CLEAR 12}i{CLEAR 7}j{CLEAR 7}k{CLEAR 7}l{CLEAR 20}m{CLEAR 7}n{CLEAR 6}o{CLEAR 6}p{CLEAR 20},");
const u8 gText_NamingScreenKeyboard_mnopqrs[] = _("{CLEAR 11}q{CLEAR 7}r{CLEAR 7}s{CLEAR 7}t{CLEAR 20}u{CLEAR 6}v{CLEAR 6}w{CLEAR 6}x{CLEAR 20} ");
const u8 gText_NamingScreenKeyboard_tuvwxyz[] = _("{CLEAR 11}y{CLEAR 6}z{CLEAR 6} {CLEAR 6} {CLEAR 20}ä{CLEAR 6}ö{CLEAR 6}ü{CLEAR 6} {CLEAR 20} ");
const u8 gText_NamingScreenKeyboard_ABCDEF[] = _("{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 6}D{CLEAR 20}E{CLEAR 6}F{CLEAR 6}G{CLEAR 6}H{CLEAR 20}.");
const u8 gText_NamingScreenKeyboard_GHIJKL[] = _("{CLEAR 11}I{CLEAR 6}J{CLEAR 6}K{CLEAR 6}L{CLEAR 20}M{CLEAR 6}N{CLEAR 6}O{CLEAR 6}P{CLEAR 20},");
const u8 gText_NamingScreenKeyboard_MNOPQRS[] = _("{CLEAR 11}Q{CLEAR 6}R{CLEAR 6}S{CLEAR 6}T{CLEAR 20}U{CLEAR 6}V{CLEAR 6}W{CLEAR 6}X{CLEAR 20} ");
const u8 gText_NamingScreenKeyboard_TUVWXYZ[] = _("{CLEAR 11}Y{CLEAR 6}Z{CLEAR 6} {CLEAR 6} {CLEAR 20}Ä{CLEAR 6}Ö{CLEAR 6}Ü{CLEAR 6} {CLEAR 20} ");
const u8 gText_NamingScreenKeyboard_01234[] = _("{CLEAR 11}0{CLEAR 16}1{CLEAR 16}2{CLEAR 16}3{CLEAR 16}4{CLEAR 16} ");
const u8 gText_NamingScreenKeyboard_56789[] = _("{CLEAR 11}5{CLEAR 16}6{CLEAR 16}7{CLEAR 16}8{CLEAR 16}9{CLEAR 16} ");
const u8 gText_NamingScreenKeyboard_Symbols1[] = _("{CLEAR 11}!{CLEAR 16}?{CLEAR 16}♂{CLEAR 16}♀{CLEAR 16}/{CLEAR 16}-");
const u8 gText_NamingScreenKeyboard_Symbols2[] = _("{CLEAR 11}…{CLEAR 16}“{CLEAR 16}”{CLEAR 18}‘{CLEAR 18}'{CLEAR 18} ");
#else
const u8 gText_NamingScreenKeyboard_abcdef[] = _("{CLEAR 11}a{CLEAR 6}b{CLEAR 6}c{CLEAR 26}d{CLEAR 6}e{CLEAR 6}f{CLEAR 6} {CLEAR 26}.");
const u8 gText_NamingScreenKeyboard_ghijkl[] = _("{CLEAR 11}g{CLEAR 6}h{CLEAR 7}i{CLEAR 27}j{CLEAR 6}k{CLEAR 6}l{CLEAR 7} {CLEAR 26},");
const u8 gText_NamingScreenKeyboard_mnopqrs[] = _("{CLEAR 11}m{CLEAR 6}n{CLEAR 7}o{CLEAR 26}p{CLEAR 6}q{CLEAR 7}r{CLEAR 6}s{CLEAR 27} ");
const u8 gText_NamingScreenKeyboard_tuvwxyz[] = _("{CLEAR 12}t{CLEAR 6}u{CLEAR 6}v{CLEAR 26}w{CLEAR 6}x{CLEAR 6}y{CLEAR 6}z{CLEAR 26} ");
const u8 gText_NamingScreenKeyboard_ABCDEF[] = _("{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 26}D{CLEAR 6}E{CLEAR 6}F{CLEAR 6} {CLEAR 26}.");
const u8 gText_NamingScreenKeyboard_GHIJKL[] = _("{CLEAR 11}G{CLEAR 6}H{CLEAR 6}I{CLEAR 26}J{CLEAR 6}K{CLEAR 6}L{CLEAR 6} {CLEAR 26},");
const u8 gText_NamingScreenKeyboard_MNOPQRS[] = _("{CLEAR 11}M{CLEAR 6}N{CLEAR 6}O{CLEAR 26}P{CLEAR 6}Q{CLEAR 6}R{CLEAR 6}S{CLEAR 26} ");
const u8 gText_NamingScreenKeyboard_TUVWXYZ[] = _("{CLEAR 11}T{CLEAR 6}U{CLEAR 6}V{CLEAR 26}W{CLEAR 6}X{CLEAR 6}Y{CLEAR 6}Z{CLEAR 26} ");
const u8 gText_NamingScreenKeyboard_01234[] = _("{CLEAR 11}0{CLEAR 16}1{CLEAR 16}2{CLEAR 16}3{CLEAR 16}4{CLEAR 16} ");
const u8 gText_NamingScreenKeyboard_56789[] = _("{CLEAR 11}5{CLEAR 16}6{CLEAR 16}7{CLEAR 16}8{CLEAR 16}9{CLEAR 16} ");
const u8 gText_NamingScreenKeyboard_Symbols1[] = _("{CLEAR 11}!{CLEAR 16}?{CLEAR 16}♂{CLEAR 16}♀{CLEAR 16}/{CLEAR 16}-");
const u8 gText_NamingScreenKeyboard_Symbols2[] = _("{CLEAR 11}…{CLEAR 16}“{CLEAR 16}”{CLEAR 18}‘{CLEAR 18}'{CLEAR 18} ");
#endif

// Union Room Chat keyboard
#if GAME_LANGUAGE == LANGUAGE_SPANISH
const u8 gText_UnionRoomChatKeyboard_ABCDE[] = _("ABCDE");
const u8 gText_UnionRoomChatKeyboard_FGHIJ[] = _("FGHIJ");
const u8 gText_UnionRoomChatKeyboard_KLMNO[] = _("KLMNÑ");
const u8 gText_UnionRoomChatKeyboard_PQRST[] = _("OPQRS");
const u8 gText_UnionRoomChatKeyboard_UVWXY[] = _("TUVWX");
const u8 gText_UnionRoomChatKeyboard_Z[] = _("YZ.,Ü");
const u8 gText_UnionRoomChatKeyboard_01234Upper[] = _("ÁÉÍÓÚ");
const u8 gText_UnionRoomChatKeyboard_56789Upper[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_PunctuationUpper[] = _("56789");
const u8 gText_UnionRoomChatKeyboard_SymbolsUpper[] = _("¡!¿? ");
const u8 gText_UnionRoomChatKeyboard_abcde[] = _("abcde");
const u8 gText_UnionRoomChatKeyboard_fghij[] = _("fghij");
const u8 gText_UnionRoomChatKeyboard_klmno[] = _("klmnñ");
const u8 gText_UnionRoomChatKeyboard_pqrst[] = _("opqrs");
const u8 gText_UnionRoomChatKeyboard_uvwxy[] = _("tuvwx");
const u8 gText_UnionRoomChatKeyboard_z[] = _("yz.,ü");
const u8 gText_UnionRoomChatKeyboard_01234Lower[] = _("áéíóú");
const u8 gText_UnionRoomChatKeyboard_56789Lower[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_PunctuationLower[] = _("56789");
const u8 gText_UnionRoomChatKeyboard_SymbolsLower[] = _("¡!¿? ");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
const u8 gText_UnionRoomChatKeyboard_ABCDE[] = _("ABCDE");
const u8 gText_UnionRoomChatKeyboard_FGHIJ[] = _("FGHIJ");
const u8 gText_UnionRoomChatKeyboard_KLMNO[] = _("KLMNO");
const u8 gText_UnionRoomChatKeyboard_PQRST[] = _("PQRST");
const u8 gText_UnionRoomChatKeyboard_UVWXY[] = _("UVWXY");
const u8 gText_UnionRoomChatKeyboard_Z[] = _("ZÀÈÉÌ");
const u8 gText_UnionRoomChatKeyboard_01234Upper[] = _("ÒÙ.,!");
const u8 gText_UnionRoomChatKeyboard_56789Upper[] = _("?:;' ");
const u8 gText_UnionRoomChatKeyboard_PunctuationUpper[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_SymbolsUpper[] = _("56789");
const u8 gText_UnionRoomChatKeyboard_abcde[] = _("abcde");
const u8 gText_UnionRoomChatKeyboard_fghij[] = _("fghij");
const u8 gText_UnionRoomChatKeyboard_klmno[] = _("klmno");
const u8 gText_UnionRoomChatKeyboard_pqrst[] = _("pqrst");
const u8 gText_UnionRoomChatKeyboard_uvwxy[] = _("uvwxy");
const u8 gText_UnionRoomChatKeyboard_z[] = _("zàèéì");
const u8 gText_UnionRoomChatKeyboard_01234Lower[] = _("òù.,!");
const u8 gText_UnionRoomChatKeyboard_56789Lower[] = _("?:;' ");
const u8 gText_UnionRoomChatKeyboard_PunctuationLower[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_SymbolsLower[] = _("56789");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
const u8 gText_UnionRoomChatKeyboard_ABCDE[] = _("ABCDE");
const u8 gText_UnionRoomChatKeyboard_FGHIJ[] = _("FGHIJ");
const u8 gText_UnionRoomChatKeyboard_KLMNO[] = _("KLMNO");
const u8 gText_UnionRoomChatKeyboard_PQRST[] = _("PQRST");
const u8 gText_UnionRoomChatKeyboard_UVWXY[] = _("UVWXY");
const u8 gText_UnionRoomChatKeyboard_Z[] = _("Z ÇŒ ");
const u8 gText_UnionRoomChatKeyboard_01234Upper[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_56789Upper[] = _("56789");
const u8 gText_UnionRoomChatKeyboard_PunctuationUpper[] = _(".,!?:");
const u8 gText_UnionRoomChatKeyboard_SymbolsUpper[] = _("-/&…;");
const u8 gText_UnionRoomChatKeyboard_abcde[] = _("abcde");
const u8 gText_UnionRoomChatKeyboard_fghij[] = _("fghij");
const u8 gText_UnionRoomChatKeyboard_klmno[] = _("klmno");
const u8 gText_UnionRoomChatKeyboard_pqrst[] = _("pqrst");
const u8 gText_UnionRoomChatKeyboard_uvwxy[] = _("uvwxy");
const u8 gText_UnionRoomChatKeyboard_z[] = _("z àâä");
const u8 gText_UnionRoomChatKeyboard_01234Lower[] = _("çéèêë");
const u8 gText_UnionRoomChatKeyboard_56789Lower[] = _("îïôöœ");
const u8 gText_UnionRoomChatKeyboard_PunctuationLower[] = _("ùûü.,");
const u8 gText_UnionRoomChatKeyboard_SymbolsLower[] = _("? :; ");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
const u8 gText_UnionRoomChatKeyboard_ABCDE[] = _("ABCDE");
const u8 gText_UnionRoomChatKeyboard_FGHIJ[] = _("FGHIJ");
const u8 gText_UnionRoomChatKeyboard_KLMNO[] = _("KLMNO");
const u8 gText_UnionRoomChatKeyboard_PQRST[] = _("PQRST");
const u8 gText_UnionRoomChatKeyboard_UVWXY[] = _("UVWXY");
const u8 gText_UnionRoomChatKeyboard_Z[] = _("Z ÄÖÜ");
const u8 gText_UnionRoomChatKeyboard_01234Upper[] = _(",.!?:");
const u8 gText_UnionRoomChatKeyboard_56789Upper[] = _(";/&-…");
const u8 gText_UnionRoomChatKeyboard_PunctuationUpper[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_SymbolsUpper[] = _("56789");
const u8 gText_UnionRoomChatKeyboard_abcde[] = _("abcde");
const u8 gText_UnionRoomChatKeyboard_fghij[] = _("fghij");
const u8 gText_UnionRoomChatKeyboard_klmno[] = _("klmno");
const u8 gText_UnionRoomChatKeyboard_pqrst[] = _("pqrst");
const u8 gText_UnionRoomChatKeyboard_uvwxy[] = _("uvwxy");
const u8 gText_UnionRoomChatKeyboard_z[] = _("z äöü");
const u8 gText_UnionRoomChatKeyboard_01234Lower[] = _("ßé“”…");
const u8 gText_UnionRoomChatKeyboard_56789Lower[] = {0xB7, 0xF9, 0xDC, 0xF9, 0xDD, 0x5C, 0x5D};//_("¥{EMOJI_PLUS}{EMOJI_MINUS}()");
const u8 gText_UnionRoomChatKeyboard_PunctuationLower[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_SymbolsLower[] = _("56789");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
const u8 gText_UnionRoomChatKeyboard_ABCDE[] = _("ABCDE");
const u8 gText_UnionRoomChatKeyboard_FGHIJ[] = _("FGHIJ");
const u8 gText_UnionRoomChatKeyboard_KLMNO[] = _("KLMNO");
const u8 gText_UnionRoomChatKeyboard_PQRST[] = _("PQRST");
const u8 gText_UnionRoomChatKeyboard_UVWXY[] = _("UVWXY");
const u8 gText_UnionRoomChatKeyboard_Z[] = _("Z    ");
const u8 gText_UnionRoomChatKeyboard_01234Upper[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_56789Upper[] = _("56789");
const u8 gText_UnionRoomChatKeyboard_PunctuationUpper[] = _(".,!? ");
const u8 gText_UnionRoomChatKeyboard_SymbolsUpper[] = _("-/&… ");
const u8 gText_UnionRoomChatKeyboard_abcde[] = _("abcde");
const u8 gText_UnionRoomChatKeyboard_fghij[] = _("fghij");
const u8 gText_UnionRoomChatKeyboard_klmno[] = _("klmno");
const u8 gText_UnionRoomChatKeyboard_pqrst[] = _("pqrst");
const u8 gText_UnionRoomChatKeyboard_uvwxy[] = _("uvwxy");
const u8 gText_UnionRoomChatKeyboard_z[] = _("z    ");
const u8 gText_UnionRoomChatKeyboard_01234Lower[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_56789Lower[] = _("56789");
const u8 gText_UnionRoomChatKeyboard_PunctuationLower[] = _(".,!? ");
const u8 gText_UnionRoomChatKeyboard_SymbolsLower[] = _("-/&… ");
#endif

const u8 gText_EmptyTextInput1[] = _("");
const u8 gText_EmptyTextInput2[] = _("");
const u8 gText_EmptyTextInput3[] = _("");
const u8 gText_EmptyTextInput4[] = _("");
const u8 gText_EmptyTextInput5[] = _("");
const u8 gText_EmptyTextInput6[] = _("");
const u8 gText_EmptyTextInput7[] = _("");
const u8 gText_EmptyTextInput8[] = _("");

// Union Room Chat keyboard emojis
const u8 gText_UnionRoomChatKeyboard_Emoji1[] = _("{EMOJI_MISCHIEVOUS}{EMOJI_HAPPY}{EMOJI_ANGRY}{EMOJI_SURPRISED}{EMOJI_BIGANGER}");
const u8 gText_UnionRoomChatKeyboard_Emoji2[] = _("{EMOJI_BIGSMILE}{EMOJI_EVIL}{EMOJI_NEUTRAL}{EMOJI_TIRED}{EMOJI_SHOCKED}");
const u8 gText_UnionRoomChatKeyboard_Emoji3[] = _("{EMOJI_LEAF}{EMOJI_FIRE}{EMOJI_WATER}{EMOJI_BOLT}{EMOJI_BALL}");
const u8 gText_UnionRoomChatKeyboard_Emoji4[] = _("♂♀{EMOJI_LEFT_PAREN}{EMOJI_RIGHT_PAREN}{EMOJI_TILDE}");
const u8 gText_UnionRoomChatKeyboard_Emoji5[] = _("{EMOJI_LEFT_EYE}{EMOJI_RIGHT_EYE}{EMOJI_SMALLWHEEL}{EMOJI_SPHERE}{EMOJI_IRRITATED}");
#if GAME_LANGUAGE == LANGUAGE_ENGLISH
const u8 gText_UnionRoomChatKeyboard_Emoji6[] = _("{EMOJI_AT}{EMOJI_BIGWHEEL}{EMOJI_TONGUE}{EMOJI_ACUTE}{EMOJI_GRAVE}");
#else
const u8 gText_UnionRoomChatKeyboard_Emoji6[] = _("{EMOJI_SPIRAL}{EMOJI_BIGWHEEL}{EMOJI_TONGUE}{EMOJI_ACUTE}{EMOJI_GRAVE}");
#endif
const u8 gText_UnionRoomChatKeyboard_Emoji7[] = _("{EMOJI_RIGHT_FIST}{EMOJI_LEFT_FIST}{EMOJI_TRIANGLE_OUTLINE}{EMOJI_UNION}{EMOJI_GREATER_THAN}");
const u8 gText_UnionRoomChatKeyboard_Emoji8[] = _("{EMOJI_CIRCLE}{EMOJI_TRIANGLE}{EMOJI_SQUARE}{EMOJI_HEART}{EMOJI_MOON}");
const u8 gText_UnionRoomChatKeyboard_Emoji9[] = _("{EMOJI_NOTE}{EMOJI_PLUS}{EMOJI_MINUS}{EMOJI_EQUALS}{EMOJI_PIPE}");
#if GAME_LANGUAGE == LANGUAGE_ENGLISH
const u8 gText_UnionRoomChatKeyboard_Emoji10[] = _("{EMOJI_HIGHBAR}{EMOJI_UNDERSCORE};: ");
#else
const u8 gText_UnionRoomChatKeyboard_Emoji10[] = _("{EMOJI_HIGHBAR}{EMOJI_UNDERSCORE}{EMOJI_SEMICOLON}: ");
#endif
