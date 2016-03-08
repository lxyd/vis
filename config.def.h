/* Configure your desired default key bindings. */

#define ALIAS(name) .alias = name,
#define ACTION(id) .action = &vis_action[VIS_ACTION_##id],

static const char *keymaps[] = {
	NULL
};

static const KeyBinding bindings_basic[] = {
	{ "<C-z>",              ACTION(EDITOR_SUSPEND)                      },
	{ "<Left>",             ACTION(CURSOR_CHAR_PREV)                    },
	{ "<S-Left>",           ACTION(CURSOR_LONGWORD_START_PREV)          },
	{ "<Right>",            ACTION(CURSOR_CHAR_NEXT)                    },
	{ "<S-Right>",          ACTION(CURSOR_LONGWORD_START_NEXT)          },
	{ "<Up>",               ACTION(CURSOR_LINE_UP)                      },
	{ "<Down>",             ACTION(CURSOR_LINE_DOWN)                    },
	{ "<PageUp>",           ACTION(WINDOW_PAGE_UP)                      },
	{ "<PageDown>",         ACTION(WINDOW_PAGE_DOWN)                    },
	{ "<S-PageUp>",         ACTION(WINDOW_HALFPAGE_UP)                  },
	{ "<S-PageDown>",       ACTION(WINDOW_HALFPAGE_DOWN)                },
	{ "<Home>",             ACTION(CURSOR_LINE_BEGIN)                   },
	{ "<End>",              ACTION(CURSOR_LINE_END)                     },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_motions[] = {
	{ "h",                  ACTION(CURSOR_CHAR_PREV)                    },
	{ "<Backspace>",        ALIAS("h")                                  },
	{ "<C-h>",              ALIAS("<Backspace>")                        },
	{ "l",                  ACTION(CURSOR_CHAR_NEXT)                    },
	{ " ",                  ALIAS("l")                                  },
	{ "k",                  ACTION(CURSOR_LINE_UP)                      },
	{ "<C-p>",              ALIAS("k")                                  },
	{ "j",                  ACTION(CURSOR_LINE_DOWN)                    },
	{ "<C-j>",              ALIAS("j")                                  },
	{ "<C-n>",              ALIAS("j")                                  },
	{ "<Enter>",            ALIAS("j")                                  },
	{ "gk",                 ACTION(CURSOR_SCREEN_LINE_UP)               },
	{ "g<Up>",              ALIAS("gk")                                 },
	{ "gj",                 ACTION(CURSOR_SCREEN_LINE_DOWN)             },
	{ "g<Down>",            ALIAS("gj")                                 },
	{ "^",                  ACTION(CURSOR_LINE_START)                   },
	{ "g_",                 ACTION(CURSOR_LINE_FINISH)                  },
	{ "$",                  ACTION(CURSOR_LINE_LASTCHAR)                },
	{ "+",                  ALIAS("j^")                                 },
	{ "-",                  ALIAS("k^")                                 },
	{ "%",                  ACTION(CURSOR_PERCENT)                      },
	{ "b",                  ACTION(CURSOR_WORD_START_PREV)              },
	{ "B",                  ACTION(CURSOR_LONGWORD_START_PREV)          },
	{ "w",                  ACTION(CURSOR_WORD_START_NEXT)              },
	{ "W",                  ACTION(CURSOR_LONGWORD_START_NEXT)          },
	{ "ge",                 ACTION(CURSOR_WORD_END_PREV)                },
	{ "gE",                 ACTION(CURSOR_LONGWORD_END_PREV)            },
	{ "e",                  ACTION(CURSOR_WORD_END_NEXT)                },
	{ "E",                  ACTION(CURSOR_LONGWORD_END_NEXT)            },
	{ "{",                  ACTION(CURSOR_PARAGRAPH_PREV)               },
	{ "}",                  ACTION(CURSOR_PARAGRAPH_NEXT)               },
	{ "(",                  ACTION(CURSOR_SENTENCE_PREV)                },
	{ ")",                  ACTION(CURSOR_SENTENCE_NEXT)                },
	{ "[[",                 ACTION(CURSOR_FUNCTION_START_PREV)          },
	{ "[]",                 ACTION(CURSOR_FUNCTION_END_PREV)            },
	{ "][",                 ACTION(CURSOR_FUNCTION_START_NEXT)          },
	{ "]]",                 ACTION(CURSOR_FUNCTION_END_NEXT)            },
	{ "gg",                 ACTION(CURSOR_LINE_FIRST)                   },
	{ "g0",                 ACTION(CURSOR_SCREEN_LINE_BEGIN)            },
	{ "gm",                 ACTION(CURSOR_SCREEN_LINE_MIDDLE)           },
	{ "g$",                 ACTION(CURSOR_SCREEN_LINE_END)              },
	{ "G",                  ACTION(CURSOR_LINE_LAST)                    },
	{ "|",                  ACTION(CURSOR_COLUMN)                       },
	{ "n",                  ACTION(CURSOR_SEARCH_NEXT)                  },
	{ "N",                  ACTION(CURSOR_SEARCH_PREV)                  },
	{ "H",                  ACTION(CURSOR_WINDOW_LINE_TOP)              },
	{ "M",                  ACTION(CURSOR_WINDOW_LINE_MIDDLE)           },
	{ "L",                  ACTION(CURSOR_WINDOW_LINE_BOTTOM)           },
	{ "*",                  ACTION(CURSOR_SEARCH_WORD_FORWARD)          },
	{ "#",                  ACTION(CURSOR_SEARCH_WORD_BACKWARD)         },
	{ "f",                  ACTION(TO_RIGHT)                            },
	{ "F",                  ACTION(TO_LEFT)                             },
	{ "t",                  ACTION(TILL_RIGHT)                          },
	{ "T",                  ACTION(TILL_LEFT)                           },
	{ ";",                  ACTION(TOTILL_REPEAT)                       },
	{ ",",                  ACTION(TOTILL_REVERSE)                      },
	{ "/",                  ACTION(PROMPT_SEARCH_FORWARD)               },
	{ "?",                  ACTION(PROMPT_SEARCH_BACKWARD)              },
	{ "`",                  ACTION(MARK_GOTO)                           },
	{ "'",                  ACTION(MARK_GOTO_LINE)                      },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_textobjects[] = {
	{ "aw",                 ACTION(TEXT_OBJECT_WORD_OUTER)              },
	{ "aW",                 ACTION(TEXT_OBJECT_LONGWORD_OUTER)          },
	{ "as",                 ACTION(TEXT_OBJECT_SENTENCE)                },
	{ "ap",                 ACTION(TEXT_OBJECT_PARAGRAPH)               },
	{ "a[",                 ACTION(TEXT_OBJECT_SQUARE_BRACKET_OUTER)    },
	{ "a]",                 ALIAS("a[")                                 },
	{ "a(",                 ACTION(TEXT_OBJECT_PARANTHESE_OUTER)        },
	{ "a)",                 ALIAS("a(")                                 },
	{ "ab",                 ALIAS("a(")                                 },
	{ "a<",                 ACTION(TEXT_OBJECT_ANGLE_BRACKET_OUTER)     },
	{ "a>",                 ALIAS("a<")                                 },
	{ "a{",                 ACTION(TEXT_OBJECT_CURLY_BRACKET_OUTER)     },
	{ "a}",                 ALIAS("a{")                                 },
	{ "aB",                 ALIAS("a{")                                 },
	{ "a\"",                ACTION(TEXT_OBJECT_QUOTE_OUTER)             },
	{ "a\'",                ACTION(TEXT_OBJECT_SINGLE_QUOTE_OUTER)      },
	{ "a`",                 ACTION(TEXT_OBJECT_BACKTICK_OUTER)          },
	{ "ae",                 ACTION(TEXT_OBJECT_ENTIRE_OUTER)            },
	{ "af",                 ACTION(TEXT_OBJECT_FUNCTION_OUTER)          },
	{ "al",                 ACTION(TEXT_OBJECT_LINE_OUTER)              },
	{ "iw",                 ACTION(TEXT_OBJECT_WORD_INNER)              },
	{ "iW",                 ACTION(TEXT_OBJECT_LONGWORD_INNER)          },
	{ "is",                 ACTION(TEXT_OBJECT_SENTENCE)                },
	{ "ip",                 ACTION(TEXT_OBJECT_PARAGRAPH)               },
	{ "i[",                 ACTION(TEXT_OBJECT_SQUARE_BRACKET_INNER)    },
	{ "i]",                 ALIAS("i[")                                 },
	{ "i(",                 ACTION(TEXT_OBJECT_PARANTHESE_INNER)        },
	{ "i)",                 ALIAS("i(")                                 },
	{ "ib",                 ALIAS("i(")                                 },
	{ "i<",                 ACTION(TEXT_OBJECT_ANGLE_BRACKET_INNER)     },
	{ "i>",                 ALIAS("i<")                                 },
	{ "i{",                 ACTION(TEXT_OBJECT_CURLY_BRACKET_INNER)     },
	{ "i}",                 ALIAS("i{")                                 },
	{ "iB",                 ALIAS("i{")                                 },
	{ "i\"",                ACTION(TEXT_OBJECT_QUOTE_INNER)             },
	{ "i\'",                ACTION(TEXT_OBJECT_SINGLE_QUOTE_INNER)      },
	{ "i`",                 ACTION(TEXT_OBJECT_BACKTICK_INNER)          },
	{ "ie",                 ACTION(TEXT_OBJECT_ENTIRE_INNER)            },
	{ "if",                 ACTION(TEXT_OBJECT_FUNCTION_INNER)          },
	{ "il",                 ACTION(TEXT_OBJECT_LINE_INNER)              },
	{ "i<Tab>",             ACTION(TEXT_OBJECT_INDENTATION)             },
	{ "a<Tab>",             ACTION(TEXT_OBJECT_INDENTATION)             },
	{ "gn",                 ACTION(TEXT_OBJECT_SEARCH_FORWARD)          },
	{ "gN",                 ACTION(TEXT_OBJECT_SEARCH_BACKWARD)         },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_operators[] = {
	{ "0",                  ACTION(COUNT)                               },
	{ "1",                  ACTION(COUNT)                               },
	{ "2",                  ACTION(COUNT)                               },
	{ "3",                  ACTION(COUNT)                               },
	{ "4",                  ACTION(COUNT)                               },
	{ "5",                  ACTION(COUNT)                               },
	{ "6",                  ACTION(COUNT)                               },
	{ "7",                  ACTION(COUNT)                               },
	{ "8",                  ACTION(COUNT)                               },
	{ "9",                  ACTION(COUNT)                               },
	{ "d",                  ACTION(OPERATOR_DELETE)                     },
	{ "c",                  ACTION(OPERATOR_CHANGE)                     },
	{ "y",                  ACTION(OPERATOR_YANK)                       },
	{ ">",                  ACTION(OPERATOR_SHIFT_RIGHT)                },
	{ "<",                  ACTION(OPERATOR_SHIFT_LEFT)                 },
	{ "gU",                 ACTION(OPERATOR_CASE_UPPER)                 },
	{ "~",                  ACTION(OPERATOR_CASE_SWAP)                  },
	{ "g~",                 ACTION(OPERATOR_CASE_SWAP)                  },
	{ "gu",                 ACTION(OPERATOR_CASE_LOWER)                 },
	{ "!",                  ACTION(OPERATOR_FILTER)                     },
	{ "=",                  ACTION(OPERATOR_FILTER_FMT)                 },
	{ "p",                  ACTION(PUT_AFTER)                           },
	{ "P",                  ACTION(PUT_BEFORE)                          },
	{ "gp",                 ACTION(PUT_AFTER_END)                       },
	{ "gP",                 ACTION(PUT_BEFORE_END)                      },
	{ "\"",                 ACTION(REGISTER)                            },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_operator_options[] = {
	{ "v",                  ACTION(MOTION_CHARWISE)                     },
	{ "V",                  ACTION(MOTION_LINEWISE)                     },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_normal[] = {
	{ "<Escape>",           ACTION(CURSORS_REMOVE_ALL)                  },
	{ "<C-c>",              ALIAS("<Escape>")                           },
	{ "<Delete>",           ALIAS("x")                                  },
	{ "<C-k>",              ACTION(CURSORS_NEW_LINE_ABOVE)              },
	{ "<C-j>",              ACTION(CURSORS_NEW_LINE_BELOW)              },
	{ "<Tab>",              ACTION(CURSORS_ALIGN)                       },
	{ "<C-n>",              ACTION(CURSOR_SELECT_WORD)                  },
	{ "<C-p>",              ACTION(CURSORS_REMOVE_LAST)                 },
	{ "<C-w>n",             ALIAS(":open<Enter>")                       },
	{ "<C-w>c",             ALIAS(":q<Enter>")                          },
	{ "<C-w>s",             ALIAS(":split<Enter>")                      },
	{ "<C-w>v",             ALIAS(":vsplit<Enter>")                     },
	{ "<C-w>j",             ACTION(WINDOW_NEXT)                         },
	{ "<C-w>l",             ALIAS("<C-w>j")                             },
	{ "<C-w>w",             ALIAS("<C-w>j")                             },
	{ "<C-w><C-w>",         ALIAS("<C-w>j")                             },
	{ "<C-w><C-j>",         ALIAS("<C-w>j")                             },
	{ "<C-w><C-l>",         ALIAS("<C-w>j")                             },
	{ "<C-w>k",             ACTION(WINDOW_PREV)                         },
	{ "<C-w>h",             ALIAS("<C-w>k")                             },
	{ "<C-w><C-h>",         ALIAS("<C-w>k")                             },
	{ "<C-w><C-k>",         ALIAS("<C-w>k")                             },
	{ "<C-w><Backspace>",   ALIAS("<C-w>k")                             },
	{ "<C-b>",              ALIAS("<PageUp>")                           },
	{ "<C-f>",              ALIAS("<PageDown>")                         },
	{ "<C-u>",              ALIAS("<S-PageUp>")                         },
	{ "<C-d>",              ALIAS("<S-PageDown>")                       },
	{ "<C-e>",              ACTION(WINDOW_SLIDE_UP)                     },
	{ "<C-y>",              ACTION(WINDOW_SLIDE_DOWN)                   },
	{ "<C-o>",              ACTION(JUMPLIST_PREV)                       },
	{ "<C-i>",              ACTION(JUMPLIST_NEXT)                       },
	{ "g;",                 ACTION(CHANGELIST_PREV)                     },
	{ "g,",                 ACTION(CHANGELIST_NEXT)                     },
	{ "a",                  ACTION(APPEND_CHAR_NEXT)                    },
	{ "A",                  ACTION(APPEND_LINE_END)                     },
	{ "C",                  ALIAS("c$")                                 },
	{ "D",                  ALIAS("d$")                                 },
	{ "I",                  ACTION(INSERT_LINE_START)                   },
	{ ".",                  ACTION(REPEAT)                              },
	{ "o",                  ACTION(OPEN_LINE_BELOW)                     },
	{ "O",                  ACTION(OPEN_LINE_ABOVE)                     },
	{ "J",                  ACTION(JOIN_LINE_BELOW)                     },
	{ "x",                  ACTION(DELETE_CHAR_NEXT)                    },
	{ "r",                  ACTION(REPLACE_CHAR)                        },
	{ "i",                  ACTION(MODE_INSERT)                         },
	{ "v",                  ACTION(MODE_VISUAL)                         },
	{ "V",                  ACTION(MODE_VISUAL_LINE)                    },
	{ "R",                  ACTION(MODE_REPLACE)                        },
	{ "S",                  ALIAS("^c$")                                },
	{ "s",                  ALIAS("cl")                                 },
	{ "Y",                  ALIAS("y$")                                 },
	{ "X",                  ALIAS("dh")                                 },
	{ "u",                  ACTION(UNDO)                                },
	{ "<C-r>",              ACTION(REDO)                                },
	{ "g+",                 ACTION(LATER)                               },
	{ "g-",                 ACTION(EARLIER)                             },
	{ "<C-l>",              ACTION(REDRAW)                              },
	{ ":",                  ACTION(PROMPT_SHOW)                         },
	{ "ZZ",                 ALIAS(":wq<Enter>")                         },
	{ "ZQ",                 ALIAS(":q!<Enter>")                         },
	{ "zt",                 ACTION(WINDOW_REDRAW_TOP)                   },
	{ "zz",                 ACTION(WINDOW_REDRAW_CENTER)                },
	{ "zb",                 ACTION(WINDOW_REDRAW_BOTTOM)                },
	{ "q",                  ACTION(MACRO_RECORD)                        },
	{ "@",                  ACTION(MACRO_REPLAY)                        },
	{ "gv",                 ACTION(SELECTION_RESTORE)                   },
	{ "m",                  ACTION(MARK_SET)                            },
	{ "<F1>",               ALIAS(":help<Enter>")                       },
	{ "ga",                 ACTION(UNICODE_INFO)                        },
	{ "~",                  ALIAS("<vis-operator-case-swap>ll")         },
	{ "<End>",              ALIAS("$")                                  },
	{ "gf",                 ACTION(OPEN_FILE_UNDER_CURSOR)              },
	{ "<C-w>gf",            ACTION(OPEN_FILE_UNDER_CURSOR_NEW_WINDOW)   },
	{ "gn",                 ALIAS("vgn")                                },
	{ "gN",                 ALIAS("vgN")                                },
	{ "<C-a>",              ACTION(NUMBER_INCREMENT)                    },
	{ "<C-x>",              ACTION(NUMBER_DECREMENT)                    },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_visual[] = {
	{ "<C-n>",              ACTION(CURSORS_NEW_MATCH_NEXT)              },
	{ "<C-x>",              ACTION(CURSORS_NEW_MATCH_SKIP)              },
	{ "<C-p>",              ACTION(CURSORS_REMOVE_LAST)                 },
	{ "I",                  ACTION(CURSORS_NEW_LINES_BEGIN)             },
	{ "A",                  ACTION(CURSORS_NEW_LINES_END)               },
	{ "<Backspace>",        ALIAS("d")                                  },
	{ "<C-h>",              ALIAS("<Backspace>")                        },
	{ "<Delete>",           ALIAS("<Backspace>")                        },
	{ "<Escape>",           ACTION(MODE_NORMAL)                         },
	{ "<C-c>",              ALIAS("<Escape>")                           },
	{ "v",                  ALIAS("<Escape>")                           },
	{ "V",                  ACTION(MODE_VISUAL_LINE)                    },
	{ ":",                  ACTION(PROMPT_SHOW_VISUAL)                  },
	{ "<C-b>",              ALIAS("<PageUp>")                           },
	{ "<C-f>",              ALIAS("<PageDown>")                         },
	{ "<C-u>",              ALIAS("<S-PageUp>")                         },
	{ "<C-d>",              ALIAS("<S-PageDown>")                       },
	{ "x",                  ALIAS("d")                                  },
	{ "r",                  ALIAS("c")                                  },
	{ "s",                  ALIAS("c")                                  },
	{ "J",                  ACTION(JOIN_LINES)                          },
	{ "o",                  ACTION(SELECTION_FLIP)                      },
	{ ">",                  ALIAS("<vis-operator-shift-right>gv")       },
	{ "<",                  ALIAS("<vis-operator-shift-left>gv")        },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_visual_line[] = {
	{ "v",                  ACTION(MODE_VISUAL)                         },
	{ "V",                  ACTION(MODE_NORMAL)                         },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_readline[] = {
	{ "<Backspace>",        ACTION(DELETE_CHAR_PREV)                    },
	{ "<C-h>",              ALIAS("<Backspace>")                        },
	{ "<Delete>",           ACTION(DELETE_CHAR_NEXT)                    },
	{ "<Escape>",           ACTION(MODE_NORMAL)                         },
	{ "<C-c>",              ALIAS("<Escape>")                           },
	{ "<C-d>",              ACTION(DELETE_CHAR_NEXT)                    },
	{ "<C-w>",              ACTION(DELETE_WORD_PREV)                    },
	{ "<C-u>",              ACTION(DELETE_LINE_BEGIN)                   },
	{ "<C-v>",              ACTION(INSERT_VERBATIM)                     },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_insert[] = {
	{ "<Escape>",           ACTION(MODE_NORMAL)                         },
	{ "<C-i>",              ALIAS("<Tab>")                              },
	{ "<Enter>",            ACTION(INSERT_NEWLINE)                      },
	{ "<C-j>",              ALIAS("<Enter>")                            },
	{ "<C-m>",              ALIAS("<Enter>")                            },
	{ "<C-o>",              ACTION(MODE_OPERATOR_PENDING)               },
	{ "<C-d>",              ALIAS("<Escape><<i")                        },
	{ "<C-t>",              ALIAS("<Escape>>>i")                        },
	{ "<C-x><C-e>",         ACTION(WINDOW_SLIDE_UP)                     },
	{ "<C-x><C-y>",         ACTION(WINDOW_SLIDE_DOWN)                   },
	{ "<Tab>",              ACTION(INSERT_TAB)                          },
	{ "<S-Tab>",            ACTION(CURSORS_ALIGN_INDENT)                },
	{ "<C-r>",              ACTION(INSERT_REGISTER)                     },
	{ 0 /* empty last element, array terminator */                      },
};

static const KeyBinding bindings_replace[] = {
	{ 0 /* empty last element, array terminator */                      },
};

/* For each mode we list a all key bindings, if a key is bound in more than
 * one array the first definition is used and further ones are ignored. */
static const KeyBinding **default_bindings[] = {
	[VIS_MODE_OPERATOR_PENDING] = (const KeyBinding*[]){
		bindings_operator_options,
		bindings_operators,
		bindings_textobjects,
		bindings_motions,
		bindings_basic,
		NULL,
	},
	[VIS_MODE_NORMAL] = (const KeyBinding*[]){
		bindings_normal,
		bindings_operators,
		bindings_motions,
		bindings_basic,
		NULL,
	},
	[VIS_MODE_VISUAL] = (const KeyBinding*[]){
		bindings_visual,
		bindings_textobjects,
		bindings_operators,
		bindings_motions,
		bindings_basic,
		NULL,
	},
	[VIS_MODE_VISUAL_LINE] = (const KeyBinding*[]){
		bindings_visual_line,
		NULL,
	},
	[VIS_MODE_INSERT] = (const KeyBinding*[]){
		bindings_insert,
		bindings_readline,
		bindings_basic,
		NULL,
	},
	[VIS_MODE_REPLACE] = (const KeyBinding*[]){
		bindings_replace,
		NULL,
	},
};
