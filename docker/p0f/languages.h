/*
   p0f - ISO 639-1 languages
   -------------------------

   Copyright (C) 2012 by Michal Zalewski <lcamtuf@coredump.cx>

   Distributed under the terms and conditions of GNU LGPL.

 */

#ifndef _HAVE_LANGUAGES_H
#define _HAVE_LANGUAGES_H

#include "types.h"

#define MAX_LANG 3

#define LANG_HASH(_b0, _b1) (((_b0) * (_b1) ^ (_b1)) & 0xff)

static char* languages[256][MAX_LANG * 2 + 1] = {

  /* 0x00 */ { 0 },
  /* 0x01 */ { "ro", "Romanian", 0 },
  /* 0x02 */ { "sw", "Swahili", 0 },
  /* 0x03 */ { "ne", "Nepali", 0 },
  /* 0x04 */ { "nl", "Dutch", "sn", "Shona", 0 },
  /* 0x05 */ { 0 },
  /* 0x06 */ { "ln", "Lingala", 0 },
  /* 0x07 */ { 0 },
  /* 0x08 */ { "en", "English", "ie", "Interlingue", 0 },
  /* 0x09 */ { "bg", "Bulgarian", "ha", "Hausa", 0 },
  /* 0x0a */ { "cs", "Czech", "ko", "Korean", 0 },
  /* 0x0b */ { 0 },
  /* 0x0c */ { "gv", "Manx", 0 },
  /* 0x0d */ { 0 },
  /* 0x0e */ { 0 },
  /* 0x0f */ { "vi", "Vietnamese", 0 },
  /* 0x10 */ { "mt", "Maltese", 0 },
  /* 0x11 */ { "bo", "Tibetan", "de", "German", "pa", "Panjabi", 0 },
  /* 0x12 */ { 0 },
  /* 0x13 */ { "lg", "Ganda", 0 },
  /* 0x14 */ { 0 },
  /* 0x15 */ { 0 },
  /* 0x16 */ { 0 },
  /* 0x17 */ { "tk", "Turkmen", 0 },
  /* 0x18 */ { "gl", "Galician", "yo", "Yoruba", 0 },
  /* 0x19 */ { 0 },
  /* 0x1a */ { "sc", "Sardinian", 0 },
  /* 0x1b */ { 0 },
  /* 0x1c */ { "or", "Oriya", 0 },
  /* 0x1d */ { 0 },
  /* 0x1e */ { "fr", "French", 0 },
  /* 0x1f */ { 0 },
  /* 0x20 */ { "ae", "Avestan", "am", "Amharic", "mh", "Marshallese", 0 },
  /* 0x21 */ { 0 },
  /* 0x22 */ { "hr", "Croatian", "sg", "Sango", 0 },
  /* 0x23 */ { "ps", "Pushto", "to", "Tonga", 0 },
  /* 0x24 */ { "kj", "Kuanyama", "kv", "Komi", 0 },
  /* 0x25 */ { "li", "Limburgan", "ng", "Ndonga", 0 },
  /* 0x26 */ { 0 },
  /* 0x27 */ { 0 },
  /* 0x28 */ { 0 },
  /* 0x29 */ { "lu", "Luba-Katanga", 0 },
  /* 0x2a */ { "nn", "Norwegian Nynorsk", 0 },
  /* 0x2b */ { 0 },
  /* 0x2c */ { "es", "Spanish", "gn", "Guarani", "pl", "Polish", 0 },
  /* 0x2d */ { 0 },
  /* 0x2e */ { "om", "Oromo", 0 },
  /* 0x2f */ { 0 },
  /* 0x30 */ { 0 },
  /* 0x31 */ { 0 },
  /* 0x32 */ { 0 },
  /* 0x33 */ { 0 },
  /* 0x34 */ { 0 },
  /* 0x35 */ { 0 },
  /* 0x36 */ { 0 },
  /* 0x37 */ { 0 },
  /* 0x38 */ { 0 },
  /* 0x39 */ { 0 },
  /* 0x3a */ { "lb", "Luxembourgish", "se", "Northern Sami", 0 },
  /* 0x3b */ { 0 },
  /* 0x3c */ { 0 },
  /* 0x3d */ { 0 },
  /* 0x3e */ { 0 },
  /* 0x3f */ { 0 },
  /* 0x40 */ { "ab", "Abkhazian", "ar", "Arabic", "az", "Azerbaijani", 0 },
  /* 0x41 */ { 0 },
  /* 0x42 */ { "si", "Sinhala", 0 },
  /* 0x43 */ { "ba", "Bashkir", 0 },
  /* 0x44 */ { "sr", "Serbian", 0 },
  /* 0x45 */ { "vo", "Volapuk", 0 },
  /* 0x46 */ { 0 },
  /* 0x47 */ { 0 },
  /* 0x48 */ { "kl", "Kalaallisut", "th", "Thai", 0 },
  /* 0x49 */ { 0 },
  /* 0x4a */ { "cu", "Church Slavic", 0 },
  /* 0x4b */ { "ja", "Japanese", 0 },
  /* 0x4c */ { 0 },
  /* 0x4d */ { 0 },
  /* 0x4e */ { 0 },
  /* 0x4f */ { "fy", "Western Frisian", 0 },
  /* 0x50 */ { "ch", "Chamorro", 0 },
  /* 0x51 */ { "hy", "Armenian", 0 },
  /* 0x52 */ { 0 },
  /* 0x53 */ { 0 },
  /* 0x54 */ { "ht", "Haitian", 0 },
  /* 0x55 */ { "fo", "Faroese", 0 },
  /* 0x56 */ { "fj", "Fijian", 0 },
  /* 0x57 */ { 0 },
  /* 0x58 */ { "gd", "Scottish Gaelic", "ig", "Igbo", "is", "Icelandic", 0 },
  /* 0x59 */ { 0 },
  /* 0x5a */ { 0 },
  /* 0x5b */ { "bi", "Bislama", "za", "Zhuang", 0 },
  /* 0x5c */ { "eu", "Basque", 0 },
  /* 0x5d */ { 0 },
  /* 0x5e */ { 0 },
  /* 0x5f */ { 0 },
  /* 0x60 */ { "id", "Indonesian", 0 },
  /* 0x61 */ { 0 },
  /* 0x62 */ { "ks", "Kashmiri", 0 },
  /* 0x63 */ { 0 },
  /* 0x64 */ { "cr", "Cree", 0 },
  /* 0x65 */ { 0 },
  /* 0x66 */ { "ga", "Irish", "gu", "Gujarati", 0 },
  /* 0x67 */ { 0 },
  /* 0x68 */ { "st", "Southern Sotho", "ur", "Urdu", 0 },
  /* 0x69 */ { 0 },
  /* 0x6a */ { "ce", "Chechen", "kg", "Kongo", 0 },
  /* 0x6b */ { 0 },
  /* 0x6c */ { 0 },
  /* 0x6d */ { "he", "Hebrew", 0 },
  /* 0x6e */ { "dv", "Dhivehi", 0 },
  /* 0x6f */ { "ru", "Russian", "ts", "Tsonga", 0 },
  /* 0x70 */ { 0 },
  /* 0x71 */ { 0 },
  /* 0x72 */ { "bn", "Bengali", 0 },
  /* 0x73 */ { 0 },
  /* 0x74 */ { "sv", "Swedish", "ug", "Uighur", 0 },
  /* 0x75 */ { "bs", "Bosnian", 0 },
  /* 0x76 */ { "wa", "Walloon", 0 },
  /* 0x77 */ { "ho", "Hiri Motu", 0 },
  /* 0x78 */ { "ii", "Sichuan Yi", 0 },
  /* 0x79 */ { 0 },
  /* 0x7a */ { "sk", "Slovak", 0 },
  /* 0x7b */ { 0 },
  /* 0x7c */ { 0 },
  /* 0x7d */ { 0 },
  /* 0x7e */ { "nb", "Norwegian Bokmal", 0 },
  /* 0x7f */ { 0 },
  /* 0x80 */ { 0 },
  /* 0x81 */ { 0 },
  /* 0x82 */ { "co", "Corsican", 0 },
  /* 0x83 */ { 0 },
  /* 0x84 */ { "lt", "Lithuanian", "ms", "Malay", 0 },
  /* 0x85 */ { "da", "Danish", 0 },
  /* 0x86 */ { 0 },
  /* 0x87 */ { "ny", "Nyanja", 0 },
  /* 0x88 */ { "ik", "Inupiaq", "iu", "Inuktitut", "sd", "Sindhi", 0 },
  /* 0x89 */ { "rw", "Kinyarwanda", 0 },
  /* 0x8a */ { "ki", "Kikuyu", 0 },
  /* 0x8b */ { 0 },
  /* 0x8c */ { "uk", "Ukrainian", 0 },
  /* 0x8d */ { "la", "Latin", 0 },
  /* 0x8e */ { "nr", "South Ndebele", "oc", "Occitan", 0 },
  /* 0x8f */ { 0 },
  /* 0x90 */ { "ml", "Malayalam", 0 },
  /* 0x91 */ { 0 },
  /* 0x92 */ { "ku", "Kurdish", "rn", "Rundi", 0 },
  /* 0x93 */ { 0 },
  /* 0x94 */ { "kn", "Kannada", 0 },
  /* 0x95 */ { "ta", "Tamil", 0 },
  /* 0x96 */ { 0 },
  /* 0x97 */ { 0 },
  /* 0x98 */ { 0 },
  /* 0x99 */ { "pi", "Pali", 0 },
  /* 0x9a */ { "sm", "Samoan", 0 },
  /* 0x9b */ { "tw", "Twi", 0 },
  /* 0x9c */ { "nd", "North Ndebele", "oj", "Ojibwa", "tl", "Tagalog", 0 },
  /* 0x9d */ { 0 },
  /* 0x9e */ { 0 },
  /* 0x9f */ { 0 },
  /* 0xa0 */ { "aa", "Afar", "ay", "Aymara", 0 },
  /* 0xa1 */ { "te", "Telugu", 0 },
  /* 0xa2 */ { 0 },
  /* 0xa3 */ { 0 },
  /* 0xa4 */ { "eo", "Esperanto", 0 },
  /* 0xa5 */ { 0 },
  /* 0xa6 */ { 0 },
  /* 0xa7 */ { 0 },
  /* 0xa8 */ { "ia", "Interlingua", "xh", "Xhosa", 0 },
  /* 0xa9 */ { 0 },
  /* 0xaa */ { "jv", "Javanese", 0 },
  /* 0xab */ { 0 },
  /* 0xac */ { 0 },
  /* 0xad */ { "ty", "Tahitian", 0 },
  /* 0xae */ { "os", "Ossetian", 0 },
  /* 0xaf */ { 0 },
  /* 0xb0 */ { "et", "Estonian", 0 },
  /* 0xb1 */ { 0 },
  /* 0xb2 */ { "cy", "Welsh", "so", "Somali", "sq", "Albanian", 0 },
  /* 0xb3 */ { 0 },
  /* 0xb4 */ { "pt", "Portuguese", 0 },
  /* 0xb5 */ { 0 },
  /* 0xb6 */ { "tn", "Tswana", 0 },
  /* 0xb7 */ { "zu", "Zulu", 0 },
  /* 0xb8 */ { "bh", "Bihari", "mn", "Mongolian", "uz", "Uzbek", 0 },
  /* 0xb9 */ { 0 },
  /* 0xba */ { 0 },
  /* 0xbb */ { "lo", "Lao", 0 },
  /* 0xbc */ { "ee", "Ewe", "mg", "Malagasy", 0 },
  /* 0xbd */ { 0 },
  /* 0xbe */ { "lv", "Latvian", 0 },
  /* 0xbf */ { "fi", "Finnish", 0 },
  /* 0xc0 */ { "af", "Afrikaans", "an", "Aragonese", "av", "Avaric", 0 },
  /* 0xc1 */ { "hi", "Hindi", 0 },
  /* 0xc2 */ { "ff", "Fulah", "nv", "Navajo", 0 },
  /* 0xc3 */ { 0 },
  /* 0xc4 */ { 0 },
  /* 0xc5 */ { 0 },
  /* 0xc6 */ { 0 },
  /* 0xc7 */ { "fa", "Persian", 0 },
  /* 0xc8 */ { "yi", "Yiddish", 0 },
  /* 0xc9 */ { 0 },
  /* 0xca */ { "kw", "Cornish", 0 },
  /* 0xcb */ { "tg", "Tajik", 0 },
  /* 0xcc */ { 0 },
  /* 0xcd */ { 0 },
  /* 0xce */ { 0 },
  /* 0xcf */ { "be", "Belarusian", "na", "Nauru", 0 },
  /* 0xd0 */ { "qu", "Quechua", "sh", "Serbo-Croatian", 0 },
  /* 0xd1 */ { 0 },
  /* 0xd2 */ { "dz", "Dzongkha", "kk", "Kazakh", 0 },
  /* 0xd3 */ { 0 },
  /* 0xd4 */ { "cv", "Chuvash", "kr", "Kanuri", 0 },
  /* 0xd5 */ { 0 },
  /* 0xd6 */ { "br", "Breton", 0 },
  /* 0xd7 */ { "bm", "Bambara", 0 },
  /* 0xd8 */ { 0 },
  /* 0xd9 */ { 0 },
  /* 0xda */ { "ss", "Swati", "tr", "Turkish", 0 },
  /* 0xdb */ { 0 },
  /* 0xdc */ { "mi", "Maori", 0 },
  /* 0xdd */ { "no", "Norwegian", 0 },
  /* 0xde */ { 0 },
  /* 0xdf */ { 0 },
  /* 0xe0 */ { "ak", "Akan", "as", "Assamese", "it", "Italian", 0 },
  /* 0xe1 */ { 0 },
  /* 0xe2 */ { "ca", "Catalan", "km", "Central Khmer", 0 },
  /* 0xe3 */ { 0 },
  /* 0xe4 */ { "mk", "Macedonian", "tt", "Tatar", 0 },
  /* 0xe5 */ { 0 },
  /* 0xe6 */ { 0 },
  /* 0xe7 */ { "rm", "Romansh", 0 },
  /* 0xe8 */ { "io", "Ido", "sl", "Slovenian", 0 },
  /* 0xe9 */ { 0 },
  /* 0xea */ { "hz", "Herero", "ka", "Georgian", "ky", "Kirghiz", 0 },
  /* 0xeb */ { "ve", "Venda", 0 },
  /* 0xec */ { 0 },
  /* 0xed */ { 0 },
  /* 0xee */ { 0 },
  /* 0xef */ { 0 },
  /* 0xf0 */ { "el", "Modern Greek", 0 },
  /* 0xf1 */ { 0 },
  /* 0xf2 */ { "sa", "Sanskrit", 0 },
  /* 0xf3 */ { 0 },
  /* 0xf4 */ { 0 },
  /* 0xf5 */ { 0 },
  /* 0xf6 */ { "wo", "Wolof", 0 },
  /* 0xf7 */ { 0 },
  /* 0xf8 */ { "mr", "Marathi", "zh", "Chinese", 0 },
  /* 0xf9 */ { 0 },
  /* 0xfa */ { "su", "Sundanese", 0 },
  /* 0xfb */ { 0 },
  /* 0xfc */ { "my", "Burmese", 0 },
  /* 0xfd */ { "hu", "Hungarian", "ti", "Tigrinya", 0 },
  /* 0xfe */ { 0 },
  /* 0xff */ { 0 }

};

#endif /* !_HAVE_LANGUAGES_H */

