# !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!! 
# This file is built by mktables.PL from e.g. Unicode.txt.
# Any changes made here will be lost!
%utf8::In = (
'LATIN'                                       =>   0,
'GREEK'                                       =>   1,
'CYRILLIC'                                    =>   2,
'ARMENIAN'                                    =>   3,
'HEBREW'                                      =>   4,
'ARABIC'                                      =>   5,
'SYRIAC'                                      =>   6,
'THAANA'                                      =>   7,
'DEVANAGARI'                                  =>   8,
'BENGALI'                                     =>   9,
'GURMUKHI'                                    =>  10,
'GUJARATI'                                    =>  11,
'ORIYA'                                       =>  12,
'TAMIL'                                       =>  13,
'TELUGU'                                      =>  14,
'KANNADA'                                     =>  15,
'MALAYALAM'                                   =>  16,
'SINHALA'                                     =>  17,
'THAI'                                        =>  18,
'LAO'                                         =>  19,
'TIBETAN'                                     =>  20,
'MYANMAR'                                     =>  21,
'GEORGIAN'                                    =>  22,
'HANGUL'                                      =>  23,
'ETHIOPIC'                                    =>  24,
'CHEROKEE'                                    =>  25,
'CANADIAN-ABORIGINAL'                         =>  26,
'OGHAM'                                       =>  27,
'RUNIC'                                       =>  28,
'KHMER'                                       =>  29,
'MONGOLIAN'                                   =>  30,
'HIRAGANA'                                    =>  31,
'KATAKANA'                                    =>  32,
'BOPOMOFO'                                    =>  33,
'HAN'                                         =>  34,
'YI'                                          =>  35,
'OLD-ITALIC'                                  =>  36,
'GOTHIC'                                      =>  37,
'DESERET'                                     =>  38,
'INHERITED'                                   =>  39,
'Basic Latin'                                 =>  40,
'Latin-1 Supplement'                          =>  41,
'Latin Extended-A'                            =>  42,
'Latin Extended-B'                            =>  43,
'IPA Extensions'                              =>  44,
'Spacing Modifier Letters'                    =>  45,
'Combining Diacritical Marks'                 =>  46,
'Greek Block'                                 =>  47,
'Cyrillic Block'                              =>  48,
'Armenian Block'                              =>  49,
'Hebrew Block'                                =>  50,
'Arabic Block'                                =>  51,
'Syriac Block'                                =>  52,
'Thaana Block'                                =>  53,
'Devanagari Block'                            =>  54,
'Bengali Block'                               =>  55,
'Gurmukhi Block'                              =>  56,
'Gujarati Block'                              =>  57,
'Oriya Block'                                 =>  58,
'Tamil Block'                                 =>  59,
'Telugu Block'                                =>  60,
'Kannada Block'                               =>  61,
'Malayalam Block'                             =>  62,
'Sinhala Block'                               =>  63,
'Thai Block'                                  =>  64,
'Lao Block'                                   =>  65,
'Tibetan Block'                               =>  66,
'Myanmar Block'                               =>  67,
'Georgian Block'                              =>  68,
'Hangul Jamo'                                 =>  69,
'Ethiopic Block'                              =>  70,
'Cherokee Block'                              =>  71,
'Unified Canadian Aboriginal Syllabics'       =>  72,
'Ogham Block'                                 =>  73,
'Runic Block'                                 =>  74,
'Khmer Block'                                 =>  75,
'Mongolian Block'                             =>  76,
'Latin Extended Additional'                   =>  77,
'Greek Extended'                              =>  78,
'General Punctuation'                         =>  79,
'Superscripts and Subscripts'                 =>  80,
'Currency Symbols'                            =>  81,
'Combining Marks for Symbols'                 =>  82,
'Letterlike Symbols'                          =>  83,
'Number Forms'                                =>  84,
'Arrows'                                      =>  85,
'Mathematical Operators'                      =>  86,
'Miscellaneous Technical'                     =>  87,
'Control Pictures'                            =>  88,
'Optical Character Recognition'               =>  89,
'Enclosed Alphanumerics'                      =>  90,
'Box Drawing'                                 =>  91,
'Block Elements'                              =>  92,
'Geometric Shapes'                            =>  93,
'Miscellaneous Symbols'                       =>  94,
'Dingbats'                                    =>  95,
'Braille Patterns'                            =>  96,
'CJK Radicals Supplement'                     =>  97,
'Kangxi Radicals'                             =>  98,
'Ideographic Description Characters'          =>  99,
'CJK Symbols and Punctuation'                 => 100,
'Hiragana Block'                              => 101,
'Katakana Block'                              => 102,
'Bopomofo Block'                              => 103,
'Hangul Compatibility Jamo'                   => 104,
'Kanbun'                                      => 105,
'Bopomofo Extended'                           => 106,
'Enclosed CJK Letters and Months'             => 107,
'CJK Compatibility'                           => 108,
'CJK Unified Ideographs Extension A'          => 109,
'CJK Unified Ideographs'                      => 110,
'Yi Syllables'                                => 111,
'Yi Radicals'                                 => 112,
'Hangul Syllables'                            => 113,
'High Surrogates'                             => 114,
'High Private Use Surrogates'                 => 115,
'Low Surrogates'                              => 116,
'Private Use'                                 => 117,
'CJK Compatibility Ideographs'                => 118,
'Alphabetic Presentation Forms'               => 119,
'Arabic Presentation Forms-A'                 => 120,
'Combining Half Marks'                        => 121,
'CJK Compatibility Forms'                     => 122,
'Small Form Variants'                         => 123,
'Arabic Presentation Forms-B'                 => 124,
'Specials'                                    => 125,
'Halfwidth and Fullwidth Forms'               => 126,
'Old Italic'                                  => 127,
'Gothic Block'                                => 128,
'Deseret Block'                               => 129,
'Byzantine Musical Symbols'                   => 130,
'Musical Symbols'                             => 131,
'Mathematical Alphanumeric Symbols'           => 132,
'CJK Unified Ideographs Extension B'          => 133,
'CJK Compatibility Ideographs Supplement'     => 134,
'Tags'                                        => 135,
'Common'                                      => 136,
);
%utf8::InPat = (
'alp' => {
	'Alphabetic(?:[-_]|\s+)?Presentation(?:[-_]|\s+)?Forms' => 'Alphabetic Presentation Forms',
},
'ara' => {
	'ARABIC' => 'ARABIC',
	'Arabic(?:[-_]|\s+)?Block' => 'Arabic Block',
	'Arabic(?:[-_]|\s+)?Presentation(?:[-_]|\s+)?Forms(?:[-_]|\s+)?A' => 'Arabic Presentation Forms-A',
	'Arabic(?:[-_]|\s+)?Presentation(?:[-_]|\s+)?Forms(?:[-_]|\s+)?B' => 'Arabic Presentation Forms-B',
},
'arm' => {
	'ARMENIAN' => 'ARMENIAN',
	'Armenian(?:[-_]|\s+)?Block' => 'Armenian Block',
},
'arr' => {
	'Arrows' => 'Arrows',
},
'bas' => {
	'Basic(?:[-_]|\s+)?Latin' => 'Basic Latin',
},
'ben' => {
	'BENGALI' => 'BENGALI',
	'Bengali(?:[-_]|\s+)?Block' => 'Bengali Block',
},
'blo' => {
	'Block(?:[-_]|\s+)?Elements' => 'Block Elements',
},
'bop' => {
	'BOPOMOFO' => 'BOPOMOFO',
	'Bopomofo(?:[-_]|\s+)?Block' => 'Bopomofo Block',
	'Bopomofo(?:[-_]|\s+)?Extended' => 'Bopomofo Extended',
},
'box' => {
	'Box(?:[-_]|\s+)?Drawing' => 'Box Drawing',
},
'bra' => {
	'Braille(?:[-_]|\s+)?Patterns' => 'Braille Patterns',
},
'byz' => {
	'Byzantine(?:[-_]|\s+)?Musical(?:[-_]|\s+)?Symbols' => 'Byzantine Musical Symbols',
},
'can' => {
	'CANADIAN(?:[-_]|\s+)?ABORIGINAL' => 'CANADIAN-ABORIGINAL',
},
'che' => {
	'CHEROKEE' => 'CHEROKEE',
	'Cherokee(?:[-_]|\s+)?Block' => 'Cherokee Block',
},
'cjk' => {
	'CJK(?:[-_]|\s+)?Radicals(?:[-_]|\s+)?Supplement' => 'CJK Radicals Supplement',
	'CJK(?:[-_]|\s+)?Symbols(?:[-_]|\s+)?and(?:[-_]|\s+)?Punctuation' => 'CJK Symbols and Punctuation',
	'CJK(?:[-_]|\s+)?Compatibility' => 'CJK Compatibility',
	'CJK(?:[-_]|\s+)?Unified(?:[-_]|\s+)?Ideographs(?:[-_]|\s+)?Extension(?:[-_]|\s+)?A' => 'CJK Unified Ideographs Extension A',
	'CJK(?:[-_]|\s+)?Unified(?:[-_]|\s+)?Ideographs' => 'CJK Unified Ideographs',
	'CJK(?:[-_]|\s+)?Compatibility(?:[-_]|\s+)?Ideographs' => 'CJK Compatibility Ideographs',
	'CJK(?:[-_]|\s+)?Compatibility(?:[-_]|\s+)?Forms' => 'CJK Compatibility Forms',
	'CJK(?:[-_]|\s+)?Unified(?:[-_]|\s+)?Ideographs(?:[-_]|\s+)?Extension(?:[-_]|\s+)?B' => 'CJK Unified Ideographs Extension B',
	'CJK(?:[-_]|\s+)?Compatibility(?:[-_]|\s+)?Ideographs(?:[-_]|\s+)?Supplement' => 'CJK Compatibility Ideographs Supplement',
},
'com' => {
	'Combining(?:[-_]|\s+)?Diacritical(?:[-_]|\s+)?Marks' => 'Combining Diacritical Marks',
	'Combining(?:[-_]|\s+)?Marks(?:[-_]|\s+)?for(?:[-_]|\s+)?Symbols' => 'Combining Marks for Symbols',
	'Combining(?:[-_]|\s+)?Half(?:[-_]|\s+)?Marks' => 'Combining Half Marks',
	'Common' => 'Common',
},
'con' => {
	'Control(?:[-_]|\s+)?Pictures' => 'Control Pictures',
},
'cur' => {
	'Currency(?:[-_]|\s+)?Symbols' => 'Currency Symbols',
},
'cyr' => {
	'CYRILLIC' => 'CYRILLIC',
	'Cyrillic(?:[-_]|\s+)?Block' => 'Cyrillic Block',
},
'des' => {
	'DESERET' => 'DESERET',
	'Deseret(?:[-_]|\s+)?Block' => 'Deseret Block',
},
'dev' => {
	'DEVANAGARI' => 'DEVANAGARI',
	'Devanagari(?:[-_]|\s+)?Block' => 'Devanagari Block',
},
'din' => {
	'Dingbats' => 'Dingbats',
},
'enc' => {
	'Enclosed(?:[-_]|\s+)?Alphanumerics' => 'Enclosed Alphanumerics',
	'Enclosed(?:[-_]|\s+)?CJK(?:[-_]|\s+)?Letters(?:[-_]|\s+)?and(?:[-_]|\s+)?Months' => 'Enclosed CJK Letters and Months',
},
'eth' => {
	'ETHIOPIC' => 'ETHIOPIC',
	'Ethiopic(?:[-_]|\s+)?Block' => 'Ethiopic Block',
},
'gen' => {
	'General(?:[-_]|\s+)?Punctuation' => 'General Punctuation',
},
'geo' => {
	'GEORGIAN' => 'GEORGIAN',
	'Georgian(?:[-_]|\s+)?Block' => 'Georgian Block',
	'Geometric(?:[-_]|\s+)?Shapes' => 'Geometric Shapes',
},
'got' => {
	'GOTHIC' => 'GOTHIC',
	'Gothic(?:[-_]|\s+)?Block' => 'Gothic Block',
},
'gre' => {
	'GREEK' => 'GREEK',
	'Greek(?:[-_]|\s+)?Block' => 'Greek Block',
	'Greek(?:[-_]|\s+)?Extended' => 'Greek Extended',
},
'guj' => {
	'GUJARATI' => 'GUJARATI',
	'Gujarati(?:[-_]|\s+)?Block' => 'Gujarati Block',
},
'gur' => {
	'GURMUKHI' => 'GURMUKHI',
	'Gurmukhi(?:[-_]|\s+)?Block' => 'Gurmukhi Block',
},
'hal' => {
	'Halfwidth(?:[-_]|\s+)?and(?:[-_]|\s+)?Fullwidth(?:[-_]|\s+)?Forms' => 'Halfwidth and Fullwidth Forms',
},
'han' => {
	'HANGUL' => 'HANGUL',
	'HAN' => 'HAN',
	'Hangul(?:[-_]|\s+)?Jamo' => 'Hangul Jamo',
	'Hangul(?:[-_]|\s+)?Compatibility(?:[-_]|\s+)?Jamo' => 'Hangul Compatibility Jamo',
	'Hangul(?:[-_]|\s+)?Syllables' => 'Hangul Syllables',
},
'heb' => {
	'HEBREW' => 'HEBREW',
	'Hebrew(?:[-_]|\s+)?Block' => 'Hebrew Block',
},
'hig' => {
	'High(?:[-_]|\s+)?Surrogates' => 'High Surrogates',
	'High(?:[-_]|\s+)?Private(?:[-_]|\s+)?Use(?:[-_]|\s+)?Surrogates' => 'High Private Use Surrogates',
},
'hir' => {
	'HIRAGANA' => 'HIRAGANA',
	'Hiragana(?:[-_]|\s+)?Block' => 'Hiragana Block',
},
'ide' => {
	'Ideographic(?:[-_]|\s+)?Description(?:[-_]|\s+)?Characters' => 'Ideographic Description Characters',
},
'inh' => {
	'INHERITED' => 'INHERITED',
},
'ipa' => {
	'IPA(?:[-_]|\s+)?Extensions' => 'IPA Extensions',
},
'kan' => {
	'KANNADA' => 'KANNADA',
	'Kannada(?:[-_]|\s+)?Block' => 'Kannada Block',
	'Kangxi(?:[-_]|\s+)?Radicals' => 'Kangxi Radicals',
	'Kanbun' => 'Kanbun',
},
'kat' => {
	'KATAKANA' => 'KATAKANA',
	'Katakana(?:[-_]|\s+)?Block' => 'Katakana Block',
},
'khm' => {
	'KHMER' => 'KHMER',
	'Khmer(?:[-_]|\s+)?Block' => 'Khmer Block',
},
'lao' => {
	'LAO' => 'LAO',
	'Lao(?:[-_]|\s+)?Block' => 'Lao Block',
},
'lat' => {
	'LATIN' => 'LATIN',
	'Latin(?:[-_]|\s+)?1(?:[-_]|\s+)?Supplement' => 'Latin-1 Supplement',
	'Latin(?:[-_]|\s+)?Extended(?:[-_]|\s+)?A' => 'Latin Extended-A',
	'Latin(?:[-_]|\s+)?Extended(?:[-_]|\s+)?B' => 'Latin Extended-B',
	'Latin(?:[-_]|\s+)?Extended(?:[-_]|\s+)?Additional' => 'Latin Extended Additional',
},
'let' => {
	'Letterlike(?:[-_]|\s+)?Symbols' => 'Letterlike Symbols',
},
'low' => {
	'Low(?:[-_]|\s+)?Surrogates' => 'Low Surrogates',
},
'mal' => {
	'MALAYALAM' => 'MALAYALAM',
	'Malayalam(?:[-_]|\s+)?Block' => 'Malayalam Block',
},
'mat' => {
	'Mathematical(?:[-_]|\s+)?Operators' => 'Mathematical Operators',
	'Mathematical(?:[-_]|\s+)?Alphanumeric(?:[-_]|\s+)?Symbols' => 'Mathematical Alphanumeric Symbols',
},
'mis' => {
	'Miscellaneous(?:[-_]|\s+)?Technical' => 'Miscellaneous Technical',
	'Miscellaneous(?:[-_]|\s+)?Symbols' => 'Miscellaneous Symbols',
},
'mon' => {
	'MONGOLIAN' => 'MONGOLIAN',
	'Mongolian(?:[-_]|\s+)?Block' => 'Mongolian Block',
},
'mus' => {
	'Musical(?:[-_]|\s+)?Symbols' => 'Musical Symbols',
},
'mya' => {
	'MYANMAR' => 'MYANMAR',
	'Myanmar(?:[-_]|\s+)?Block' => 'Myanmar Block',
},
'num' => {
	'Number(?:[-_]|\s+)?Forms' => 'Number Forms',
},
'ogh' => {
	'OGHAM' => 'OGHAM',
	'Ogham(?:[-_]|\s+)?Block' => 'Ogham Block',
},
'old' => {
	'OLD(?:[-_]|\s+)?ITALIC' => 'OLD-ITALIC',
	'Old(?:[-_]|\s+)?Italic' => 'Old Italic',
},
'opt' => {
	'Optical(?:[-_]|\s+)?Character(?:[-_]|\s+)?Recognition' => 'Optical Character Recognition',
},
'ori' => {
	'ORIYA' => 'ORIYA',
	'Oriya(?:[-_]|\s+)?Block' => 'Oriya Block',
},
'pri' => {
	'Private(?:[-_]|\s+)?Use' => 'Private Use',
},
'run' => {
	'RUNIC' => 'RUNIC',
	'Runic(?:[-_]|\s+)?Block' => 'Runic Block',
},
'sin' => {
	'SINHALA' => 'SINHALA',
	'Sinhala(?:[-_]|\s+)?Block' => 'Sinhala Block',
},
'sma' => {
	'Small(?:[-_]|\s+)?Form(?:[-_]|\s+)?Variants' => 'Small Form Variants',
},
'spa' => {
	'Spacing(?:[-_]|\s+)?Modifier(?:[-_]|\s+)?Letters' => 'Spacing Modifier Letters',
},
'spe' => {
	'Specials' => 'Specials',
},
'sup' => {
	'Superscripts(?:[-_]|\s+)?and(?:[-_]|\s+)?Subscripts' => 'Superscripts and Subscripts',
},
'syr' => {
	'SYRIAC' => 'SYRIAC',
	'Syriac(?:[-_]|\s+)?Block' => 'Syriac Block',
},
'tag' => {
	'Tags' => 'Tags',
},
'tam' => {
	'TAMIL' => 'TAMIL',
	'Tamil(?:[-_]|\s+)?Block' => 'Tamil Block',
},
'tel' => {
	'TELUGU' => 'TELUGU',
	'Telugu(?:[-_]|\s+)?Block' => 'Telugu Block',
},
'tha' => {
	'THAANA' => 'THAANA',
	'THAI' => 'THAI',
	'Thaana(?:[-_]|\s+)?Block' => 'Thaana Block',
	'Thai(?:[-_]|\s+)?Block' => 'Thai Block',
},
'tib' => {
	'TIBETAN' => 'TIBETAN',
	'Tibetan(?:[-_]|\s+)?Block' => 'Tibetan Block',
},
'uni' => {
	'Unified(?:[-_]|\s+)?Canadian(?:[-_]|\s+)?Aboriginal(?:[-_]|\s+)?Syllabics' => 'Unified Canadian Aboriginal Syllabics',
},
'yi' => {
	'YI' => 'YI',
},
'yi ' => {
	'Yi(?:[-_]|\s+)?Syllables' => 'Yi Syllables',
	'Yi(?:[-_]|\s+)?Radicals' => 'Yi Radicals',
},
);
