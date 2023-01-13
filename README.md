# tree-sitter-pory
The start of a poryscript tree-sitter parser. This isn't fully complete yet so there may be some bugs. PRs accepted.


## Installation

1) Add the following snippet to your init.lua:
```
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.pory = {
  install_info = {
    url = <PATH to REPO>,
    files = {"src/parser.c"},
    -- optional entries:
    generate_requires_npm = false, -- if stand-alone parser without npm dependencies
    requires_generate_from_grammar = false, -- if folder contains pre-generated src/parser.c
  },
  filetype = "pory", -- if filetype does not match the parser name
}
```
2) Run `TSInstallFromGrammar pory`

3) Copy `queries/highlights.scm` to `<path to nvim>/queries/after/pory/highlights.scm` (Optional, if you want the highlighting)
